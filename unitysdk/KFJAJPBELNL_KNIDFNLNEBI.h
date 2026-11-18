#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KFJAJPBELNL_KNIDFNLNEBI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14FD5C20)
#define KFJAJPBELNL_KNIDFNLNEBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD5C10)

inline static constexpr unsigned int KFJAJPBELNL_KNIDFNLNEBI_TypeDefinitionIndex = 66249;

class KFJAJPBELNL_KNIDFNLNEBI : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJAJPBELNL_KNIDFNLNEBI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJAJPBELNL_KNIDFNLNEBI_PNGOHNLELDJ_OFFSET))(this);
	}
};
