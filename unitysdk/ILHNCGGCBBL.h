#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class JAPBHONOPJH;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterAnimZone; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILHNCGGCBBL_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x1B59AA40)
#define ILHNCGGCBBL_BJGCKGPEFMN_OFFSET UNITYSDK_OFFSET(0x1B59B080)
#define ILHNCGGCBBL_CFBAIGBNLFP_OFFSET UNITYSDK_OFFSET(0x1B59B010)
#define ILHNCGGCBBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B598AD0)
#define ILHNCGGCBBL_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1B59AC30)
#define ILHNCGGCBBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B599860)
#define ILHNCGGCBBL_FNHNNPJIPIM_OFFSET UNITYSDK_OFFSET(0x1B59AFC0)
#define ILHNCGGCBBL_GCEPMPBJIFM_OFFSET UNITYSDK_OFFSET(0x1B59B1F0)
#define ILHNCGGCBBL_GET_CHARACTERANIMZONEREF_OFFSET UNITYSDK_OFFSET(0x1B59B590)
#define ILHNCGGCBBL_GET_CURRENTLOGICSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1B59B5B0)
#define ILHNCGGCBBL_GET_HASMOVESINCETELEPORT_OFFSET UNITYSDK_OFFSET(0x1B59B5D0)
#define ILHNCGGCBBL_GPNJEPPPCLI_OFFSET UNITYSDK_OFFSET(0x1B599B20)
#define ILHNCGGCBBL_HCKNNCJFKIA_OFFSET UNITYSDK_OFFSET(0x1B599230)
#define ILHNCGGCBBL_HHFIJIJLPKA_OFFSET UNITYSDK_OFFSET(0x1B59AD70)
#define ILHNCGGCBBL_IMPHMOKENGL_OFFSET UNITYSDK_OFFSET(0x1B59A920)
#define ILHNCGGCBBL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B5999D0)
#define ILHNCGGCBBL_KLPPNKMJJDG_OFFSET UNITYSDK_OFFSET(0x1B59B250)
#define ILHNCGGCBBL_LPDOGJLGDFI_OFFSET UNITYSDK_OFFSET(0x1B59AE70)
#define ILHNCGGCBBL_MBNLMBOOIKF_OFFSET UNITYSDK_OFFSET(0x1B598BD0)
#define ILHNCGGCBBL_NOABKNHHNLJ_OFFSET UNITYSDK_OFFSET(0x1B5998B0)
#define ILHNCGGCBBL_OHKOOPOBEDM_OFFSET UNITYSDK_OFFSET(0x1B59ABD0)
#define ILHNCGGCBBL_PHBIAPMHBMB_OFFSET UNITYSDK_OFFSET(0x1B59B100)
#define ILHNCGGCBBL_SET_CHARACTERANIMZONEREF_OFFSET UNITYSDK_OFFSET(0x1B59B5A0)
#define ILHNCGGCBBL_SET_CURRENTLOGICSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1B59B5C0)
#define ILHNCGGCBBL_SET_HASMOVESINCETELEPORT_OFFSET UNITYSDK_OFFSET(0x1B59B5E0)

inline static constexpr unsigned int ILHNCGGCBBL_TypeDefinitionIndex = 57048;

	class ILHNCGGCBBL : public ::System::Object
	{
	public:
		::JAPBHONOPJH* EMMBDEMJDJA; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureAnimStateType, ::JAPBHONOPJH*>* EHNOFFAOOLJ; // 0x20
		::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x28
		::RPG::GameCore::CharacterAnimZone* _CharacterAnimZoneRef_k__BackingField; // 0x30
		::RPG::GameCore::AdventureAnimStateType _CurrentLogicStateType_k__BackingField; // 0x38
		::System::Single IGHNAFDGGPJ; // 0x3C
		::System::Boolean _HasMoveSinceTeleport_k__BackingField; // 0x40
		::System::Boolean MBBGDCFNDPF; // 0x41
		// static const ::System::Object OLBEKAICFJI; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::RPG::GameCore::CharacterAnimZone* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::RPG::GameCore::CharacterAnimZone*))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAnimStateType NOABKNHHNLJ()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_NOABKNHHNLJ_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void OHKOOPOBEDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_OHKOOPOBEDM_OFFSET))(this);
		}

		::System::Void HCKNNCJFKIA(::RPG::GameCore::AdventureAnimStateType a1, ::System::Boolean a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_HCKNNCJFKIA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFBAIGBNLFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_CFBAIGBNLFP_OFFSET))(this);
		}

		::System::Void BJGCKGPEFMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_BJGCKGPEFMN_OFFSET))(this);
		}

		::System::Void FNHNNPJIPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_FNHNNPJIPIM_OFFSET))(this);
		}

		::System::Void MBNLMBOOIKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_MBNLMBOOIKF_OFFSET))(this);
		}

		::System::Boolean HHFIJIJLPKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_HHFIJIJLPKA_OFFSET))(this);
		}

		::System::Void GPNJEPPPCLI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_GPNJEPPPCLI_OFFSET))(this, a1);
		}

		::System::Void PHBIAPMHBMB(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_PHBIAPMHBMB_OFFSET))(this, a1, a2);
		}

		::System::Void GCEPMPBJIFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_GCEPMPBJIFM_OFFSET))(this);
		}

		::System::Void IMPHMOKENGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_IMPHMOKENGL_OFFSET))(this);
		}

		::System::Void LPDOGJLGDFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_LPDOGJLGDFI_OFFSET))(this);
		}

		::System::Boolean KLPPNKMJJDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_KLPPNKMJJDG_OFFSET))(this);
		}

		::RPG::GameCore::CharacterAnimZone* get_CharacterAnimZoneRef()
		{
			return ((::RPG::GameCore::CharacterAnimZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_GET_CHARACTERANIMZONEREF_OFFSET))(this);
		}

		::System::Void set_CharacterAnimZoneRef(::RPG::GameCore::CharacterAnimZone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAnimZone*))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_SET_CHARACTERANIMZONEREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureAnimStateType get_CurrentLogicStateType()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_GET_CURRENTLOGICSTATETYPE_OFFSET))(this);
		}

		::System::Void set_CurrentLogicStateType(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_SET_CURRENTLOGICSTATETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasMoveSinceTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_GET_HASMOVESINCETELEPORT_OFFSET))(this);
		}

		::System::Void set_HasMoveSinceTeleport(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILHNCGGCBBL_SET_HASMOVESINCETELEPORT_OFFSET))(this, a1);
		}

	};
