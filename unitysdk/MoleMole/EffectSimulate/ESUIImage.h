#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIBehavior.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x180D12C0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x180D1230)
#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x180D0FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x180D0C20)
#define MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x180D11B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIImage_TypeDefinitionIndex = 64496;

	class ESUIImage : public ::MoleMole::EffectSimulate::ESUIBehavior
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x60
		::UnityEngine::Color color; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void PHOADBJGFBE(::System::Boolean PBKICEDNILK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_PHOADBJGFBE_OFFSET))(this, PBKICEDNILK);
		}

		::System::Void OHFHFOHMBJH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_OHFHFOHMBJH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIIMAGE_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
