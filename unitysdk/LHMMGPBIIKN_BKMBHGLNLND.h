#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHMMGPBIIKN;
namespace System { class Action; }

#define LHMMGPBIIKN_BKMBHGLNLND_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1BA88040)
#define LHMMGPBIIKN_BKMBHGLNLND__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA88030)

inline static constexpr unsigned int LHMMGPBIIKN_BKMBHGLNLND_TypeDefinitionIndex = 15026;

class LHMMGPBIIKN_BKMBHGLNLND : public ::System::Object
{
public:
	::LHMMGPBIIKN* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_BKMBHGLNLND__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LHMMGPBIIKN_BKMBHGLNLND_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
