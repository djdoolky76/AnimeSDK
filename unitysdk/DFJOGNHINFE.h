#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOKNGDGCODE.h"
#include "unitysdk/RPG/Client/BitFlag_1.h"
#include "unitysdk/RPG/Client/TABehaviorTickMode.h"
#include "unitysdk/RPG/Client/TickListType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PIDNKDBOJHD;
namespace System { class String; }

#define DFJOGNHINFE_AMNLFHJGLFG_OFFSET UNITYSDK_OFFSET(0xE8308E0)
#define DFJOGNHINFE_ANPACLPDPOI_OFFSET UNITYSDK_OFFSET(0xE830910)
#define DFJOGNHINFE_BECPPHMCLLH_OFFSET UNITYSDK_OFFSET(0xE8308D0)
#define DFJOGNHINFE_BMKANDNMNEO_OFFSET UNITYSDK_OFFSET(0xE830700)
#define DFJOGNHINFE_CAEJCAMFEIG_OFFSET UNITYSDK_OFFSET(0xE8309B0)
#define DFJOGNHINFE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE8307F0)
#define DFJOGNHINFE_CTOR_OFFSET UNITYSDK_OFFSET(0xE830060)
#define DFJOGNHINFE_DBDLEAJJNKM_OFFSET UNITYSDK_OFFSET(0xE830090)
#define DFJOGNHINFE_DDKDJEIFJFK_OFFSET UNITYSDK_OFFSET(0xE830150)
#define DFJOGNHINFE_DEFCKFCJOJE_OFFSET UNITYSDK_OFFSET(0xE830900)
#define DFJOGNHINFE_DNKFCKDKDNF_OFFSET UNITYSDK_OFFSET(0xE830940)
#define DFJOGNHINFE_DPIAOMABLEK_OFFSET UNITYSDK_OFFSET(0xE8308F0)
#define DFJOGNHINFE_EDCIGJFGFDH_OFFSET UNITYSDK_OFFSET(0xE830930)
#define DFJOGNHINFE_FNPAIIGCDAC_OFFSET UNITYSDK_OFFSET(0xE8309A0)
#define DFJOGNHINFE_GDLNIDBAAPB_OFFSET UNITYSDK_OFFSET(0xE830230)
#define DFJOGNHINFE_HENMIECGJMM_OFFSET UNITYSDK_OFFSET(0xE830A20)
#define DFJOGNHINFE_HFJMMBLFENP_OFFSET UNITYSDK_OFFSET(0xE830A70)
#define DFJOGNHINFE_IAIMENPIKPG_OFFSET UNITYSDK_OFFSET(0xE8306A0)
#define DFJOGNHINFE_IBOFNAKAPFG_OFFSET UNITYSDK_OFFSET(0xE830990)
#define DFJOGNHINFE_IGCCENLNJLL_OFFSET UNITYSDK_OFFSET(0xE8309C0)
#define DFJOGNHINFE_JDMCCKANBCB_OFFSET UNITYSDK_OFFSET(0xE830A90)
#define DFJOGNHINFE_JKNBBFFNNOC_OFFSET UNITYSDK_OFFSET(0xE830A10)
#define DFJOGNHINFE_LDNHALHCACP_OFFSET UNITYSDK_OFFSET(0xE830A80)
#define DFJOGNHINFE_LLEIHCAGGJP_OFFSET UNITYSDK_OFFSET(0xE830AE0)
#define DFJOGNHINFE_OEIIDHFBKHG_OFFSET UNITYSDK_OFFSET(0xE8308C0)
#define DFJOGNHINFE_OHJNKCBFBJP_OFFSET UNITYSDK_OFFSET(0xE830740)
#define DFJOGNHINFE_OPPHKJHNCOB_OFFSET UNITYSDK_OFFSET(0xE8301B0)
#define DFJOGNHINFE_PDAKNCHLMCG_OFFSET UNITYSDK_OFFSET(0xE830310)
#define DFJOGNHINFE_PFCMNCNFEBK_OFFSET UNITYSDK_OFFSET(0xE830280)

