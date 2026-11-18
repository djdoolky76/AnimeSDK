#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MNKAICOMNPK_NMFJPMBKNMH_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14073760)
#define MNKAICOMNPK_NMFJPMBKNMH__CTOR_OFFSET UNITYSDK_OFFSET(0x14073750)

inline static constexpr unsigned int MNKAICOMNPK_NMFJPMBKNMH_TypeDefinitionIndex = 38500;

class MNKAICOMNPK_NMFJPMBKNMH : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKAICOMNPK_NMFJPMBKNMH__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKAICOMNPK_NMFJPMBKNMH_PNGOHNLELDJ_OFFSET))(this);
	}
};
