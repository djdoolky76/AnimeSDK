#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HGHEODFGFBP_COMPARE_OFFSET UNITYSDK_OFFSET(0x700100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTarget_HGHEODFGFBP_TypeDefinitionIndex = 41949;

	struct alignas(8) ConfigAbilityTarget_HGHEODFGFBP
	{
		::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
		::System::Byte _padding0[0x4];
		::System::Func_5<::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Int32>* BOLPAEEHBBF; // 0x20
		::MoleMole::Config::ConfigAbilityTarget* AHMFPFACACD; // 0x28

		::System::Int32 Compare(::MoleMole::Battle::Entity* DPGFPHIMDEL, ::MoleMole::Battle::Entity* DLJPLHKELCO)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_HGHEODFGFBP_COMPARE_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
		}
	};
}
