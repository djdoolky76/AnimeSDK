#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define OEKIBMCPHFG__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F3860)

inline static constexpr unsigned int OEKIBMCPHFG_TypeDefinitionIndex = 46004;

class OEKIBMCPHFG : public ::System::Object
{
public:
	::System::String* BPJJFLGNPEI; // 0x10
	::UnityEngine::Transform* EPHCNPHNKHE; // 0x18
	::System::String* NCHCMKEAHCD; // 0x20
	::System::Double KJFDCLNDLAI; // 0x28
	::System::Double HIDFPIPBDFB; // 0x30
	::System::Double OKAGDPDHKKG; // 0x38
	::System::Double DBOFLDGEHBD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKIBMCPHFG__CTOR_OFFSET))(this);
	}
};
