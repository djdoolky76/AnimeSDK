#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPGOJLCDIHD.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"
class DDENCEMCKLN;
class DFBAHCICJNE;
class HGDELEAHIJO;
class HJEIEIFLDGN;
class IACGHDENOPA;
class OBPJIBCAKEK;
namespace System { class String; }

#define OBPJIBCAKEK_AEMLGANJOPF_OFFSET UNITYSDK_OFFSET(0x1C4765A0)
#define OBPJIBCAKEK_BCDKMDHPBKA_OFFSET UNITYSDK_OFFSET(0x1C49A9E0)
#define OBPJIBCAKEK_BCONKEDNHGG_OFFSET UNITYSDK_OFFSET(0x1C49CA10)
#define OBPJIBCAKEK_CICMFABLNPC_OFFSET UNITYSDK_OFFSET(0x1C4761E0)
#define OBPJIBCAKEK_CPMHJGDCGIL_1_OFFSET UNITYSDK_OFFSET(0x1C49D6F0)
#define OBPJIBCAKEK_CPMHJGDCGIL_OFFSET UNITYSDK_OFFSET(0x1C49D4B0)
#define OBPJIBCAKEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C475110)
#define OBPJIBCAKEK_EDIJNGAHDOM_OFFSET UNITYSDK_OFFSET(0x1C475A10)
#define OBPJIBCAKEK_EFMKONMGMNA_1_OFFSET UNITYSDK_OFFSET(0x1C49D910)
#define OBPJIBCAKEK_EGIEGDHLALB_OFFSET UNITYSDK_OFFSET(0x1C4751E0)
#define OBPJIBCAKEK_ELIHJFOJHBK_OFFSET UNITYSDK_OFFSET(0x1C49A830)
#define OBPJIBCAKEK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C49D9A0)
#define OBPJIBCAKEK_FMCLIHBMOGM_OFFSET UNITYSDK_OFFSET(0x1C49A800)
#define OBPJIBCAKEK_GBLEHNDEOCN_OFFSET UNITYSDK_OFFSET(0x1C49AD60)
#define OBPJIBCAKEK_GET_MANIFESTVERSION_OFFSET UNITYSDK_OFFSET(0x1C49A810)
#define OBPJIBCAKEK_GGNHEJBCGAL_OFFSET UNITYSDK_OFFSET(0x1C49B820)
#define OBPJIBCAKEK_GLMBCJLHPEA_OFFSET UNITYSDK_OFFSET(0x1C49D1C0)
#define OBPJIBCAKEK_ICLDDLDJBFL_OFFSET UNITYSDK_OFFSET(0x1C49A8D0)
#define OBPJIBCAKEK_JLHENLIKDGF_OFFSET UNITYSDK_OFFSET(0x1C49D880)
#define OBPJIBCAKEK_LFIMGFACNDL_OFFSET UNITYSDK_OFFSET(0x1C49C0A0)
#define OBPJIBCAKEK_LOJMCJIILCN_OFFSET UNITYSDK_OFFSET(0x1C49ABB0)
#define OBPJIBCAKEK_MCEMEHPCOLP_OFFSET UNITYSDK_OFFSET(0x1C49A920)
#define OBPJIBCAKEK_MLGDFFJBBEN_OFFSET UNITYSDK_OFFSET(0x1C49D3A0)
#define OBPJIBCAKEK_MPMFHODFDOI_OFFSET UNITYSDK_OFFSET(0x1C49B200)
#define OBPJIBCAKEK_MPMGHDGOGNM_OFFSET UNITYSDK_OFFSET(0x1C49C000)
#define OBPJIBCAKEK_NGCFPFALCGD_OFFSET UNITYSDK_OFFSET(0x1C49A990)
#define OBPJIBCAKEK_OKNFPBLAPMA_OFFSET UNITYSDK_OFFSET(0x1C475720)
#define OBPJIBCAKEK_PAJPLLLLCKM_OFFSET UNITYSDK_OFFSET(0x1C49AE00)
#define OBPJIBCAKEK_PNLBLMMIBEJ_OFFSET UNITYSDK_OFFSET(0x1C49B8C0)
#define OBPJIBCAKEK_SET_MANIFESTVERSION_OFFSET UNITYSDK_OFFSET(0x1C49A820)

