#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGNDLIOMDIG;
class HGDELEAHIJO;
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define AGNDLIOMDIG_AIFJLBIEPFA_OFFSET UNITYSDK_OFFSET(0xCF3B9E0)
#define AGNDLIOMDIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCF3BD00)
#define AGNDLIOMDIG_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0xCF3BB50)
#define AGNDLIOMDIG_ICLDDLDJBFL_OFFSET UNITYSDK_OFFSET(0xCF3B5B0)
#define AGNDLIOMDIG_JLHENLIKDGF_OFFSET UNITYSDK_OFFSET(0xCF3C070)
#define AGNDLIOMDIG_KEJCFMJOCOH_OFFSET UNITYSDK_OFFSET(0xCF3BDC0)
#define AGNDLIOMDIG_LGPNHIMEMIF_OFFSET UNITYSDK_OFFSET(0xCF3C400)
#define AGNDLIOMDIG_LOJMCJIILCN_OFFSET UNITYSDK_OFFSET(0xCF3C770)
#define AGNDLIOMDIG_MCEMEHPCOLP_OFFSET UNITYSDK_OFFSET(0xCF3B650)
#define AGNDLIOMDIG_MFFKOKFNLAG_OFFSET UNITYSDK_OFFSET(0xCF3B6E0)
#define AGNDLIOMDIG_NGCFPFALCGD_OFFSET UNITYSDK_OFFSET(0xCF3B600)

inline static constexpr unsigned int AGNDLIOMDIG_TypeDefinitionIndex = 61285;

	class AGNDLIOMDIG : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HHJKKANJNJE; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::VideoBundleInfoItem*>* GIOJCLEMDHG; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::VideoBundleInfoItem*>* EHDHHILLAIH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_CTOR_OFFSET))(this);
		}

		::System::Int32 ICLDDLDJBFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_ICLDDLDJBFL_OFFSET))(this);
		}

		::System::Boolean NGCFPFALCGD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_NGCFPFALCGD_OFFSET))(this, a1);
		}

		::HGDELEAHIJO* MCEMEHPCOLP(::System::Int32 a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_MCEMEHPCOLP_OFFSET))(this, a1);
		}

		::System::Boolean MFFKOKFNLAG(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_MFFKOKFNLAG_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::VideoBundleInfoItem* AIFJLBIEPFA(::System::String* a1)
		{
			return ((::RPG::Client::VideoBundleInfoItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_AIFJLBIEPFA_OFFSET))(this, a1);
		}

		static ::AGNDLIOMDIG* EFMKONMGMNA(::System::String* a1)
		{
			return ((::AGNDLIOMDIG*(*)(::System::String*))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_EFMKONMGMNA_OFFSET))(a1);
		}

		::System::Void KEJCFMJOCOH(::System::IO::StreamReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_KEJCFMJOCOH_OFFSET))(this, a1);
		}

		::System::Void JLHENLIKDGF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_JLHENLIKDGF_OFFSET))(this, a1);
		}

		::System::Void LGPNHIMEMIF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_LGPNHIMEMIF_OFFSET))(this, a1);
		}

		::HGDELEAHIJO* LOJMCJIILCN(::System::String* a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGNDLIOMDIG_LOJMCJIILCN_OFFSET))(this, a1);
		}

	};
