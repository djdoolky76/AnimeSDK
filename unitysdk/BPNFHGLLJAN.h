#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AbyssS2_IMapGenerator; }

#define BPNFHGLLJAN_FENCOLLJAMO_OFFSET UNITYSDK_OFFSET(0x10E246F0)

inline static constexpr unsigned int BPNFHGLLJAN_TypeDefinitionIndex = 48249;

class BPNFHGLLJAN : public ::System::Object
{
public:
	static ::System::Void FENCOLLJAMO(::MoleMole::AbyssS2_IMapGenerator* HJOOOLAOICP)
	{
		return ((::System::Void(*)(::MoleMole::AbyssS2_IMapGenerator*))((::PBYTE)hIl2Cpp + BPNFHGLLJAN_FENCOLLJAMO_OFFSET))(HJOOOLAOICP);
	}
};
