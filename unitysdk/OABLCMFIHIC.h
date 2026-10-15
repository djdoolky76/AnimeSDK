#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OABLCMFIHIC;
class PMNODEHAEDC;
namespace RPG::GameCore { class AlleyBuffGridItemData; }
namespace RPG::GameCore { class AlleyDockGridItemData; }
namespace RPG::GameCore { class AlleyMapGridConfig; }
namespace RPG::GameCore { class AlleyShopGridItemData; }
namespace RPG::GameCore { class AlleyWalkableGridItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OABLCMFIHIC_BDBDBFJOIMF_OFFSET UNITYSDK_OFFSET(0xBD19650)
#define OABLCMFIHIC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD19340)
#define OABLCMFIHIC_CJOIDMGDHCK_OFFSET UNITYSDK_OFFSET(0xBD196A0)
#define OABLCMFIHIC_CKKIMAGPMBG_OFFSET UNITYSDK_OFFSET(0xBD19BE0)
#define OABLCMFIHIC_CPPOLMANPCG_OFFSET UNITYSDK_OFFSET(0xBD19740)
#define OABLCMFIHIC_CTOR_OFFSET UNITYSDK_OFFSET(0xBD19430)
#define OABLCMFIHIC_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xBD195E0)
#define OABLCMFIHIC_GIECEACMGIM_OFFSET UNITYSDK_OFFSET(0xBD19E10)
#define OABLCMFIHIC_IPLHOBEMKGM_OFFSET UNITYSDK_OFFSET(0xBD19E60)
#define OABLCMFIHIC_JODJBIBGKIJ_OFFSET UNITYSDK_OFFSET(0xBD198D0)
#define OABLCMFIHIC_KBOKBHFBJLB_OFFSET UNITYSDK_OFFSET(0xBD19880)
#define OABLCMFIHIC_LKCEOAJLGDG_OFFSET UNITYSDK_OFFSET(0xBD19440)
#define OABLCMFIHIC_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xBD196F0)
#define OABLCMFIHIC_OBIIJABDNPC_OFFSET UNITYSDK_OFFSET(0xBD19600)
#define OABLCMFIHIC_OCJBOIHDLDM_OFFSET UNITYSDK_OFFSET(0xBD19C30)
#define OABLCMFIHIC_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xBD195F0)

inline static constexpr unsigned int OABLCMFIHIC_TypeDefinitionIndex = 62351;

	class OABLCMFIHIC : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleyMapGridConfig* MLFPEINBJOI; // 0x10
		::System::UInt32 _MapID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_CTOR_OFFSET))(this);
		}

		static ::OABLCMFIHIC* BPLPBPMEODA(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::OABLCMFIHIC*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + OABLCMFIHIC_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::PMNODEHAEDC* LKCEOAJLGDG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::PMNODEHAEDC*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OABLCMFIHIC_LKCEOAJLGDG_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OABLCMFIHIC_SET_MAPID_OFFSET))(this, a1);
		}

		::System::Int32 OBIIJABDNPC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_OBIIJABDNPC_OFFSET))(this);
		}

		::System::Int32 BDBDBFJOIMF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_BDBDBFJOIMF_OFFSET))(this);
		}

		::System::Single CJOIDMGDHCK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_CJOIDMGDHCK_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_MNLPJLBAJKJ_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AlleyWalkableGridItemData*>* CPPOLMANPCG()
		{
			return ((::Il2CppArray<::RPG::GameCore::AlleyWalkableGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_CPPOLMANPCG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>* KBOKBHFBJLB()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_KBOKBHFBJLB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>* CKKIMAGPMBG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_CKKIMAGPMBG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>* GIECEACMGIM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_GIECEACMGIM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>* JODJBIBGKIJ()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyShopGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_JODJBIBGKIJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>* OCJBOIHDLDM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyDockGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_OCJBOIHDLDM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>* IPLHOBEMKGM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AlleyBuffGridItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLCMFIHIC_IPLHOBEMKGM_OFFSET))(this);
		}

	};
