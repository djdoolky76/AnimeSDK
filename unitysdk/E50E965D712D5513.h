#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }

#define E50E965D712D5513_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1F7DD50)
#define E50E965D712D5513_ED558BCFFB226CBA_OFFSET UNITYSDK_OFFSET(0x1B96BE0)
#define E50E965D712D5513__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E50E965D712D5513_TypeDefinitionIndex = 7893;

class E50E965D712D5513 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E50E965D712D5513__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E50E965D712D5513_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::ABC::UI::MonoLocalizedTmp* ED558BCFFB226CBA()
	{
		return ((::ABC::UI::MonoLocalizedTmp*(*)(::PVOID))((::PBYTE)hIl2Cpp + E50E965D712D5513_ED558BCFFB226CBA_OFFSET))(this);
	}
};
