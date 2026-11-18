#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HEPBJAGBBCD;
namespace System { class Action; }

#define HEPBJAGBBCD_DJGHBDIPLKP_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1A4EAD90)
#define HEPBJAGBBCD_DJGHBDIPLKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4EAD80)

inline static constexpr unsigned int HEPBJAGBBCD_DJGHBDIPLKP_TypeDefinitionIndex = 9281;

class HEPBJAGBBCD_DJGHBDIPLKP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::HEPBJAGBBCD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_DJGHBDIPLKP__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HEPBJAGBBCD_DJGHBDIPLKP_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
