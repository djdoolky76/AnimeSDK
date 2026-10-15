#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }

#define OHFBGHBLPKI_BOCOCDGMPOI_OFFSET UNITYSDK_OFFSET(0xBE668F0)
#define OHFBGHBLPKI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE66B50)
#define OHFBGHBLPKI_GMHBKGNIJFK_OFFSET UNITYSDK_OFFSET(0xBE66A30)
#define OHFBGHBLPKI_JGHPMILPGCG_OFFSET UNITYSDK_OFFSET(0xBE66990)
#define OHFBGHBLPKI_MOKNABIAFDE_OFFSET UNITYSDK_OFFSET(0xBE66860)
#define OHFBGHBLPKI_PCHGCEGEDGK_OFFSET UNITYSDK_OFFSET(0xBE66AE0)

	class OHFBGHBLPKI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFBGHBLPKI_CTOR_OFFSET))(this);
		}

		::System::Void MOKNABIAFDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHFBGHBLPKI_MOKNABIAFDE_OFFSET))(this, a1);
		}

		::System::Void BOCOCDGMPOI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OHFBGHBLPKI_BOCOCDGMPOI_OFFSET))(this, a1);
		}

		::System::Void JGHPMILPGCG(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + OHFBGHBLPKI_JGHPMILPGCG_OFFSET))(this, a1);
		}

		::System::Void GMHBKGNIJFK(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + OHFBGHBLPKI_GMHBKGNIJFK_OFFSET))(this, a1, a2);
		}

		::System::Void PCHGCEGEDGK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OHFBGHBLPKI_PCHGCEGEDGK_OFFSET))(this, a1);
		}

	};
