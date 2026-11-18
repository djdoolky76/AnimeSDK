#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEBPGLCAPDN_HMAOHABICJK_COMFGIFIIDG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEBPGLCAPDN_HMAOHABICJK_ADBAHILIPIH_OFFSET UNITYSDK_OFFSET(0x11D015C0)
#define FEBPGLCAPDN_HMAOHABICJK_HNIJEBKOMGD_OFFSET UNITYSDK_OFFSET(0x11D00F90)
#define FEBPGLCAPDN_HMAOHABICJK_MKHOEJCDAHO_OFFSET UNITYSDK_OFFSET(0x11D01090)
#define FEBPGLCAPDN_HMAOHABICJK__CTOR_OFFSET UNITYSDK_OFFSET(0x11D01530)

inline static constexpr unsigned int FEBPGLCAPDN_HMAOHABICJK_TypeDefinitionIndex = 49635;

class FEBPGLCAPDN_HMAOHABICJK : public ::System::Object
{
public:
	::System::String* OOONELGGOKM; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* BEIJPABMEAN; // 0x18
	::System::Boolean EMJPAGJMNME; // 0x20

	::System::Void _ctor(::System::String* OOONELGGOKM, ::System::Boolean LCKFECHCGNA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_HMAOHABICJK__CTOR_OFFSET))(this, OOONELGGOKM, LCKFECHCGNA);
	}

	::System::Int32 ADBAHILIPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_HMAOHABICJK_ADBAHILIPIH_OFFSET))(this);
	}

	::System::Void MKHOEJCDAHO(::FEBPGLCAPDN_HMAOHABICJK_COMFGIFIIDG* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::FEBPGLCAPDN_HMAOHABICJK_COMFGIFIIDG*))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_HMAOHABICJK_MKHOEJCDAHO_OFFSET))(this, IPMMCGDMODG);
	}

	static ::FEBPGLCAPDN_HMAOHABICJK* HNIJEBKOMGD(::System::String* OOONELGGOKM, ::System::Boolean LCKFECHCGNA, ::System::Object* KPFNAMACIDA)
	{
		return ((::FEBPGLCAPDN_HMAOHABICJK*(*)(::System::String*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + FEBPGLCAPDN_HMAOHABICJK_HNIJEBKOMGD_OFFSET))(OOONELGGOKM, LCKFECHCGNA, KPFNAMACIDA);
	}
};
