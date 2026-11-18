#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NMEOBOGLNNE_EOMBNGAHMJC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xE765D50)
#define NMEOBOGLNNE_EOMBNGAHMJC__CTOR_OFFSET UNITYSDK_OFFSET(0xE765D40)

inline static constexpr unsigned int NMEOBOGLNNE_EOMBNGAHMJC_TypeDefinitionIndex = 41745;

class NMEOBOGLNNE_EOMBNGAHMJC : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEOBOGLNNE_EOMBNGAHMJC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEOBOGLNNE_EOMBNGAHMJC_PNGOHNLELDJ_OFFSET))(this);
	}
};
