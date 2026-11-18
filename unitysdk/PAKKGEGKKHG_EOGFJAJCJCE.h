#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PAKKGEGKKHG_EOGFJAJCJCE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1295DE50)
#define PAKKGEGKKHG_EOGFJAJCJCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1295DE40)

inline static constexpr unsigned int PAKKGEGKKHG_EOGFJAJCJCE_TypeDefinitionIndex = 47134;

class PAKKGEGKKHG_EOGFJAJCJCE : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKKGEGKKHG_EOGFJAJCJCE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKKGEGKKHG_EOGFJAJCJCE_PNGOHNLELDJ_OFFSET))(this);
	}
};
