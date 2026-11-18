#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BEMHEENDNCJ_MEILNGJBOLE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x170219D0)
#define BEMHEENDNCJ_MEILNGJBOLE__CTOR_OFFSET UNITYSDK_OFFSET(0x170219C0)

inline static constexpr unsigned int BEMHEENDNCJ_MEILNGJBOLE_TypeDefinitionIndex = 42537;

class BEMHEENDNCJ_MEILNGJBOLE : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMHEENDNCJ_MEILNGJBOLE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMHEENDNCJ_MEILNGJBOLE_PNGOHNLELDJ_OFFSET))(this);
	}
};
