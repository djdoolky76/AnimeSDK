#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OAMAMDGEJKH;
namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_CONFIG_CONFIGABILITYTARGET_OJKCOJFGBPF_COMPARE_OFFSET UNITYSDK_OFFSET(0x606AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTarget_OJKCOJFGBPF_TypeDefinitionIndex = 41950;

	struct alignas(8) ConfigAbilityTarget_OJKCOJFGBPF
	{
		::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
		::System::Byte _padding0[0x4];
		::System::Func_5<::UnityEngine::Vector3, ::MoleMole::Config::ConfigAbilityTarget*, ::OAMAMDGEJKH*, ::OAMAMDGEJKH*, ::System::Int32>* BOLPAEEHBBF; // 0x20
		::MoleMole::Config::ConfigAbilityTarget* AHMFPFACACD; // 0x28

		::System::Int32 Compare(::OAMAMDGEJKH* DPGFPHIMDEL, ::OAMAMDGEJKH* DLJPLHKELCO)
		{
			return ((::System::Int32(*)(::PVOID, ::OAMAMDGEJKH*, ::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYTARGET_OJKCOJFGBPF_COMPARE_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
		}
	};
}
