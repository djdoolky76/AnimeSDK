#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class CADMJOPHMJL;
namespace System { class Action; }

#define CADMJOPHMJL_ENINBKBNMAP_DNHGANKNCCA_OFFSET UNITYSDK_OFFSET(0x14591C20)
#define CADMJOPHMJL_ENINBKBNMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x14591C10)

inline static constexpr unsigned int CADMJOPHMJL_ENINBKBNMAP_TypeDefinitionIndex = 41228;

class CADMJOPHMJL_ENINBKBNMAP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::CADMJOPHMJL* KLHPEBKNIFB; // 0x18
	::System::UInt32 FHEIMLOCHJJ; // 0x20
	::System::UInt32 KNNGDMLFCHG; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_ENINBKBNMAP__CTOR_OFFSET))(this);
	}

	::System::Void DNHGANKNCCA(::AOCCBECFDKA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOCCBECFDKA*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_ENINBKBNMAP_DNHGANKNCCA_OFFSET))(this, GLAOEHCGCFO);
	}
};
