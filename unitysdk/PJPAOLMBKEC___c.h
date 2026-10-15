#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJPAOLMBKEC;
namespace System { class Object; }

#define PJPAOLMBKEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF83C10)
#define PJPAOLMBKEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF83C50)
#define PJPAOLMBKEC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF83C60)

	class PJPAOLMBKEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJPAOLMBKEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPAOLMBKEC___C_CTOR_OFFSET))(this);
		}

		::PJPAOLMBKEC* __cctor_b__33_0()
		{
			return ((::PJPAOLMBKEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPAOLMBKEC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
