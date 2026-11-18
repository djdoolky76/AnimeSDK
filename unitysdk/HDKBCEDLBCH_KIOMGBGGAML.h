#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HDKBCEDLBCH_KIOMGBGGAML_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x16F24D20)
#define HDKBCEDLBCH_KIOMGBGGAML__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24D10)

inline static constexpr unsigned int HDKBCEDLBCH_KIOMGBGGAML_TypeDefinitionIndex = 77223;

class HDKBCEDLBCH_KIOMGBGGAML : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBCEDLBCH_KIOMGBGGAML__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBCEDLBCH_KIOMGBGGAML_PNGOHNLELDJ_OFFSET))(this);
	}
};
