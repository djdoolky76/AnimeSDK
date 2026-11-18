#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IDDLGENOHLM_DHJFCMJLDGD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x140D9C50)
#define IDDLGENOHLM_DHJFCMJLDGD__CTOR_OFFSET UNITYSDK_OFFSET(0x140D9C40)

inline static constexpr unsigned int IDDLGENOHLM_DHJFCMJLDGD_TypeDefinitionIndex = 47721;

class IDDLGENOHLM_DHJFCMJLDGD : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDLGENOHLM_DHJFCMJLDGD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDLGENOHLM_DHJFCMJLDGD_PNGOHNLELDJ_OFFSET))(this);
	}
};
