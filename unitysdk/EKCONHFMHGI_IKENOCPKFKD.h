#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EKCONHFMHGI_IKENOCPKFKD_OMELBKOLAMM_OFFSET UNITYSDK_OFFSET(0x158B7730)
#define EKCONHFMHGI_IKENOCPKFKD__CTOR_OFFSET UNITYSDK_OFFSET(0x158B7720)

inline static constexpr unsigned int EKCONHFMHGI_IKENOCPKFKD_TypeDefinitionIndex = 81898;

class EKCONHFMHGI_IKENOCPKFKD : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCONHFMHGI_IKENOCPKFKD__CTOR_OFFSET))(this);
	}

	::System::Void OMELBKOLAMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCONHFMHGI_IKENOCPKFKD_OMELBKOLAMM_OFFSET))(this);
	}
};
