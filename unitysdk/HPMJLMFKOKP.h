#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class IMessage; }
namespace System { class Action; }

#define HPMJLMFKOKP_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC85D0)
#define HPMJLMFKOKP_IDOCGNIBDFE_OFFSET UNITYSDK_OFFSET(0x15DC84F0)

inline static constexpr unsigned int HPMJLMFKOKP_TypeDefinitionIndex = 69392;

	class HPMJLMFKOKP : public ::System::Object
	{
	public:
		::System::Action* HOPJMFJMOBD; // 0x10
		::Google::Protobuf::IMessage* JDONGIOEJGI; // 0x18
		::System::UInt16 IIPOJCBBMPM; // 0x20
		::System::UInt16 ABJOBBCPKLD; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMJLMFKOKP_CTOR_OFFSET))(this);
		}

		::System::Void IDOCGNIBDFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMJLMFKOKP_IDOCGNIBDFE_OFFSET))(this);
		}

	};
