#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GABPPEMPMDM;
namespace System { class Action; }

#define GABPPEMPMDM_DPFNJCBBOIL_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B7B3070)
#define GABPPEMPMDM_DPFNJCBBOIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B3060)

inline static constexpr unsigned int GABPPEMPMDM_DPFNJCBBOIL_TypeDefinitionIndex = 11674;

class GABPPEMPMDM_DPFNJCBBOIL : public ::System::Object
{
public:
	::GABPPEMPMDM* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABPPEMPMDM_DPFNJCBBOIL__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GABPPEMPMDM_DPFNJCBBOIL_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
