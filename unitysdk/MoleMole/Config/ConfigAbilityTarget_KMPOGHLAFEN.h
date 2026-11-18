#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_KMPOGHLAFEN_COMPARE_OFFSET UNITYSDK_OFFSET(0x7EB7F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTarget_KMPOGHLAFEN_TypeDefinitionIndex = 41948;

	struct alignas(8) ConfigAbilityTarget_KMPOGHLAFEN
	{
		::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
		::System::Byte _padding0[0x4];
		::System::Func_5<::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::MGHNAPKHBOG, ::MGHNAPKHBOG, ::System::Int32>* BOLPAEEHBBF; // 0x20
		::MoleMole::Config::ConfigAbilityTarget* AHMFPFACACD; // 0x28

		::System::Int32 Compare(::MGHNAPKHBOG DPGFPHIMDEL, ::MGHNAPKHBOG DLJPLHKELCO)
		{
			return ((::System::Int32(*)(::PVOID, ::MGHNAPKHBOG, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_KMPOGHLAFEN_COMPARE_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
		}
	};
}
