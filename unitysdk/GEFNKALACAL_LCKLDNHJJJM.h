#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GEFNKALACAL_LCKLDNHJJJM_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x116E6460)
#define GEFNKALACAL_LCKLDNHJJJM__CTOR_OFFSET UNITYSDK_OFFSET(0x116E6450)

inline static constexpr unsigned int GEFNKALACAL_LCKLDNHJJJM_TypeDefinitionIndex = 53701;

class GEFNKALACAL_LCKLDNHJJJM : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFNKALACAL_LCKLDNHJJJM__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFNKALACAL_LCKLDNHJJJM_PNGOHNLELDJ_OFFSET))(this);
	}
};
