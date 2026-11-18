#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EBALAGJMDGK_NLIIHNCNACO_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x169883D0)
#define EBALAGJMDGK_NLIIHNCNACO__CTOR_OFFSET UNITYSDK_OFFSET(0x169883C0)

inline static constexpr unsigned int EBALAGJMDGK_NLIIHNCNACO_TypeDefinitionIndex = 42897;

class EBALAGJMDGK_NLIIHNCNACO : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBALAGJMDGK_NLIIHNCNACO__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBALAGJMDGK_NLIIHNCNACO_PNGOHNLELDJ_OFFSET))(this);
	}
};
