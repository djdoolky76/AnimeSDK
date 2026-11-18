#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLOPJGCIJIM;
class JICNBAFOFEH;
namespace Foundation { class VersionFileInfo; }
namespace MoleMole { class CDNConfigExtension; }
namespace MoleMole { class CDN_DispatchData; }
namespace System { class String; }

#define FAHGNHIHDLG_CJEEMMECNED_OFFSET UNITYSDK_OFFSET(0x1725D060)
#define FAHGNHIHDLG_ECIJPCPONPN_OFFSET UNITYSDK_OFFSET(0x1725DA70)
#define FAHGNHIHDLG_FFPFKDNKMML_OFFSET UNITYSDK_OFFSET(0x1725CB60)
#define FAHGNHIHDLG_MGIPBNFPMEA_OFFSET UNITYSDK_OFFSET(0x1725D190)
#define FAHGNHIHDLG_MHBHOAOEJLP_OFFSET UNITYSDK_OFFSET(0x1725CF60)
#define FAHGNHIHDLG_NPFLBILBGIE_OFFSET UNITYSDK_OFFSET(0x1725C660)
#define FAHGNHIHDLG_ONBFMNHAGEP_OFFSET UNITYSDK_OFFSET(0x1725CC40)
#define FAHGNHIHDLG_PIKBMFMCOGL_OFFSET UNITYSDK_OFFSET(0x1725DE20)

inline static constexpr unsigned int FAHGNHIHDLG_TypeDefinitionIndex = 80738;

class FAHGNHIHDLG : public ::System::Object
{
public:
	static ::CLOPJGCIJIM* NPFLBILBGIE(::MoleMole::CDN_DispatchData* INDMKBPMKFI)
	{
		return ((::CLOPJGCIJIM*(*)(::MoleMole::CDN_DispatchData*))((::PBYTE)hIl2Cpp + FAHGNHIHDLG_NPFLBILBGIE_OFFSET))(INDMKBPMKFI);
	}

	static ::CLOPJGCIJIM* MGIPBNFPMEA(::MoleMole::CDN_DispatchData* INDMKBPMKFI)
	{
		return ((::CLOPJGCIJIM*(*)(::MoleMole::CDN_DispatchData*))((::PBYTE)hIl2Cpp + FAHGNHIHDLG_MGIPBNFPMEA_OFFSET))(INDMKBPMKFI);
	}

	static ::System::Void MHBHOAOEJLP(::Foundation::VersionFileInfo* JDLDDJLMABJ, ::JICNBAFOFEH* GAFEIOFEFED)
	{
		return ((::System::Void(*)(::Foundation::VersionFileInfo*, ::JICNBAFOFEH*))((::PBYTE)hIl2Cpp + FAHGNHIHDLG_MHBHOAOEJLP_OFFSET))(JDLDDJLMABJ, GAFEIOFEFED);
	}

	static ::CLOPJGCIJIM* ECIJPCPONPN(::MoleMole::CDNConfigExtension* INDMKBPMKFI)
	{
		return ((::CLOPJGCIJIM*(*)(::MoleMole::CDNConfigExtension*))((::PBYTE)hIl2Cpp + FAHGNHIHDLG_ECIJPCPONPN_OFFSET))(INDMKBPMKFI);
	}

	static ::System::Void CJEEMMECNED(::Foundation::VersionFileInfo* JDLDDJLMABJ, ::CLOPJGCIJIM* DDOCHHMLDMN)
	{
		return ((::System::Void(*)(::Foundation::VersionFileInfo*, ::CLOPJGCIJIM*))((::PBYTE)hIl2Cpp + FAHGNHIHDLG_CJEEMMECNED_OFFSET))(JDLDDJLMABJ, DDOCHHMLDMN);
	}

	static ::System::String* PIKBMFMCOGL(::System::String* AACBGCABMNC)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FAHGNHIHDLG_PIKBMFMCOGL_OFFSET))(AACBGCABMNC);
	}

	static ::System::Void ONBFMNHAGEP(::Foundation::VersionFileInfo* JDLDDJLMABJ, ::CLOPJGCIJIM* DDOCHHMLDMN)
	{
		return ((::System::Void(*)(::Foundation::VersionFileInfo*, ::CLOPJGCIJIM*))((::PBYTE)hIl2Cpp + FAHGNHIHDLG_ONBFMNHAGEP_OFFSET))(JDLDDJLMABJ, DDOCHHMLDMN);
	}

	static ::System::String* FFPFKDNKMML(::System::String* AACBGCABMNC)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FAHGNHIHDLG_FFPFKDNKMML_OFFSET))(AACBGCABMNC);
	}
};
