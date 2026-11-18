#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGIMMOJEIEP;
namespace System { class Action; }

#define LGIMMOJEIEP_EHMODHPDLKJ_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1AD5A730)
#define LGIMMOJEIEP_EHMODHPDLKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5A720)

inline static constexpr unsigned int LGIMMOJEIEP_EHMODHPDLKJ_TypeDefinitionIndex = 14825;

class LGIMMOJEIEP_EHMODHPDLKJ : public ::System::Object
{
public:
	::LGIMMOJEIEP* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIMMOJEIEP_EHMODHPDLKJ__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LGIMMOJEIEP_EHMODHPDLKJ_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
