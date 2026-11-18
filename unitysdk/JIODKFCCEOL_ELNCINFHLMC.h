#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JIODKFCCEOL_ELNCINFHLMC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x165ADFA0)
#define JIODKFCCEOL_ELNCINFHLMC__CTOR_OFFSET UNITYSDK_OFFSET(0x165ADF90)

inline static constexpr unsigned int JIODKFCCEOL_ELNCINFHLMC_TypeDefinitionIndex = 64134;

class JIODKFCCEOL_ELNCINFHLMC : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIODKFCCEOL_ELNCINFHLMC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIODKFCCEOL_ELNCINFHLMC_PNGOHNLELDJ_OFFSET))(this);
	}
};
