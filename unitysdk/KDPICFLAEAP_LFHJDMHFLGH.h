#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDPICFLAEAP;
namespace System { class Action; }

#define KDPICFLAEAP_LFHJDMHFLGH_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1A5F8860)
#define KDPICFLAEAP_LFHJDMHFLGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F82A0)

inline static constexpr unsigned int KDPICFLAEAP_LFHJDMHFLGH_TypeDefinitionIndex = 9999;

class KDPICFLAEAP_LFHJDMHFLGH : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::KDPICFLAEAP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICFLAEAP_LFHJDMHFLGH__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KDPICFLAEAP_LFHJDMHFLGH_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
