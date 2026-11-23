#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFD9F816105D74B7/F233B97AD0010DC8.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E3C626807DF9B3D7_FE1B82E329BE9689_F0A7B9EB12ABAFDA_OFFSET UNITYSDK_OFFSET(0x29FFD70)
#define E3C626807DF9B3D7_FE1B82E329BE9689__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E3C626807DF9B3D7_FE1B82E329BE9689_TypeDefinitionIndex = 15765;

class E3C626807DF9B3D7_FE1B82E329BE9689 : public ::System::Object
{
public:
	::System::String* A010979B935AEDDF; // 0x10
	::System::String* B6018BB9F7294B44; // 0x18
	::FFD9F816105D74B7::F233B97AD0010DC8 ED9DF246D9B6769E; // 0x20
	::System::Int32 B714679C324FF96E; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3C626807DF9B3D7_FE1B82E329BE9689__CTOR_OFFSET))(this);
	}

	::System::Void F0A7B9EB12ABAFDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3C626807DF9B3D7_FE1B82E329BE9689_F0A7B9EB12ABAFDA_OFFSET))(this);
	}
};
