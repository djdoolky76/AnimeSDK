#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DecalPuzzleMethod.h"
#include "unitysdk/RPG/Client/DecalPuzzleRegionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class FreeDecal; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DECALPUZZLEREGION_AFLIDIAPFGG_OFFSET UNITYSDK_OFFSET(0xCBE5C30)
#define RPG_CLIENT_DECALPUZZLEREGION_BHJOJHIHNOD_OFFSET UNITYSDK_OFFSET(0xCBE5500)
#define RPG_CLIENT_DECALPUZZLEREGION_BMNNFDJNEDF_OFFSET UNITYSDK_OFFSET(0xCBE55D0)
#define RPG_CLIENT_DECALPUZZLEREGION_CAFNBKMHDFD_OFFSET UNITYSDK_OFFSET(0xCBE5B50)
#define RPG_CLIENT_DECALPUZZLEREGION_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE60D0)
#define RPG_CLIENT_DECALPUZZLEREGION_ENLFEDMFBCA_OFFSET UNITYSDK_OFFSET(0xCBE5E40)
#define RPG_CLIENT_DECALPUZZLEREGION_GKGIGLPJHFC_OFFSET UNITYSDK_OFFSET(0xCBE5BC0)
#define RPG_CLIENT_DECALPUZZLEREGION_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCBE5AC0)
#define RPG_CLIENT_DECALPUZZLEREGION_HOMOONBONNJ_OFFSET UNITYSDK_OFFSET(0xCBE59F0)
#define RPG_CLIENT_DECALPUZZLEREGION_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCBE5A60)
#define RPG_CLIENT_DECALPUZZLEREGION_KCHLCLKNMKE_OFFSET UNITYSDK_OFFSET(0xCBE4FF0)
#define RPG_CLIENT_DECALPUZZLEREGION_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCBE4FA0)
#define RPG_CLIENT_DECALPUZZLEREGION_KPDDICHAKIC_OFFSET UNITYSDK_OFFSET(0xCBE5900)
#define RPG_CLIENT_DECALPUZZLEREGION_KPNNCCBJFEB_OFFSET UNITYSDK_OFFSET(0xCBE5240)
#define RPG_CLIENT_DECALPUZZLEREGION_NFCAHCCDDKG_OFFSET UNITYSDK_OFFSET(0xCBE5750)
#define RPG_CLIENT_DECALPUZZLEREGION_OKHEDIADOEC_OFFSET UNITYSDK_OFFSET(0xCBE6000)

namespace RPG::Client
{
	inline static constexpr unsigned int DecalPuzzleRegion_TypeDefinitionIndex = 68657;

	class DecalPuzzleRegion : public ::System::Object
	{
	public:
		::RPG::Client::DecalPuzzleMethod Method; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* DecalTypeList; // 0x18
		::RPG::Client::DecalPuzzleRegionType TargetRegionType; // 0x20
		::UnityEngine::Rect TargetRectRegion; // 0x24
		::UnityEngine::Vector2 TargetCircleRegionCenter; // 0x34
		::System::Single TargetCircleRegionRadius; // 0x3C
		::RPG::Client::DecalPuzzleRegionType DecalRegionType; // 0x40
		::System::Single DecalSize; // 0x44
		::System::Single DecalRadius; // 0x48
		::System::Single MinFullRatio; // 0x4C
		::System::Int32 OverrideNeedCount; // 0x50
		::System::Single DecalTestWidth; // 0x54
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ValidDecals; // 0x58
		::System::Int32 ValidCount; // 0x60
		::System::Int32 NeedCount; // 0x64
		::UnityEngine::Transform* _Root; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* _EmptyRects; // 0x70
		::Il2CppArray<::UnityEngine::Rect>* _SubRects; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Boolean KPNNCCBJFEB(::RPG::Client::FreeDecal* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_KPNNCCBJFEB_OFFSET))(this, a1);
		}

		::System::Boolean NFCAHCCDDKG(::RPG::Client::FreeDecal* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_NFCAHCCDDKG_OFFSET))(this, a1);
		}

		::System::Boolean HOMOONBONNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_HOMOONBONNJ_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KCHLCLKNMKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_KCHLCLKNMKE_OFFSET))(this);
		}

		::System::Boolean BHJOJHIHNOD(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_BHJOJHIHNOD_OFFSET))(this, a1);
		}

		::System::Boolean BMNNFDJNEDF(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_BMNNFDJNEDF_OFFSET))(this, a1);
		}

		::System::Single CAFNBKMHDFD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_CAFNBKMHDFD_OFFSET))(this);
		}

		::System::Single GKGIGLPJHFC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_GKGIGLPJHFC_OFFSET))(this);
		}

		::System::Int32 AFLIDIAPFGG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_AFLIDIAPFGG_OFFSET))(this);
		}

		::UnityEngine::Rect KPDDICHAKIC(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_KPDDICHAKIC_OFFSET))(this, a1);
		}

		::System::Void ENLFEDMFBCA(::UnityEngine::Rect a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_ENLFEDMFBCA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OKHEDIADOEC(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLEREGION_OKHEDIADOEC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
