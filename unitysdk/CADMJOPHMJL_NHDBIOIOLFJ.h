#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CADMJOPHMJL;
class FFPELGOHFEP;
namespace System { template <typename T> class Action_1; }

#define CADMJOPHMJL_NHDBIOIOLFJ_FAJIEPGOCLI_OFFSET UNITYSDK_OFFSET(0x14591F30)
#define CADMJOPHMJL_NHDBIOIOLFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14591F20)

inline static constexpr unsigned int CADMJOPHMJL_NHDBIOIOLFJ_TypeDefinitionIndex = 41234;

class CADMJOPHMJL_NHDBIOIOLFJ : public ::System::Object
{
public:
	::System::Action_1<::FFPELGOHFEP*>* EDNJGMKPFHG; // 0x10
	::CADMJOPHMJL* KLHPEBKNIFB; // 0x18
	::System::UInt32 JKFECGGHFFC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_NHDBIOIOLFJ__CTOR_OFFSET))(this);
	}

	::System::Void FAJIEPGOCLI(::FFPELGOHFEP* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::FFPELGOHFEP*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_NHDBIOIOLFJ_FAJIEPGOCLI_OFFSET))(this, GLAOEHCGCFO);
	}
};
