#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Sirenix/Serialization/SerializationData.h"

#define DFCAPANAEKN_EEELPONCNAD_OFFSET UNITYSDK_OFFSET(0x1A1DD190)

inline static constexpr unsigned int DFCAPANAEKN_TypeDefinitionIndex = 41280;

class DFCAPANAEKN : public ::System::Object
{
public:
	static ::System::Void EEELPONCNAD(::Sirenix::Serialization::SerializationData OLKHDAAGGAA, ::Sirenix::Serialization::SerializationData& OAFLGAMBFGO)
	{
		return ((::System::Void(*)(::Sirenix::Serialization::SerializationData, ::Sirenix::Serialization::SerializationData&))((::PBYTE)hIl2Cpp + DFCAPANAEKN_EEELPONCNAD_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO);
	}
};
