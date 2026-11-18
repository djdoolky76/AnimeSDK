#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFIKIBJODCE;
namespace System { class Action; }

#define MFIKIBJODCE_DCLIDJHBBMC_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1910A320)
#define MFIKIBJODCE_DCLIDJHBBMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1910A310)

inline static constexpr unsigned int MFIKIBJODCE_DCLIDJHBBMC_TypeDefinitionIndex = 13838;

class MFIKIBJODCE_DCLIDJHBBMC : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::MFIKIBJODCE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIKIBJODCE_DCLIDJHBBMC__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MFIKIBJODCE_DCLIDJHBBMC_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
