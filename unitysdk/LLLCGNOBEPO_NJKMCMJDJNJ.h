#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLLCGNOBEPO;
namespace System { class Action; }

#define LLLCGNOBEPO_NJKMCMJDJNJ_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B305850)
#define LLLCGNOBEPO_NJKMCMJDJNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B305840)

inline static constexpr unsigned int LLLCGNOBEPO_NJKMCMJDJNJ_TypeDefinitionIndex = 11520;

class LLLCGNOBEPO_NJKMCMJDJNJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::LLLCGNOBEPO* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_NJKMCMJDJNJ__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_NJKMCMJDJNJ_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
