#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JHGPEBLMFAI_LFDOMGLHBJI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x18A16580)
#define JHGPEBLMFAI_LFDOMGLHBJI__CTOR_OFFSET UNITYSDK_OFFSET(0x18A16570)

inline static constexpr unsigned int JHGPEBLMFAI_LFDOMGLHBJI_TypeDefinitionIndex = 61193;

class JHGPEBLMFAI_LFDOMGLHBJI : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGPEBLMFAI_LFDOMGLHBJI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGPEBLMFAI_LFDOMGLHBJI_PNGOHNLELDJ_OFFSET))(this);
	}
};
