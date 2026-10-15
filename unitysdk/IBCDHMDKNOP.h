#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMPCKAGMFGF;
class MAGCBFJCKLE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatNodeInfo; }
namespace RPG::GameCore { class MunicipalChatNodeTransitionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBCDHMDKNOP_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15E2AD50)
#define IBCDHMDKNOP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E2ABA0)
#define IBCDHMDKNOP_EDMMDOLNANO_OFFSET UNITYSDK_OFFSET(0x15E2B780)
#define IBCDHMDKNOP_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15E2B0F0)
#define IBCDHMDKNOP_HLIKJIKNOIL_OFFSET UNITYSDK_OFFSET(0x15E2B690)
#define IBCDHMDKNOP_IEHFMKKFBPC_OFFSET UNITYSDK_OFFSET(0x15E2AD10)
#define IBCDHMDKNOP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15E2B360)
#define IBCDHMDKNOP_KPLEOIILCHE_OFFSET UNITYSDK_OFFSET(0x15E2B8B0)
#define IBCDHMDKNOP_LNBPHPMAHFC_OFFSET UNITYSDK_OFFSET(0x15E2B810)
#define IBCDHMDKNOP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15E2AF40)

inline static constexpr unsigned int IBCDHMDKNOP_TypeDefinitionIndex = 69200;

	class IBCDHMDKNOP : public ::System::Object
	{
	public:
		::RPG::GameCore::MunicipalChatNodeInfo* EJJEEJENLDA; // 0x10
		::System::Collections::Generic::List_1<::MAGCBFJCKLE*>* PADIDNAAMON; // 0x18
		::CMPCKAGMFGF* MIPMCEJIAMC; // 0x20
		::System::Void _ctor(::CMPCKAGMFGF* a1, ::RPG::GameCore::MunicipalChatNodeInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CMPCKAGMFGF*, ::RPG::GameCore::MunicipalChatNodeInfo*))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void IEHFMKKFBPC(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_IEHFMKKFBPC_OFFSET))(a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean HLIKJIKNOIL(::RPG::GameCore::MunicipalChatNodeTransitionInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MunicipalChatNodeTransitionInfo*))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_HLIKJIKNOIL_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* EDMMDOLNANO(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_EDMMDOLNANO_OFFSET))(this, a1);
		}

		::System::Boolean LNBPHPMAHFC(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_LNBPHPMAHFC_OFFSET))(this, a1);
		}

		::System::String* KPLEOIILCHE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDHMDKNOP_KPLEOIILCHE_OFFSET))(this);
		}

	};
