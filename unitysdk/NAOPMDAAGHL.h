#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
class BNLHGENFEHG;
class IMEFEGGEMIJ;
class PGBLBOJBDGG;
namespace RPG::Client { class ElfRestaurantEmployeeData; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class RestaurantCustomerRow; }
namespace RPG::GameCore { class RestaurantEmployeeRow; }
namespace RPG::GameCore { class RestaurantSpecialCustomerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NAOPMDAAGHL_AABINAPFKIE_OFFSET UNITYSDK_OFFSET(0xC33A530)
#define NAOPMDAAGHL_AEAHKCBEEGG_OFFSET UNITYSDK_OFFSET(0xC3335A0)
#define NAOPMDAAGHL_AFHIFIGIKAE_OFFSET UNITYSDK_OFFSET(0xC3389A0)
#define NAOPMDAAGHL_AMIFABLODLH_OFFSET UNITYSDK_OFFSET(0xC3365B0)
#define NAOPMDAAGHL_BDOCDEAECDN_OFFSET UNITYSDK_OFFSET(0xC3380F0)
#define NAOPMDAAGHL_BKHCFNJOCJC_OFFSET UNITYSDK_OFFSET(0xC3359E0)
#define NAOPMDAAGHL_BOEOMGHECDI_OFFSET UNITYSDK_OFFSET(0xC3370E0)
#define NAOPMDAAGHL_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0xC3338B0)
#define NAOPMDAAGHL_CTOR_OFFSET UNITYSDK_OFFSET(0xC332EC0)
#define NAOPMDAAGHL_DBCJFJCIJFI_OFFSET UNITYSDK_OFFSET(0xC336BB0)
#define NAOPMDAAGHL_DFMIFEHEAIN_OFFSET UNITYSDK_OFFSET(0xC33BFD0)
#define NAOPMDAAGHL_DHMJMEBEBNB_OFFSET UNITYSDK_OFFSET(0xC33C2D0)
#define NAOPMDAAGHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC333080)
#define NAOPMDAAGHL_DJDIJFGGHNO_OFFSET UNITYSDK_OFFSET(0xC3392B0)
#define NAOPMDAAGHL_FCOEEPKIKHK_OFFSET UNITYSDK_OFFSET(0xC339E40)
#define NAOPMDAAGHL_FHOKAMENBAG_OFFSET UNITYSDK_OFFSET(0xC334630)
#define NAOPMDAAGHL_FMKFOPCNFND_OFFSET UNITYSDK_OFFSET(0xC33B0D0)
#define NAOPMDAAGHL_GEHLAAEDDCD_OFFSET UNITYSDK_OFFSET(0xC3355F0)
#define NAOPMDAAGHL_GET_ENTRYPOSITION_OFFSET UNITYSDK_OFFSET(0xC33C6C0)
#define NAOPMDAAGHL_GET_ENTRYROTATION_OFFSET UNITYSDK_OFFSET(0xC33C6F0)
#define NAOPMDAAGHL_GIDHHFJNPIK_OFFSET UNITYSDK_OFFSET(0xC3331F0)
#define NAOPMDAAGHL_HBDLGAKDLIH_OFFSET UNITYSDK_OFFSET(0xC335C50)
#define NAOPMDAAGHL_HHEHKOFNGLK_OFFSET UNITYSDK_OFFSET(0xC333270)
#define NAOPMDAAGHL_HHHBOFNGHCK_OFFSET UNITYSDK_OFFSET(0xC333120)
#define NAOPMDAAGHL_IFGIHDKKBKC_OFFSET UNITYSDK_OFFSET(0xC334040)
#define NAOPMDAAGHL_JJEKMGKACOK_OFFSET UNITYSDK_OFFSET(0xC339510)
#define NAOPMDAAGHL_JOGFFPNEHAM_OFFSET UNITYSDK_OFFSET(0xC3373B0)
#define NAOPMDAAGHL_KBJIFPBLBFE_OFFSET UNITYSDK_OFFSET(0xC33B520)
#define NAOPMDAAGHL_KICGJMFMFAF_OFFSET UNITYSDK_OFFSET(0xC333AE0)
#define NAOPMDAAGHL_MBBLNNCHFGI_OFFSET UNITYSDK_OFFSET(0xC336B00)
#define NAOPMDAAGHL_MJHBGFHPPCC_OFFSET UNITYSDK_OFFSET(0xC337D50)
#define NAOPMDAAGHL_NCJFACPBBKN_OFFSET UNITYSDK_OFFSET(0xC334F20)
#define NAOPMDAAGHL_OEBIOACOLMD_OFFSET UNITYSDK_OFFSET(0xC33B740)
#define NAOPMDAAGHL_OFEAHKINGIH_OFFSET UNITYSDK_OFFSET(0xC337720)
#define NAOPMDAAGHL_PECJCCCIKCH_OFFSET UNITYSDK_OFFSET(0xC333E50)
#define NAOPMDAAGHL_PEIMPALGOOK_OFFSET UNITYSDK_OFFSET(0xC335DD0)
#define NAOPMDAAGHL_PFOFMBEKKGF_OFFSET UNITYSDK_OFFSET(0xC3378F0)
#define NAOPMDAAGHL_PIFCCHCDMAO_OFFSET UNITYSDK_OFFSET(0xC3363E0)
#define NAOPMDAAGHL_SET_ENTRYPOSITION_OFFSET UNITYSDK_OFFSET(0xC33C6B0)
#define NAOPMDAAGHL_SET_ENTRYROTATION_OFFSET UNITYSDK_OFFSET(0xC33C6E0)

inline static constexpr unsigned int NAOPMDAAGHL_TypeDefinitionIndex = 79595;

