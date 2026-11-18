#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ILELCAIEEDL_KJJHHBGMJKK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14A2A970)
#define ILELCAIEEDL_KJJHHBGMJKK__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2A960)

inline static constexpr unsigned int ILELCAIEEDL_KJJHHBGMJKK_TypeDefinitionIndex = 48049;

class ILELCAIEEDL_KJJHHBGMJKK : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILELCAIEEDL_KJJHHBGMJKK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILELCAIEEDL_KJJHHBGMJKK_PNGOHNLELDJ_OFFSET))(this);
	}
};
