#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OBIEOBANNMN_PNDBAHEDHJD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xF16FCB0)
#define OBIEOBANNMN_PNDBAHEDHJD__CTOR_OFFSET UNITYSDK_OFFSET(0xF16FCA0)

inline static constexpr unsigned int OBIEOBANNMN_PNDBAHEDHJD_TypeDefinitionIndex = 85758;

class OBIEOBANNMN_PNDBAHEDHJD : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIEOBANNMN_PNDBAHEDHJD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIEOBANNMN_PNDBAHEDHJD_PNGOHNLELDJ_OFFSET))(this);
	}
};
