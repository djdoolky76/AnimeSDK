#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EEOCFLIHFHC_CCHAFAPAHFF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x16992BD0)
#define EEOCFLIHFHC_CCHAFAPAHFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16992BC0)

inline static constexpr unsigned int EEOCFLIHFHC_CCHAFAPAHFF_TypeDefinitionIndex = 49471;

class EEOCFLIHFHC_CCHAFAPAHFF : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOCFLIHFHC_CCHAFAPAHFF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOCFLIHFHC_CCHAFAPAHFF_PNGOHNLELDJ_OFFSET))(this);
	}
};
