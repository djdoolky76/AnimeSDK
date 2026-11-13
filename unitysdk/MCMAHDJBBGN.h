#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MCMAHDJBBGN_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x183BD8C0)
#define MCMAHDJBBGN_CTOR_OFFSET UNITYSDK_OFFSET(0x183BDA70)
#define MCMAHDJBBGN_KGBGKEMKADL_OFFSET UNITYSDK_OFFSET(0x183BD9B0)
#define MCMAHDJBBGN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x183BD7F0)

inline static constexpr unsigned int MCMAHDJBBGN_TypeDefinitionIndex = 62624;

	class MCMAHDJBBGN : public ::System::Object
	{
	public:
		::System::String* ADKEMJKHDOF; // 0x10
		::System::DateTime DCNCKPBMJFL; // 0x18
		::System::DateTime HFHLFIPLIOD; // 0x20
		::System::Double ABNCCCEINDA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMAHDJBBGN_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMAHDJBBGN_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMAHDJBBGN_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void KGBGKEMKADL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMAHDJBBGN_KGBGKEMKADL_OFFSET))(this);
		}

	};
