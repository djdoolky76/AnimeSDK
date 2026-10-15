#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PropComponent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FBMKMNHIDGA_CTOR_OFFSET UNITYSDK_OFFSET(0x156A8270)
#define FBMKMNHIDGA_EOGLIOBFGFC_OFFSET UNITYSDK_OFFSET(0x156A7F00)
#define FBMKMNHIDGA_IFJFOMDHIEM_OFFSET UNITYSDK_OFFSET(0x156A7D90)
#define FBMKMNHIDGA_OGJDJNFMMPA_OFFSET UNITYSDK_OFFSET(0x156A7F90)
#define FBMKMNHIDGA_OKOIMEGPMFM_OFFSET UNITYSDK_OFFSET(0x156A81C0)
#define FBMKMNHIDGA_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x156A7B40)
#define FBMKMNHIDGA_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x156A7D30)

inline static constexpr unsigned int FBMKMNHIDGA_TypeDefinitionIndex = 47918;

	class FBMKMNHIDGA : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::PropComponent*>* NCBHGMPEMBD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMKMNHIDGA_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FBMKMNHIDGA_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FBMKMNHIDGA_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void EOGLIOBFGFC(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FBMKMNHIDGA_EOGLIOBFGFC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IFJFOMDHIEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMKMNHIDGA_IFJFOMDHIEM_OFFSET))(this);
		}

		::System::Void OGJDJNFMMPA(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FBMKMNHIDGA_OGJDJNFMMPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OKOIMEGPMFM(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + FBMKMNHIDGA_OKOIMEGPMFM_OFFSET))(this, a1);
		}

	};
