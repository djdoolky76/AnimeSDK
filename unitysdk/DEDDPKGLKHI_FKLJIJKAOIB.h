#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAPINBBMLDJ.h"
#include "unitysdk/System/Object.h"

class AMODCFDGAKB;
class HGAJKHIMKJP;

#define DEDDPKGLKHI_FKLJIJKAOIB_KLOOMHPPABJ_OFFSET UNITYSDK_OFFSET(0x13E3EF60)
#define DEDDPKGLKHI_FKLJIJKAOIB__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3EF50)

inline static constexpr unsigned int DEDDPKGLKHI_FKLJIJKAOIB_TypeDefinitionIndex = 78348;

class DEDDPKGLKHI_FKLJIJKAOIB : public ::System::Object
{
public:
	::KAPINBBMLDJ AJCAINELJLK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_FKLJIJKAOIB__CTOR_OFFSET))(this);
	}

	::HGAJKHIMKJP* KLOOMHPPABJ(::AMODCFDGAKB* IPMMCGDMODG)
	{
		return ((::HGAJKHIMKJP*(*)(::PVOID, ::AMODCFDGAKB*))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_FKLJIJKAOIB_KLOOMHPPABJ_OFFSET))(this, IPMMCGDMODG);
	}
};
