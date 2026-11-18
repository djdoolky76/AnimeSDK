#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMEBLNJMHGI.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Arcade::CompanionProject { class CpSkillEffectData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPMJPBBHEDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F643070)

inline static constexpr unsigned int NPMJPBBHEDE_TypeDefinitionIndex = 94393;

class NPMJPBBHEDE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Arcade::CompanionProject::CpSkillEffectData*>* ODMFPMMJICL; // 0x10
	::System::Int32 IIFMJFJOOCK; // 0x18
	::System::Single EEODALLOKMF; // 0x1C
	::NMEBLNJMHGI HNOPAJLDCFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMJPBBHEDE__CTOR_OFFSET))(this);
	}
};
