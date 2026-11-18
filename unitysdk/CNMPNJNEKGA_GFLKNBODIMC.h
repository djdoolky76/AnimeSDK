#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CNMPNJNEKGA;
namespace System { class Action; }

#define CNMPNJNEKGA_GFLKNBODIMC_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19F2FFA0)
#define CNMPNJNEKGA_GFLKNBODIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x19F2FF90)

inline static constexpr unsigned int CNMPNJNEKGA_GFLKNBODIMC_TypeDefinitionIndex = 9194;

class CNMPNJNEKGA_GFLKNBODIMC : public ::System::Object
{
public:
	::CNMPNJNEKGA* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_GFLKNBODIMC__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CNMPNJNEKGA_GFLKNBODIMC_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
