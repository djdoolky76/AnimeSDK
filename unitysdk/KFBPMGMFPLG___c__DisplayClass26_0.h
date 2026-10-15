#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }

#define KFBPMGMFPLG___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB38E220)
#define KFBPMGMFPLG___C__DISPLAYCLASS26_0___PICKLEAVEEMPLOYEE_B__1_OFFSET UNITYSDK_OFFSET(0xB38F050)

inline static constexpr unsigned int KFBPMGMFPLG___c__DisplayClass26_0_TypeDefinitionIndex = 80316;

	class KFBPMGMFPLG___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __PickLeaveEmployee_b__1(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__DISPLAYCLASS26_0___PICKLEAVEEMPLOYEE_B__1_OFFSET))(this, a1);
		}

	};
