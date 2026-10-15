#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJIOGEFIOCD;
namespace RPG::Client { class PamChatData; }
namespace System { template <typename T> class Predicate_1; }

#define HILNADIJDAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15CEB440)
#define HILNADIJDAJ_HNNALBFKLJJ_OFFSET UNITYSDK_OFFSET(0x15CEB810)
#define HILNADIJDAJ_OFLANGABKBD_OFFSET UNITYSDK_OFFSET(0x15CEB650)
#define HILNADIJDAJ_PPMDJKHIFLM_OFFSET UNITYSDK_OFFSET(0x15CEB450)

inline static constexpr unsigned int HILNADIJDAJ_TypeDefinitionIndex = 63283;

	class HILNADIJDAJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILNADIJDAJ_CTOR_OFFSET))(this);
		}

		::System::Void PPMDJKHIFLM(::RPG::Client::PamChatData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatData*))((::PBYTE)hIl2Cpp + HILNADIJDAJ_PPMDJKHIFLM_OFFSET))(this, a1);
		}

		::System::Boolean HNNALBFKLJJ(::RPG::Client::PamChatData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PamChatData*, ::System::UInt32))((::PBYTE)hIl2Cpp + HILNADIJDAJ_HNNALBFKLJJ_OFFSET))(this, a1, a2);
		}

		::KJIOGEFIOCD* OFLANGABKBD(::RPG::Client::PamChatData* a1, ::System::Predicate_1<::KJIOGEFIOCD*>* a2)
		{
			return ((::KJIOGEFIOCD*(*)(::PVOID, ::RPG::Client::PamChatData*, ::System::Predicate_1<::KJIOGEFIOCD*>*))((::PBYTE)hIl2Cpp + HILNADIJDAJ_OFLANGABKBD_OFFSET))(this, a1, a2);
		}

	};
