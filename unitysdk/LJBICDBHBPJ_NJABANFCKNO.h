#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LJBICDBHBPJ;
namespace System { class Action; }

#define LJBICDBHBPJ_NJABANFCKNO_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B304580)
#define LJBICDBHBPJ_NJABANFCKNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B304570)

inline static constexpr unsigned int LJBICDBHBPJ_NJABANFCKNO_TypeDefinitionIndex = 9578;

class LJBICDBHBPJ_NJABANFCKNO : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::LJBICDBHBPJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_NJABANFCKNO__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_NJABANFCKNO_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
