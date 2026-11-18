#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHIAIDDBMOO.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define KFHGJIOCGGI_HBGOOGALMJP_OFFSET UNITYSDK_OFFSET(0x1764A260)
#define KFHGJIOCGGI_NPLDAEEEIBC_OFFSET UNITYSDK_OFFSET(0x1764A310)

inline static constexpr unsigned int KFHGJIOCGGI_TypeDefinitionIndex = 60248;

struct alignas(8) KFHGJIOCGGI
{
	::JHIAIDDBMOO ENDKPBEFBME; // 0x10
	::System::UInt32 KMLBMCENJPI; // 0x14
	::System::UInt32 MJJIAPBOIKH; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* PNKAKFMGEBA; // 0x20
	::System::Boolean ENPNCBHDCPN; // 0x28

	/*
	static ::KFHGJIOCGGI HBGOOGALMJP(::System::UInt32 DGMOLEDDPOA, ::System::UInt32 DKBGLBIECBN, ::System::String* HJNGNDNBJHL, ::System::Boolean DGMDPHLIFBO)
	{
		return ((::KFHGJIOCGGI(*)(::System::UInt32, ::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFHGJIOCGGI_HBGOOGALMJP_OFFSET))(DGMOLEDDPOA, DKBGLBIECBN, HJNGNDNBJHL, DGMDPHLIFBO);
	}
	*/

	/*
	static ::KFHGJIOCGGI NPLDAEEEIBC(::System::UInt32 EGKGLCIDEHC, ::System::UInt32 DKBGLBIECBN, ::System::String* HJNGNDNBJHL)
	{
		return ((::KFHGJIOCGGI(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + KFHGJIOCGGI_NPLDAEEEIBC_OFFSET))(EGKGLCIDEHC, DKBGLBIECBN, HJNGNDNBJHL);
	}
	*/
};