	class NAOPMDAAGHL
	{
	public:
		::BNLHGENFEHG* GKGJBIJNNDC; // 0x30
		::UnityEngine::Transform* DCBKENDEMKO; // 0x38
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x40
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x48
		::UnityEngine::Vector3 _EntryPosition_k__BackingField; // 0x50
		::UnityEngine::Vector3 _EntryRotation_k__BackingField; // 0x5C
		::System::Void _ctor(::BNLHGENFEHG* a1, ::PGBLBOJBDGG* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BNLHGENFEHG*, ::PGBLBOJBDGG*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHHBOFNGHCK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_HHHBOFNGHCK_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* GIDHHFJNPIK()
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_GIDHHFJNPIK_OFFSET))(this);
		}

		::System::Void HHEHKOFNGLK(::System::String* a1, ::System::Single a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Transform*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Int32))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_HHEHKOFNGLK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AEAHKCBEEGG(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_AEAHKCBEEGG_OFFSET))(this, a1, a2);
		}

		::System::Void CPNEMOBKHEL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_CPNEMOBKHEL_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ElfRestaurantGameEntity* KICGJMFMFAF(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_KICGJMFMFAF_OFFSET))(this, a1);
		}

		::System::Void PECJCCCIKCH(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_PECJCCCIKCH_OFFSET))(this, a1, a2);
		}

		::System::Void IFGIHDKKBKC(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_IFGIHDKKBKC_OFFSET))(this, a1);
		}

		::System::Void FHOKAMENBAG(::RPG::GameCore::RestaurantSpecialCustomerRow* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSpecialCustomerRow*, ::System::Int32))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_FHOKAMENBAG_OFFSET))(this, a1, a2);
		}

		::System::Void NCJFACPBBKN(::RPG::GameCore::RestaurantCustomerRow* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantCustomerRow*, ::System::Int32))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_NCJFACPBBKN_OFFSET))(this, a1, a2);
		}

		::System::Void GEHLAAEDDCD(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_GEHLAAEDDCD_OFFSET))(this, a1, a2);
		}

		::System::Void HBDLGAKDLIH(::RPG::Client::ElfRestaurantEmployeeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_HBDLGAKDLIH_OFFSET))(this, a1);
		}

		::System::Void PIFCCHCDMAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_PIFCCHCDMAO_OFFSET))(this);
		}

		::System::Void MBBLNNCHFGI(::RPG::Client::ElfRestaurantEmployeeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_MBBLNNCHFGI_OFFSET))(this, a1);
		}

		::System::Void AMIFABLODLH(::RPG::GameCore::RestaurantEmployeeRow* a1, ::IMEFEGGEMIJ* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantEmployeeRow*, ::IMEFEGGEMIJ*, ::System::Int32))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_AMIFABLODLH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PEIMPALGOOK(::RPG::Client::ElfRestaurantEmployeeData* a1, ::IMEFEGGEMIJ* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*, ::IMEFEGGEMIJ*, ::System::Int32))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_PEIMPALGOOK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DBCJFJCIJFI(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_DBCJFJCIJFI_OFFSET))(this, a1, a2);
		}

		::System::Void BKHCFNJOCJC(::UnityEngine::GameObject* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_BKHCFNJOCJC_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::LevelNPCInfo* BOEOMGHECDI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LevelNPCInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_BOEOMGHECDI_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* JOGFFPNEHAM(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_JOGFFPNEHAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OFEAHKINGIH(::RPG::GameCore::CharacterReplaceMaterialRenderList* a1, ::RPG::GameCore::CharacterReplaceMaterialRenderList* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterReplaceMaterialRenderList*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_OFEAHKINGIH_OFFSET))(this, a1, a2);
		}

		::System::Void PFOFMBEKKGF(::IMEFEGGEMIJ* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::IMEFEGGEMIJ*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_PFOFMBEKKGF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MJHBGFHPPCC(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_MJHBGFHPPCC_OFFSET))(this, a1, a2);
		}

		::System::Void BDOCDEAECDN(::RPG::GameCore::RestaurantSuperEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_BDOCDEAECDN_OFFSET))(this, a1);
		}

		::System::Void AFHIFIGIKAE(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameEntityConfig* a3, ::System::Boolean a4, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_AFHIFIGIKAE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JJEKMGKACOK(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameEntityConfig* a3, ::System::Boolean a4, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_JJEKMGKACOK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DJDIJFGGHNO(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_DJDIJFGGHNO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* FCOEEPKIKHK(::System::UInt32 a1, ::RPG::GameCore::LittleGameEntityConfig* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_FCOEEPKIKHK_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* AABINAPFKIE(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::RestaurantFacilityType a3, ::RPG::GameCore::LittleGameEntityConfig* a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RestaurantFacilityType, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_AABINAPFKIE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FMKFOPCNFND(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_FMKFOPCNFND_OFFSET))(this, a1);
		}

		::System::Void KBJIFPBLBFE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_KBJIFPBLBFE_OFFSET))(this, a1, a2);
		}

		::System::Void OEBIOACOLMD(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_OEBIOACOLMD_OFFSET))(this, a1);
		}

		::System::Void DFMIFEHEAIN(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_DFMIFEHEAIN_OFFSET))(this, a1, a2);
		}

		::System::Void DHMJMEBEBNB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_DHMJMEBEBNB_OFFSET))(this, a1);
		}

		::System::Void set_EntryPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_SET_ENTRYPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EntryPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_GET_ENTRYPOSITION_OFFSET))(this);
		}

		::System::Void set_EntryRotation(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_SET_ENTRYROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EntryRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOPMDAAGHL_GET_ENTRYROTATION_OFFSET))(this);
		}

	};
