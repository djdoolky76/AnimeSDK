#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OHELKPJAADF_CNENENBFOIF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xFD7AF20)
#define OHELKPJAADF_CNENENBFOIF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD7AF10)

inline static constexpr unsigned int OHELKPJAADF_CNENENBFOIF_TypeDefinitionIndex = 53799;

class OHELKPJAADF_CNENENBFOIF : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHELKPJAADF_CNENENBFOIF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHELKPJAADF_CNENENBFOIF_PNGOHNLELDJ_OFFSET))(this);
	}
};
