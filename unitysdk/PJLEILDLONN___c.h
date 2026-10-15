#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJLEILDLONN;
namespace System { class Object; }

#define PJLEILDLONN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7D710)
#define PJLEILDLONN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7D740)
#define PJLEILDLONN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF7D750)

	class PJLEILDLONN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLEILDLONN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN___C_CTOR_OFFSET))(this);
		}

		::PJLEILDLONN* __cctor_b__28_0()
		{
			return ((::PJLEILDLONN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