inline static constexpr unsigned int DFJOGNHINFE_TypeDefinitionIndex = 70149;

	class DFJOGNHINFE : public ::System::Object
	{
	public:
		::Il2CppArray<::IOKNGDGCODE>* GNAMDODCKGM; // 0x10
		::System::String* DJGMOJEAKGL; // 0x18
		::PIDNKDBOJHD* HHBJDJHHGAG; // 0x20
		::RPG::Client::BitFlag_1<::RPG::Client::TickListType> OIJOPGBCKIL; // 0x28
		::System::Int32 GIPJFPHLBHC; // 0x2C
		::System::Int32 JGGDKOCIEGH; // 0x30
		::System::Byte _padding0[0x4];
		::System::UInt64 CHLHPDJCANF; // 0x38
		::System::Single PJFGIGEEBFO; // 0x40
		::System::Int32 COKPJGAIIPM; // 0x44
		::System::Int32 PFBMIJNHEDE; // 0x48
		::System::Int32 MBBKNPLCKNI; // 0x4C
		::UnityEngine::Vector3 MBPNLFDFABO; // 0x50
		::RPG::Client::BitFlag_1<::RPG::Client::TickListType> CJPOGCONCLC; // 0x5C
		::System::UInt64 CBHHMGIAADL; // 0x60
		::RPG::Client::TABehaviorTickMode ADGHHPBEACI; // 0x68
		::System::Int32 JDPGNPCLGDL; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_CTOR_OFFSET))(this);
		}

		::System::Void DBDLEAJJNKM(::System::Int32 a1, ::RPG::Client::TABehaviorTickMode a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TABehaviorTickMode, ::System::Int32))((::PBYTE)hIl2Cpp + DFJOGNHINFE_DBDLEAJJNKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DDKDJEIFJFK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DFJOGNHINFE_DDKDJEIFJFK_OFFSET))(this, a1);
		}

		::System::Boolean OPPHKJHNCOB(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + DFJOGNHINFE_OPPHKJHNCOB_OFFSET))(this, a1, a2);
		}

		::System::UInt64 GDLNIDBAAPB(::System::UInt64 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DFJOGNHINFE_GDLNIDBAAPB_OFFSET))(this, a1);
		}

		::System::Void PFCMNCNFEBK(::RPG::Client::TickListType a1, ::IOKNGDGCODE a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TickListType, ::IOKNGDGCODE))((::PBYTE)hIl2Cpp + DFJOGNHINFE_PFCMNCNFEBK_OFFSET))(this, a1, a2);
		}

		::System::Single PDAKNCHLMCG(::RPG::Client::TickListType a1, ::IOKNGDGCODE a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::TickListType, ::IOKNGDGCODE))((::PBYTE)hIl2Cpp + DFJOGNHINFE_PDAKNCHLMCG_OFFSET))(this, a1, a2);
		}

		::System::Void IAIMENPIKPG(::RPG::Client::TickListType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + DFJOGNHINFE_IAIMENPIKPG_OFFSET))(this, a1);
		}

		::System::UInt64 BMKANDNMNEO()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_BMKANDNMNEO_OFFSET))(this);
		}

		::System::Void OHJNKCBFBJP(::System::String* a1, ::UnityEngine::Vector3 a2, ::PIDNKDBOJHD* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::PIDNKDBOJHD*, ::System::Single))((::PBYTE)hIl2Cpp + DFJOGNHINFE_OHJNKCBFBJP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_CLEAR_OFFSET))(this);
		}

		::System::Int32 OEIIDHFBKHG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_OEIIDHFBKHG_OFFSET))(this);
		}

		::RPG::Client::TABehaviorTickMode BECPPHMCLLH()
		{
			return ((::RPG::Client::TABehaviorTickMode(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_BECPPHMCLLH_OFFSET))(this);
		}

		::System::Int32 AMNLFHJGLFG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_AMNLFHJGLFG_OFFSET))(this);
		}

		::System::String* DPIAOMABLEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_DPIAOMABLEK_OFFSET))(this);
		}

		::System::Single DEFCKFCJOJE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_DEFCKFCJOJE_OFFSET))(this);
		}

		::UnityEngine::Vector3 ANPACLPDPOI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_ANPACLPDPOI_OFFSET))(this);
		}

		::System::Int32 EDCIGJFGFDH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_EDCIGJFGFDH_OFFSET))(this);
		}

		::System::Void DNKFCKDKDNF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFJOGNHINFE_DNKFCKDKDNF_OFFSET))(this, a1);
		}

		::System::Int32 IBOFNAKAPFG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_IBOFNAKAPFG_OFFSET))(this);
		}

		::System::Void FNPAIIGCDAC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFJOGNHINFE_FNPAIIGCDAC_OFFSET))(this, a1);
		}

		::System::Int32 CAEJCAMFEIG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_CAEJCAMFEIG_OFFSET))(this);
		}

		::System::Void IGCCENLNJLL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFJOGNHINFE_IGCCENLNJLL_OFFSET))(this, a1);
		}

		::System::Int32 JKNBBFFNNOC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_JKNBBFFNNOC_OFFSET))(this);
		}

		::System::Void HENMIECGJMM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFJOGNHINFE_HENMIECGJMM_OFFSET))(this, a1);
		}

		::PIDNKDBOJHD* HFJMMBLFENP()
		{
			return ((::PIDNKDBOJHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_HFJMMBLFENP_OFFSET))(this);
		}

		::RPG::Client::BitFlag_1<::RPG::Client::TickListType> LDNHALHCACP()
		{
			return ((::RPG::Client::BitFlag_1<::RPG::Client::TickListType>(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJOGNHINFE_LDNHALHCACP_OFFSET))(this);
		}

		::System::Boolean JDMCCKANBCB(::RPG::Client::TickListType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + DFJOGNHINFE_JDMCCKANBCB_OFFSET))(this, a1);
		}

		::System::Void LLEIHCAGGJP(::RPG::Client::TickListType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TickListType, ::System::Boolean))((::PBYTE)hIl2Cpp + DFJOGNHINFE_LLEIHCAGGJP_OFFSET))(this, a1, a2);
		}

	};
