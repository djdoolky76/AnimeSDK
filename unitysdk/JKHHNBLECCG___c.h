#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKHHNBLECCG;
namespace System { class Object; }

#define JKHHNBLECCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76BB90)
#define JKHHNBLECCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76BBD0)
#define JKHHNBLECCG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E76BBE0)

	class JKHHNBLECCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKHHNBLECCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG___C_CTOR_OFFSET))(this);
		}

		::JKHHNBLECCG* __cctor_b__28_0()
		{
			return ((::JKHHNBLECCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
