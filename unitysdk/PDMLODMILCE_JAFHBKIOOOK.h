#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PDMLODMILCE_JAFHBKIOOOK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xFDA7650)
#define PDMLODMILCE_JAFHBKIOOOK__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA7640)

inline static constexpr unsigned int PDMLODMILCE_JAFHBKIOOOK_TypeDefinitionIndex = 83370;

class PDMLODMILCE_JAFHBKIOOOK : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMLODMILCE_JAFHBKIOOOK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMLODMILCE_JAFHBKIOOOK_PNGOHNLELDJ_OFFSET))(this);
	}
};
