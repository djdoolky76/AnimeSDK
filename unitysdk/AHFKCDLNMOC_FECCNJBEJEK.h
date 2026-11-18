#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AHFKCDLNMOC_FECCNJBEJEK_GJDBFMMCBBH_OFFSET UNITYSDK_OFFSET(0x11B98880)
#define AHFKCDLNMOC_FECCNJBEJEK_MOHKKOKCOCM_OFFSET UNITYSDK_OFFSET(0x11B98870)
#define AHFKCDLNMOC_FECCNJBEJEK__CTOR_OFFSET UNITYSDK_OFFSET(0x11B97C30)

inline static constexpr unsigned int AHFKCDLNMOC_FECCNJBEJEK_TypeDefinitionIndex = 40178;

class AHFKCDLNMOC_FECCNJBEJEK : public ::System::Object
{
public:
	::System::Action* GOOPOJIJKKJ; // 0x10
	::System::Action* CAAFEGLOALC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFKCDLNMOC_FECCNJBEJEK__CTOR_OFFSET))(this);
	}

	::System::Void MOHKKOKCOCM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AHFKCDLNMOC_FECCNJBEJEK_MOHKKOKCOCM_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GJDBFMMCBBH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AHFKCDLNMOC_FECCNJBEJEK_GJDBFMMCBBH_OFFSET))(this, PIIPCLCCOIG);
	}
};
