#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HFKBMFOPKJC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCIBJOCPKPG_FHEMJEFFEND_OFFSET UNITYSDK_OFFSET(0x176F4060)
#define KCIBJOCPKPG_PPBEIGCJAFD_OFFSET UNITYSDK_OFFSET(0x176F4270)
#define KCIBJOCPKPG__CTOR_OFFSET UNITYSDK_OFFSET(0x176F3FD0)

inline static constexpr unsigned int KCIBJOCPKPG_TypeDefinitionIndex = 83889;

class KCIBJOCPKPG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HFKBMFOPKJC*>* JKMCDIDPLKK; // 0x10
	::System::Single JCMMBCOCBJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIBJOCPKPG__CTOR_OFFSET))(this);
	}

	::System::Void FHEMJEFFEND(::System::UInt32 LEHABHCOMGH, ::System::String* AADJPMHPNAH, ::System::Int32 MBNEAPBPOAK, ::System::Int32 HJNDMFGGPCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KCIBJOCPKPG_FHEMJEFFEND_OFFSET))(this, LEHABHCOMGH, AADJPMHPNAH, MBNEAPBPOAK, HJNDMFGGPCF);
	}

	::System::Void PPBEIGCJAFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIBJOCPKPG_PPBEIGCJAFD_OFFSET))(this);
	}
};
