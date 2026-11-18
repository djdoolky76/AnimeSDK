#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OJKLAILLDHG_OKKKHEMIJJB_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x11B37E60)
#define OJKLAILLDHG_OKKKHEMIJJB__CTOR_OFFSET UNITYSDK_OFFSET(0x11B37E50)

inline static constexpr unsigned int OJKLAILLDHG_OKKKHEMIJJB_TypeDefinitionIndex = 59628;

class OJKLAILLDHG_OKKKHEMIJJB : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKLAILLDHG_OKKKHEMIJJB__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKLAILLDHG_OKKKHEMIJJB_PNGOHNLELDJ_OFFSET))(this);
	}
};
