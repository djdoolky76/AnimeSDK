#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class POKDDOPPIHO;
namespace System { class Action; }

#define POKDDOPPIHO_DALIMFIGGHK_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1EE0BAE0)
#define POKDDOPPIHO_DALIMFIGGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE0BAD0)

inline static constexpr unsigned int POKDDOPPIHO_DALIMFIGGHK_TypeDefinitionIndex = 10550;

class POKDDOPPIHO_DALIMFIGGHK : public ::System::Object
{
public:
	::POKDDOPPIHO* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDDOPPIHO_DALIMFIGGHK__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + POKDDOPPIHO_DALIMFIGGHK_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
