#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBCDHMDKNOP;
class MAGCBFJCKLE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatActionBase; }

#define MAGCBFJCKLE_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB84D4C0)
#define MAGCBFJCKLE_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB84CE80)
#define MAGCBFJCKLE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB84CB00)
#define MAGCBFJCKLE_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB84D180)
#define MAGCBFJCKLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB84CCC0)
#define MAGCBFJCKLE_EHMNBLNELNI_OFFSET UNITYSDK_OFFSET(0xB84D040)
#define MAGCBFJCKLE_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xB84D500)
#define MAGCBFJCKLE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB84D560)
#define MAGCBFJCKLE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB84D540)
#define MAGCBFJCKLE_GET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xB84D580)
#define MAGCBFJCKLE_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB84D0C0)
#define MAGCBFJCKLE_JDEKBALAKBG_1_OFFSET UNITYSDK_OFFSET(0xB84D310)
#define MAGCBFJCKLE_JDEKBALAKBG_OFFSET UNITYSDK_OFFSET(0xB84D240)
#define MAGCBFJCKLE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB84CCD0)
#define MAGCBFJCKLE_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB84D420)
#define MAGCBFJCKLE_LNNLMNBOPCB_OFFSET UNITYSDK_OFFSET(0xB84D480)
#define MAGCBFJCKLE_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB84D3E0)
#define MAGCBFJCKLE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB84CF40)
#define MAGCBFJCKLE_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB84D570)
#define MAGCBFJCKLE_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB84D550)
#define MAGCBFJCKLE_SET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xB84D590)

	class MAGCBFJCKLE : public ::System::Object
	{
	public:
		::IBCDHMDKNOP* MIPMCEJIAMC; // 0x10
		::RPG::GameCore::GameEntity* MAPLJHFMBPG; // 0x18
		::RPG::GameCore::MunicipalChatActionBase* EJJEEJENLDA; // 0x20
		::System::Single LEBGOEDBLIC; // 0x28
		::System::Boolean _IsPlaying_k__BackingField; // 0x2C
		::System::Boolean _IsFinished_k__BackingField; // 0x2D
		::System::Boolean _IsWaiting_k__BackingField; // 0x2E
		::System::Void _ctor(::IBCDHMDKNOP* a1, ::RPG::GameCore::MunicipalChatActionBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IBCDHMDKNOP*, ::RPG::GameCore::MunicipalChatActionBase*))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::MAGCBFJCKLE* BPLPBPMEODA(::IBCDHMDKNOP* a1, ::RPG::GameCore::MunicipalChatActionBase* a2)
		{
			return ((::MAGCBFJCKLE*(*)(::IBCDHMDKNOP*, ::RPG::GameCore::MunicipalChatActionBase*))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Boolean JDEKBALAKBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_JDEKBALAKBG_OFFSET))(this);
		}

		::System::Boolean JDEKBALAKBG_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_JDEKBALAKBG_1_OFFSET))(this, a1);
		}

		::System::Boolean EHMNBLNELNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_EHMNBLNELNI_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void LNNLMNBOPCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_LNNLMNBOPCB_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_FNACALDOOIF_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void set_IsPlaying(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_SET_ISPLAYING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_GET_ISWAITING_OFFSET))(this);
		}

		::System::Void set_IsWaiting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAGCBFJCKLE_SET_ISWAITING_OFFSET))(this, a1);
		}

	};
