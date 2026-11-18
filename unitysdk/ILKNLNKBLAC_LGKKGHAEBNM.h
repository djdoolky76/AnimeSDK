#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILKNLNKBLAC_CJFGNCECIJG;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define ILKNLNKBLAC_LGKKGHAEBNM_CDBCDEHGOFO_OFFSET UNITYSDK_OFFSET(0x197DA5E0)
#define ILKNLNKBLAC_LGKKGHAEBNM__CTOR_OFFSET UNITYSDK_OFFSET(0x197DA5C0)

inline static constexpr unsigned int ILKNLNKBLAC_LGKKGHAEBNM_TypeDefinitionIndex = 71486;

class ILKNLNKBLAC_LGKKGHAEBNM : public ::System::Object
{
public:
	::ILKNLNKBLAC_CJFGNCECIJG* FGBNBFHOKAA; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* NONBCEBNHEH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_LGKKGHAEBNM__CTOR_OFFSET))(this);
	}

	::System::Void CDBCDEHGOFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_LGKKGHAEBNM_CDBCDEHGOFO_OFFSET))(this);
	}
};
