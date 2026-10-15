#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBCDHMDKNOP;
class MAGCBFJCKLE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatActionBase; }

#define MAGCBFJCKLE_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB846CA0)
#define MAGCBFJCKLE_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB846660)
#define MAGCBFJCKLE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8462E0)
#define MAGCBFJCKLE_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB846960)
#define MAGCBFJCKLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB8464A0)
#define MAGCBFJCKLE_EHMNBLNELNI_OFFSET UNITYSDK_OFFSET(0xB846820)
#define MAGCBFJCKLE_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xB846CE0)
#define MAGCBFJCKLE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB846D40)
#define MAGCBFJCKLE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB846D20)
#define MAGCBFJCKLE_GET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xB846D60)
#define MAGCBFJCKLE_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB8468A0)
#define MAGCBFJCKLE_JDEKBALAKBG_1_OFFSET UNITYSDK_OFFSET(0xB846AF0)
#define MAGCBFJCKLE_JDEKBALAKBG_OFFSET UNITYSDK_OFFSET(0xB846A20)
#define MAGCBFJCKLE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB8464B0)
#define MAGCBFJCKLE_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB846C00)
#define MAGCBFJCKLE_LNNLMNBOPCB_OFFSET UNITYSDK_OFFSET(0xB846C60)
#define MAGCBFJCKLE_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB846BC0)
#define MAGCBFJCKLE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB846720)
#define MAGCBFJCKLE_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB846D50)
#define MAGCBFJCKLE_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB846D30)
#define MAGCBFJCKLE_SET_ISWAITING_OFFSET UNITYSDK_OFFSET(0xB846D70)

inline static constexpr unsigned int MAGCBFJCKLE_TypeDefinitionIndex = 69190;

	class MAGCBFJCKLE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MAPLJHFMBPG; // 0x10
		::RPG::GameCore::MunicipalChatActionBase* EJJEEJENLDA; // 0x18
		::IBCDHMDKNOP* MIPMCEJIAMC; // 0x20
		::System::Boolean _IsPlaying_k__BackingField; // 0x28
		::System::Boolean _IsWaiting_k__BackingField; // 0x29
		::System::Boolean _IsFinished_k__BackingField; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Single LEBGOEDBLIC; // 0x2C
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
