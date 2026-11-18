#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFCAHCJOJCA;
namespace System { class Action; }

#define FFCAHCJOJCA_IBBLLDPEDPG_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x18B991A0)
#define FFCAHCJOJCA_IBBLLDPEDPG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B99190)

inline static constexpr unsigned int FFCAHCJOJCA_IBBLLDPEDPG_TypeDefinitionIndex = 10817;

class FFCAHCJOJCA_IBBLLDPEDPG : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::FFCAHCJOJCA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_IBBLLDPEDPG__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FFCAHCJOJCA_IBBLLDPEDPG_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
