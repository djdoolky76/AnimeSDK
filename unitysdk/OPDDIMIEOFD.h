#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GFEAAEGGBPJ.h"

namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }

#define OPDDIMIEOFD_NCAMADOEGIN_OFFSET UNITYSDK_OFFSET(0x13A7D4F0)
#define OPDDIMIEOFD__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7D4A0)

inline static constexpr unsigned int OPDDIMIEOFD_TypeDefinitionIndex = 80315;

class OPDDIMIEOFD : public ::System::Object
{
public:
	::MoleMole::SceneMark::StageTweenAnimData* JMINOGAOFIL; // 0x10
	::System::String* MGEDBKBHJPM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDDIMIEOFD__CTOR_OFFSET))(this);
	}

	::GFEAAEGGBPJ NCAMADOEGIN()
	{
		return ((::GFEAAEGGBPJ(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDDIMIEOFD_NCAMADOEGIN_OFFSET))(this);
	}
};
