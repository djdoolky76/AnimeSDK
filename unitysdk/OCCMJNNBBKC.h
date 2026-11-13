#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAENAFJCEFD;
class OCCMJNNBBKC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCCMJNNBBKC_CTOR_OFFSET UNITYSDK_OFFSET(0x19A05370)
#define OCCMJNNBBKC_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x19A05090)
#define OCCMJNNBBKC_JBELCOMAGAP_OFFSET UNITYSDK_OFFSET(0x19A05420)
#define OCCMJNNBBKC_JNHLNOCBDDK_OFFSET UNITYSDK_OFFSET(0x19A051E0)

inline static constexpr unsigned int OCCMJNNBBKC_TypeDefinitionIndex = 57291;

	class OCCMJNNBBKC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HOPGIHHDFGF; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* BFNPNHDBPGF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCMJNNBBKC_CTOR_OFFSET))(this);
		}

		::EAENAFJCEFD* HMPDCLHIPHI()
		{
			return ((::EAENAFJCEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCMJNNBBKC_HMPDCLHIPHI_OFFSET))(this);
		}

		static ::OCCMJNNBBKC* JNHLNOCBDDK(::EAENAFJCEFD* a1)
		{
			return ((::OCCMJNNBBKC*(*)(::EAENAFJCEFD*))((::PBYTE)hIl2Cpp + OCCMJNNBBKC_JNHLNOCBDDK_OFFSET))(a1);
		}

		::System::Void JBELCOMAGAP(::OCCMJNNBBKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCCMJNNBBKC*))((::PBYTE)hIl2Cpp + OCCMJNNBBKC_JBELCOMAGAP_OFFSET))(this, a1);
		}

	};
