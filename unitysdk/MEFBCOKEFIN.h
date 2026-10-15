#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAudienceHideReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
class FLCGFGDOAAP;
class PKLOMDCOKOC;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEFBCOKEFIN_AEGJCIGEHED_OFFSET UNITYSDK_OFFSET(0xB8C1840)
#define MEFBCOKEFIN_AJDCANKOGBK_OFFSET UNITYSDK_OFFSET(0xB8BF8B0)
#define MEFBCOKEFIN_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB8C1330)
#define MEFBCOKEFIN_CPDNGNHAFGH_OFFSET UNITYSDK_OFFSET(0xB8C1050)
#define MEFBCOKEFIN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8C1C70)
#define MEFBCOKEFIN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB8C1620)
#define MEFBCOKEFIN_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xB8C0BA0)
#define MEFBCOKEFIN_DOFMEOAHABE_OFFSET UNITYSDK_OFFSET(0xB8C1960)
#define MEFBCOKEFIN_EJPICBFCJEI_OFFSET UNITYSDK_OFFSET(0xB8BFE70)
#define MEFBCOKEFIN_ENNHFEOEBFN_OFFSET UNITYSDK_OFFSET(0xB8C0F40)
#define MEFBCOKEFIN_GLNGBPHPLLG_OFFSET UNITYSDK_OFFSET(0xB8C1A80)
#define MEFBCOKEFIN_GMJLMCJKPEL_OFFSET UNITYSDK_OFFSET(0xB8C0D80)
#define MEFBCOKEFIN_HNIBFJCBICG_OFFSET UNITYSDK_OFFSET(0xB8C12A0)
#define MEFBCOKEFIN_IECFOOHJHJG_OFFSET UNITYSDK_OFFSET(0xB8C1180)
#define MEFBCOKEFIN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xB8C0CE0)
#define MEFBCOKEFIN_NBBMINIOAIP_OFFSET UNITYSDK_OFFSET(0xB8C0110)
#define MEFBCOKEFIN_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xB8C0C50)
#define MEFBCOKEFIN_NPAFMEBNFOB_1_OFFSET UNITYSDK_OFFSET(0xB8C04F0)
#define MEFBCOKEFIN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB8BF900)
#define MEFBCOKEFIN_PFCKLEMPAAD_OFFSET UNITYSDK_OFFSET(0xB8C0EF0)

	class MEFBCOKEFIN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FLCGFGDOAAP*>* FDHOAEDHKCH; // 0x10
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x18
		::RPG::Client::ReasonBool_1<::RPG::Client::EAudienceHideReason> IDBHEIBEGBA; // 0x20
		::System::Single FPDMIMCHDLI; // 0x28
		::System::Boolean BNJBIKCFCNA; // 0x2C
		::System::Boolean MELBNKGEADE; // 0x2D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_CTOR_OFFSET))(this);
		}

		::System::Boolean AJDCANKOGBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_AJDCANKOGBK_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB_1(::RPG::Client::MapDef* a1, ::PKLOMDCOKOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::PKLOMDCOKOC*))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_NPAFMEBNFOB_1_OFFSET))(this, a1, a2);
		}

		::System::Void EJPICBFCJEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_EJPICBFCJEI_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::RPG::Client::EAudienceHideReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EAudienceHideReason, ::System::Boolean))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_NHPDCPKMNAM_OFFSET))(this, a1, a2);
		}

		::System::Void GMJLMCJKPEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_GMJLMCJKPEL_OFFSET))(this);
		}

		::System::Void ENNHFEOEBFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_ENNHFEOEBFN_OFFSET))(this);
		}

		::System::Void CPDNGNHAFGH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_CPDNGNHAFGH_OFFSET))(this, a1);
		}

		::System::Void IECFOOHJHJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_IECFOOHJHJG_OFFSET))(this);
		}

		::FLCGFGDOAAP* HNIBFJCBICG(::System::UInt32 a1)
		{
			return ((::FLCGFGDOAAP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_HNIBFJCBICG_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void AEGJCIGEHED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_AEGJCIGEHED_OFFSET))(this, a1);
		}

		::System::Void DOFMEOAHABE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_DOFMEOAHABE_OFFSET))(this, a1);
		}

		::System::Void NBBMINIOAIP(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_NBBMINIOAIP_OFFSET))(this, a1, a2);
		}

		::System::Void GLNGBPHPLLG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_GLNGBPHPLLG_OFFSET))(this, a1);
		}

		::System::Boolean PFCKLEMPAAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBCOKEFIN_PFCKLEMPAAD_OFFSET))(this);
		}

	};
