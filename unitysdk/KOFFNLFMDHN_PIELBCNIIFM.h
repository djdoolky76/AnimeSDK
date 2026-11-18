#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KOFFNLFMDHN_PIELBCNIIFM_EMMJHGAMGBL_OFFSET UNITYSDK_OFFSET(0x15229E10)
#define KOFFNLFMDHN_PIELBCNIIFM_MBMEJCEKJEO_OFFSET UNITYSDK_OFFSET(0x15229E20)
#define KOFFNLFMDHN_PIELBCNIIFM__CTOR_OFFSET UNITYSDK_OFFSET(0x15229E00)

inline static constexpr unsigned int KOFFNLFMDHN_PIELBCNIIFM_TypeDefinitionIndex = 60126;

class KOFFNLFMDHN_PIELBCNIIFM : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_PIELBCNIIFM__CTOR_OFFSET))(this);
	}

	::System::Void EMMJHGAMGBL(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_PIELBCNIIFM_EMMJHGAMGBL_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MBMEJCEKJEO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_PIELBCNIIFM_MBMEJCEKJEO_OFFSET))(this, GLAOEHCGCFO);
	}
};