inline static constexpr unsigned int OBPJIBCAKEK_TypeDefinitionIndex = 41422;

	class OBPJIBCAKEK : public ::System::Object
	{
	public:
		::HJEIEIFLDGN* LNIKNDOBEIH; // 0x10
		::IACGHDENOPA* FGCGENAKBAD; // 0x18
		::Il2CppArray<::DFBAHCICJNE*>* LHGLNAMBIEE; // 0x20
		::IACGHDENOPA* LEOGFBLECMI; // 0x28
		::System::String* OBCKMCGGNHA; // 0x30
		::System::UInt32 _ManifestVersion_k__BackingField; // 0x38
		::Unity::Collections::Allocator IDHDFHBPGAO; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_CTOR_OFFSET))(this);
		}

		::System::Void FMCLIHBMOGM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_FMCLIHBMOGM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ManifestVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_GET_MANIFESTVERSION_OFFSET))(this);
		}

		::System::Void set_ManifestVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_SET_MANIFESTVERSION_OFFSET))(this, a1);
		}

		::System::Boolean AEMLGANJOPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_AEMLGANJOPF_OFFSET))(this);
		}

		::DFBAHCICJNE* ELIHJFOJHBK()
		{
			return ((::DFBAHCICJNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_ELIHJFOJHBK_OFFSET))(this);
		}

		::System::Int32 ICLDDLDJBFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_ICLDDLDJBFL_OFFSET))(this);
		}

		::HGDELEAHIJO* MCEMEHPCOLP(::System::Int32 a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_MCEMEHPCOLP_OFFSET))(this, a1);
		}

		::System::Boolean NGCFPFALCGD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_NGCFPFALCGD_OFFSET))(this, a1);
		}

		::System::Boolean BCDKMDHPBKA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_BCDKMDHPBKA_OFFSET))(this, a1);
		}

		::HGDELEAHIJO* LOJMCJIILCN(::System::String* a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_LOJMCJIILCN_OFFSET))(this, a1);
		}

		::DFBAHCICJNE* OKNFPBLAPMA(::RPG::Client::DesignDataShortNameHash a1, ::System::Boolean a2)
		{
			return ((::DFBAHCICJNE*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::System::Boolean))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_OKNFPBLAPMA_OFFSET))(this, a1, a2);
		}

		::GPGOJLCDIHD EDIJNGAHDOM(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::GPGOJLCDIHD(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_EDIJNGAHDOM_OFFSET))(this, a1);
		}

		::System::Boolean GBLEHNDEOCN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_GBLEHNDEOCN_OFFSET))(this, a1, a2);
		}

		::System::Boolean PAJPLLLLCKM(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_PAJPLLLLCKM_OFFSET))(this, a1);
		}

		::System::Void MPMFHODFDOI(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_MPMFHODFDOI_OFFSET))(this, a1);
		}

		::System::Void BCONKEDNHGG(::DDENCEMCKLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDENCEMCKLN*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_BCONKEDNHGG_OFFSET))(this, a1);
		}

		::System::Void JLHENLIKDGF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_JLHENLIKDGF_OFFSET))(this, a1);
		}

		static ::OBPJIBCAKEK* EFMKONMGMNA_1(::System::String* a1)
		{
			return ((::OBPJIBCAKEK*(*)(::System::String*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_EFMKONMGMNA_1_OFFSET))(a1);
		}

		::System::Void EGIEGDHLALB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_EGIEGDHLALB_OFFSET))(this);
		}

		::System::Void CICMFABLNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_CICMFABLNPC_OFFSET))(this);
		}

		::System::Void GLMBCJLHPEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_GLMBCJLHPEA_OFFSET))(this);
		}

		::System::Void CPMHJGDCGIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_CPMHJGDCGIL_OFFSET))(this);
		}

		::System::Void CPMHJGDCGIL_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_CPMHJGDCGIL_1_OFFSET))(this, a1);
		}

		::System::Void MLGDFFJBBEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_MLGDFFJBBEN_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_FINALIZE_OFFSET))(this);
		}

		::System::Boolean MPMGHDGOGNM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_MPMGHDGOGNM_OFFSET))(this, a1, a2);
		}

		::System::Void LFIMGFACNDL(::DDENCEMCKLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDENCEMCKLN*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_LFIMGFACNDL_OFFSET))(this, a1);
		}

		::System::Boolean GGNHEJBCGAL(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_GGNHEJBCGAL_OFFSET))(this, a1, a2);
		}

		::System::Void PNLBLMMIBEJ(::DDENCEMCKLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDENCEMCKLN*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK_PNLBLMMIBEJ_OFFSET))(this, a1);
		}

	};
