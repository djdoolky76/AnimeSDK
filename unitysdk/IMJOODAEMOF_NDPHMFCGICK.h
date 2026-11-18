#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IMJOODAEMOF_NDPHMFCGICK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x19889620)
#define IMJOODAEMOF_NDPHMFCGICK__CTOR_OFFSET UNITYSDK_OFFSET(0x19889610)

inline static constexpr unsigned int IMJOODAEMOF_NDPHMFCGICK_TypeDefinitionIndex = 75271;

class IMJOODAEMOF_NDPHMFCGICK : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJOODAEMOF_NDPHMFCGICK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJOODAEMOF_NDPHMFCGICK_PNGOHNLELDJ_OFFSET))(this);
	}
};
