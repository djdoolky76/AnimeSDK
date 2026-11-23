#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }

#define F4E7B376DC079277_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x179F260)
#define F4E7B376DC079277__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F4E7B376DC079277_TypeDefinitionIndex = 868;

class F4E7B376DC079277 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoLocalizedTmp* B70C9BBA716CDE4C; // 0x80
	::ABC::UI::MonoLocalizedTmp* B5E9268446365054; // 0x88

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F4E7B376DC079277_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4E7B376DC079277__CTOR_OFFSET))(this);
	}
};
