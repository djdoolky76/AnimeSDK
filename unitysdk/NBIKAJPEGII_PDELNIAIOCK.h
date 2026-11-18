#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NBIKAJPEGII_PDELNIAIOCK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x105AA810)
#define NBIKAJPEGII_PDELNIAIOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x105AA800)

inline static constexpr unsigned int NBIKAJPEGII_PDELNIAIOCK_TypeDefinitionIndex = 81592;

class NBIKAJPEGII_PDELNIAIOCK : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIKAJPEGII_PDELNIAIOCK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIKAJPEGII_PDELNIAIOCK_PNGOHNLELDJ_OFFSET))(this);
	}
};
