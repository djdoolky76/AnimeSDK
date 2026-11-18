#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KCFGFLAIJOM_FNAIBJLBGJG__CTOR_OFFSET UNITYSDK_OFFSET(0x178F0370)

inline static constexpr unsigned int KCFGFLAIJOM_FNAIBJLBGJG_TypeDefinitionIndex = 67815;

class KCFGFLAIJOM_FNAIBJLBGJG : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* HJCFFAODNIJ; // 0x10
	::System::String* OCOJFKMOKMK; // 0x18
	::System::Action_1<::System::String*>* CBDBDDFEPEK; // 0x20
	::System::Boolean MHOIBAODPID; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFGFLAIJOM_FNAIBJLBGJG__CTOR_OFFSET))(this);
	}
};
