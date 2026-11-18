#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CNPCACCFJMC;
namespace System { class Action; }

#define CNPCACCFJMC_MAIEGNMFIPJ_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x19F30C60)
#define CNPCACCFJMC_MAIEGNMFIPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19F30C50)

inline static constexpr unsigned int CNPCACCFJMC_MAIEGNMFIPJ_TypeDefinitionIndex = 11473;

class CNPCACCFJMC_MAIEGNMFIPJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::CNPCACCFJMC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPCACCFJMC_MAIEGNMFIPJ__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CNPCACCFJMC_MAIEGNMFIPJ_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
