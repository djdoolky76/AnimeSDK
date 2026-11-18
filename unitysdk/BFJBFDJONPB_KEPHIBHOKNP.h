#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFJBFDJONPB;
namespace System { class Action; }

#define BFJBFDJONPB_KEPHIBHOKNP_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x194F9810)
#define BFJBFDJONPB_KEPHIBHOKNP__CTOR_OFFSET UNITYSDK_OFFSET(0x194F9800)

inline static constexpr unsigned int BFJBFDJONPB_KEPHIBHOKNP_TypeDefinitionIndex = 10965;

class BFJBFDJONPB_KEPHIBHOKNP : public ::System::Object
{
public:
	::BFJBFDJONPB* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBFDJONPB_KEPHIBHOKNP__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BFJBFDJONPB_KEPHIBHOKNP_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
