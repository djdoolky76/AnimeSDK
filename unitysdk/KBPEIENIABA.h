#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define KBPEIENIABA_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x1A472040)
#define KBPEIENIABA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A471F70)
#define KBPEIENIABA_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x1A472100)
#define KBPEIENIABA_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x1A471F80)

inline static constexpr unsigned int KBPEIENIABA_TypeDefinitionIndex = 65930;

	class KBPEIENIABA : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + KBPEIENIABA_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPEIENIABA_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPEIENIABA_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPEIENIABA_IDBHAGEDEIP_OFFSET))(this);
		}

	};
