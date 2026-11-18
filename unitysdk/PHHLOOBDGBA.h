#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class ALGKMLLALFG;
class EECEBDJKOBI;
class FNFLMKFKKOK;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define PHHLOOBDGBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C657280)

inline static constexpr unsigned int PHHLOOBDGBA_TypeDefinitionIndex = 65207;

class PHHLOOBDGBA : public ::System::Object
{
public:
	::FNFLMKFKKOK* AHNJJLGIDAD; // 0x10
	::EECEBDJKOBI* CKMCJLLLAEO; // 0x18
	::ALGKMLLALFG* MHPNGBGGMMN; // 0x20
	::System::Action_2<::System::Int32, ::System::Action*>* JLFGOMIHFOJ; // 0x28
	::AFMMAIKKACF* AAOCANGHBDG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLOOBDGBA__CTOR_OFFSET))(this);
	}
};
