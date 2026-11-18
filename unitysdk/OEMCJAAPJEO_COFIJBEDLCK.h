#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OEMCJAAPJEO_COFIJBEDLCK_GHIMHAAHKIO_OFFSET UNITYSDK_OFFSET(0x15FD8160)
#define OEMCJAAPJEO_COFIJBEDLCK_KFIIEFBPMNA_OFFSET UNITYSDK_OFFSET(0x15FD8180)
#define OEMCJAAPJEO_COFIJBEDLCK__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD8150)

inline static constexpr unsigned int OEMCJAAPJEO_COFIJBEDLCK_TypeDefinitionIndex = 84416;

class OEMCJAAPJEO_COFIJBEDLCK : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_COFIJBEDLCK__CTOR_OFFSET))(this);
	}

	::System::Void GHIMHAAHKIO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_COFIJBEDLCK_GHIMHAAHKIO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void KFIIEFBPMNA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OEMCJAAPJEO_COFIJBEDLCK_KFIIEFBPMNA_OFFSET))(this, PIIPCLCCOIG);
	}
};
