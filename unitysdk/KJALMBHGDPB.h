#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define KJALMBHGDPB_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x19EFC080)
#define KJALMBHGDPB_CTOR_OFFSET UNITYSDK_OFFSET(0x19EFBF60)
#define KJALMBHGDPB_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x19EFC0D0)
#define KJALMBHGDPB_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x19EFBF70)

inline static constexpr unsigned int KJALMBHGDPB_TypeDefinitionIndex = 65921;

	class KJALMBHGDPB : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + KJALMBHGDPB_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJALMBHGDPB_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJALMBHGDPB_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJALMBHGDPB_IDBHAGEDEIP_OFFSET))(this);
		}

	};
