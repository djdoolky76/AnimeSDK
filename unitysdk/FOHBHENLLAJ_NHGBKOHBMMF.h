#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define FOHBHENLLAJ_NHGBKOHBMMF_MLLLKMMLBOA_OFFSET UNITYSDK_OFFSET(0x116C3E20)
#define FOHBHENLLAJ_NHGBKOHBMMF__CTOR_OFFSET UNITYSDK_OFFSET(0x116C3E10)

inline static constexpr unsigned int FOHBHENLLAJ_NHGBKOHBMMF_TypeDefinitionIndex = 59693;

class FOHBHENLLAJ_NHGBKOHBMMF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_NHGBKOHBMMF__CTOR_OFFSET))(this);
	}

	::System::Void MLLLKMMLBOA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_NHGBKOHBMMF_MLLLKMMLBOA_OFFSET))(this, PIIPCLCCOIG);
	}
};
