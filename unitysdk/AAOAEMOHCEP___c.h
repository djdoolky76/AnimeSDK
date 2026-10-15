#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOAEMOHCEP;
namespace System { class Object; }

#define AAOAEMOHCEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC44F0)
#define AAOAEMOHCEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC4520)
#define AAOAEMOHCEP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDC4530)

	class AAOAEMOHCEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAOAEMOHCEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP___C_CTOR_OFFSET))(this);
		}

		::AAOAEMOHCEP* __cctor_b__28_0()
		{
			return ((::AAOAEMOHCEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOAEMOHCEP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
