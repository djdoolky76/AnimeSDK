#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define JHJOPGMOGGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B2B50)
#define JHJOPGMOGGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1B2E20)
#define JHJOPGMOGGI_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0xB1B2D10)
#define JHJOPGMOGGI_GPONBBOCPIM_OFFSET UNITYSDK_OFFSET(0xB1B2C00)
#define JHJOPGMOGGI_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xB1B2DD0)
#define JHJOPGMOGGI_JEBDAFCDCIO_OFFSET UNITYSDK_OFFSET(0xB1B2CB0)

inline static constexpr unsigned int JHJOPGMOGGI_TypeDefinitionIndex = 75456;

	class JHJOPGMOGGI : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::UInt32 AHANBIGIBJB; // 0x18
		::System::UInt32 OJKLOIOAMKD; // 0x1C
		::System::Boolean AFLGDFPEMNP; // 0x20
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + JHJOPGMOGGI_CTOR_OFFSET))(this, a1);
		}

		::System::Void GPONBBOCPIM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHJOPGMOGGI_GPONBBOCPIM_OFFSET))(this, a1);
		}

		::System::Void JEBDAFCDCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJOPGMOGGI_JEBDAFCDCIO_OFFSET))(this);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJOPGMOGGI_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JHJOPGMOGGI_IIOIMDJJEDG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJOPGMOGGI_DISPOSE_OFFSET))(this);
		}

	};
