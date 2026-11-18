#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HFBKHGAPJMM;
namespace System { class Action; }

#define HFBKHGAPJMM_CNAAAPBBJDM_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B4DD4E0)
#define HFBKHGAPJMM_CNAAAPBBJDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DD4D0)

inline static constexpr unsigned int HFBKHGAPJMM_CNAAAPBBJDM_TypeDefinitionIndex = 10486;

class HFBKHGAPJMM_CNAAAPBBJDM : public ::System::Object
{
public:
	::HFBKHGAPJMM* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_CNAAAPBBJDM__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HFBKHGAPJMM_CNAAAPBBJDM_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
