#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/Object.h"

class PBFBDLAIJNO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBFBDLAIJNO_NNBFOLFKCHE_NHGHNHLFFNG_OFFSET UNITYSDK_OFFSET(0x1A7E2A20)
#define PBFBDLAIJNO_NNBFOLFKCHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E2A10)

inline static constexpr unsigned int PBFBDLAIJNO_NNBFOLFKCHE_TypeDefinitionIndex = 57124;

class PBFBDLAIJNO_NNBFOLFKCHE : public ::System::Object
{
public:
	::PBFBDLAIJNO* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::System::Int32>* PHIJFNJGPDL; // 0x18
	::AIOFAMODPOO JGGPPJNIAKN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NNBFOLFKCHE__CTOR_OFFSET))(this);
	}

	::System::Void NHGHNHLFFNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_NNBFOLFKCHE_NHGHNHLFFNG_OFFSET))(this);
	}
};
