#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"
#include "unitysdk/UnityEngine/E99D0ADA759D15E2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/PointerUIBase.h"
#include "unitysdk/UnityEngine/EC2AC38D9624497F.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MeshCollider; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_AE130FE39218EC12_OFFSET UNITYSDK_OFFSET(0x43FCD70)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_E713528A20B32BE0_OFFSET UNITYSDK_OFFSET(0x43FCA90)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_F3DCCFE482F22767_OFFSET UNITYSDK_OFFSET(0x43FCC70)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x43FCA30)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x43FCF50)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIMesh_TypeDefinitionIndex = 19436;

	class PointerUIMesh : public ::ZenFulcrum::EmbeddedBrowser::PointerUIBase
	{
	public:
		::UnityEngine::MeshCollider* B83600DB42E148C1; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::E99D0ADA759D15E2>* E677D3DA8DD0D246; // 0xC8
		::UnityEngine::B8AC70DD96553B07 layerMask; // 0xD0

		::UnityEngine::Vector2 F3DCCFE482F22767(::UnityEngine::Vector2 ED671300348959C1, ::System::Int32 ED5B4DAB9542128E)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_F3DCCFE482F22767_OFFSET))(this, ED671300348959C1, ED5B4DAB9542128E);
		}

		::System::Void E713528A20B32BE0(::UnityEngine::Vector3& A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion& FBF9C1F5AF32571D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_E713528A20B32BE0_OFFSET))(this, A0C1F1E95D5F6CA9, FBF9C1F5AF32571D);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::UnityEngine::Vector2 AE130FE39218EC12(::UnityEngine::EC2AC38D9624497F B3D8FD0465C59C76, ::System::Int32 ED5B4DAB9542128E)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::EC2AC38D9624497F, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_AE130FE39218EC12_OFFSET))(this, B3D8FD0465C59C76, ED5B4DAB9542128E);
		}
	};
}
