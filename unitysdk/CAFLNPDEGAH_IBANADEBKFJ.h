#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CAFLNPDEGAH_IBANADEBKFJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x115285A0)
#define CAFLNPDEGAH_IBANADEBKFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11528590)

inline static constexpr unsigned int CAFLNPDEGAH_IBANADEBKFJ_TypeDefinitionIndex = 43758;

class CAFLNPDEGAH_IBANADEBKFJ : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFLNPDEGAH_IBANADEBKFJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFLNPDEGAH_IBANADEBKFJ_PNGOHNLELDJ_OFFSET))(this);
	}
};
