#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class EPDGBMGOPHM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHGLCBAFNLE_CTOR_OFFSET UNITYSDK_OFFSET(0x15771250)
#define FHGLCBAFNLE_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15770ED0)
#define FHGLCBAFNLE_HEJJAGIKOFB_OFFSET UNITYSDK_OFFSET(0x157711B0)
#define FHGLCBAFNLE_ICEMIKMHIHA_OFFSET UNITYSDK_OFFSET(0x157710B0)
#define FHGLCBAFNLE_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x15770FD0)

inline static constexpr unsigned int FHGLCBAFNLE_TypeDefinitionIndex = 53751;

	class FHGLCBAFNLE : public ::GJPFGOGOLBI
	{
	public:
		::EPDGBMGOPHM* OHKCFMOAECF; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* GCOEIOANDLG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGLCBAFNLE_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGLCBAFNLE_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGLCBAFNLE_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void ICEMIKMHIHA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FHGLCBAFNLE_ICEMIKMHIHA_OFFSET))(this, a1);
		}

		::System::Void HEJJAGIKOFB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FHGLCBAFNLE_HEJJAGIKOFB_OFFSET))(this, a1);
		}

	};
