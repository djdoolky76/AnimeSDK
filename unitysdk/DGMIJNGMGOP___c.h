#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define DGMIJNGMGOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADC13C0)
#define DGMIJNGMGOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC1400)
#define DGMIJNGMGOP___C___CLOSESCREENTRANSFER_B__15_0_OFFSET UNITYSDK_OFFSET(0x1ADC1410)

inline static constexpr unsigned int DGMIJNGMGOP___c_TypeDefinitionIndex = 53962;

	class DGMIJNGMGOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x660F0);
		}

		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x660F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGMIJNGMGOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP___C_CTOR_OFFSET))(this);
		}

		::System::Void __CloseScreenTransfer_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMIJNGMGOP___C___CLOSESCREENTRANSFER_B__15_0_OFFSET))(this);
		}

	};
