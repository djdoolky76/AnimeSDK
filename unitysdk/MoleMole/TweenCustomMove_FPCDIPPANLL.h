#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace MoleMole { class TweenCustomMove; }

#define MOLEMOLE_TWEENCUSTOMMOVE_FPCDIPPANLL_DBFPKJJEFKM_OFFSET UNITYSDK_OFFSET(0x1A742A00)
#define MOLEMOLE_TWEENCUSTOMMOVE_FPCDIPPANLL_ELDDHDIAHGM_OFFSET UNITYSDK_OFFSET(0x1A7429F0)
#define MOLEMOLE_TWEENCUSTOMMOVE_FPCDIPPANLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7429E0)

namespace MoleMole
{
	inline static constexpr unsigned int TweenCustomMove_FPCDIPPANLL_TypeDefinitionIndex = 45663;

	class TweenCustomMove_FPCDIPPANLL : public ::System::Object
	{
	public:
		::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* FKLGCKPKCJJ; // 0x10
		::MoleMole::TweenCustomMove* KLHPEBKNIFB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_FPCDIPPANLL__CTOR_OFFSET))(this);
		}

		::System::Void ELDDHDIAHGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_FPCDIPPANLL_ELDDHDIAHGM_OFFSET))(this);
		}

		::UnityEngine::Vector2 DBFPKJJEFKM()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_FPCDIPPANLL_DBFPKJJEFKM_OFFSET))(this);
		}
	};
}
