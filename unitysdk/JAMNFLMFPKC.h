#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPGCOBNECDL.h"
#include "unitysdk/System/Object.h"

class NEDGGFHGKCM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAMNFLMFPKC_BGIAEEEOOLH_OFFSET UNITYSDK_OFFSET(0x15C325C0)
#define JAMNFLMFPKC_DCNPKKCPOBD_OFFSET UNITYSDK_OFFSET(0x15C32550)
#define JAMNFLMFPKC_IPHFDIKBFGD_OFFSET UNITYSDK_OFFSET(0x15C32950)
#define JAMNFLMFPKC_JIEMAGJCBJC_OFFSET UNITYSDK_OFFSET(0x15C32AA0)
#define JAMNFLMFPKC__CTOR_OFFSET UNITYSDK_OFFSET(0x15C32520)

inline static constexpr unsigned int JAMNFLMFPKC_TypeDefinitionIndex = 90644;

class JAMNFLMFPKC : public ::System::Object
{
public:
	// static const ::System::Char GADDPDBAEMJ = 0x26; // 0x0
	// static const ::System::Char FMBOKOMHGKG = 0x7C; // 0x0
	// static const ::System::Char LPGFAFAIOGD = 0x21; // 0x0
	// static const ::System::Char HICEHEHFGEF = 0x28; // 0x0
	// static const ::System::Char IOENIGNBMGO = 0x29; // 0x0
	// static const ::System::Char PDKLEOGKENC = 0x3C; // 0x0
	// static const ::System::Char NKPPNAOCMEE = 0x3E; // 0x0
	// static const ::System::Char AAAHAABJHIK = 0x3D; // 0x0
	// static const ::System::Char FHMALKFHNII = 0x7B; // 0x0
	// static const ::System::Char OHHGEHPEOID = 0x7D; // 0x0
	::System::String* DLCLJPNEJIK; // 0x10
	::System::Int32 OLLFNNGJCFN; // 0x18

	::System::Void _ctor(::System::String* HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JAMNFLMFPKC__CTOR_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Boolean DCNPKKCPOBD(::System::Char CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + JAMNFLMFPKC_DCNPKKCPOBD_OFFSET))(this, CBLGCIFLMKL);
	}

	::System::Collections::Generic::List_1<::NEDGGFHGKCM*>* BGIAEEEOOLH()
	{
		return ((::System::Collections::Generic::List_1<::NEDGGFHGKCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMNFLMFPKC_BGIAEEEOOLH_OFFSET))(this);
	}

	::NEDGGFHGKCM* JIEMAGJCBJC()
	{
		return ((::NEDGGFHGKCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAMNFLMFPKC_JIEMAGJCBJC_OFFSET))(this);
	}

	::CPGCOBNECDL IPHFDIKBFGD(::System::Char CBLGCIFLMKL)
	{
		return ((::CPGCOBNECDL(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + JAMNFLMFPKC_IPHFDIKBFGD_OFFSET))(this, CBLGCIFLMKL);
	}
};
