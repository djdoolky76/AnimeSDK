#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define AGLEKEKLCKC_JNAIEFMIFCI_OFFSET UNITYSDK_OFFSET(0x17CC9920)
#define AGLEKEKLCKC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CC9890)
#define AGLEKEKLCKC__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC9800)

inline static constexpr unsigned int AGLEKEKLCKC_TypeDefinitionIndex = 40512;

class AGLEKEKLCKC
{
public:
	::System::Void _ctor(::System::Int32 AHFJCBLHFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGLEKEKLCKC__CTOR_OFFSET))(this, AHFJCBLHFIJ);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IDictionary_2<::System::String*, ::MoleMole::DownloadFileInfo*>* NFBGFHDACPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::MoleMole::DownloadFileInfo*>*))((::PBYTE)hIl2Cpp + AGLEKEKLCKC__CTOR_1_OFFSET))(this, NFBGFHDACPD);
	}

	static ::AGLEKEKLCKC* JNAIEFMIFCI(::System::Collections::Generic::IEnumerable_1<::MoleMole::DownloadFileInfo*>*& HACKNDEABCD)
	{
		return ((::AGLEKEKLCKC*(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::DownloadFileInfo*>*&))((::PBYTE)hIl2Cpp + AGLEKEKLCKC_JNAIEFMIFCI_OFFSET))(HACKNDEABCD);
	}
};
