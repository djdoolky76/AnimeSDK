#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BADOONPCDLO;
namespace System { class Object; }

#define BADOONPCDLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B10F0)
#define BADOONPCDLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B1130)
#define BADOONPCDLO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7B1140)

	class BADOONPCDLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BADOONPCDLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO___C_CTOR_OFFSET))(this);
		}

		::BADOONPCDLO* __cctor_b__33_0()
		{
			return ((::BADOONPCDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
