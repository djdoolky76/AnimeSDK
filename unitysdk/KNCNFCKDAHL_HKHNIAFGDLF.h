#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KNCNFCKDAHL_HKHNIAFGDLF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1A2D5F40)
#define KNCNFCKDAHL_HKHNIAFGDLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D5F30)

inline static constexpr unsigned int KNCNFCKDAHL_HKHNIAFGDLF_TypeDefinitionIndex = 49172;

class KNCNFCKDAHL_HKHNIAFGDLF : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCNFCKDAHL_HKHNIAFGDLF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCNFCKDAHL_HKHNIAFGDLF_PNGOHNLELDJ_OFFSET))(this);
	}
};
