#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class CADMJOPHMJL;
namespace System { template <typename T> class Action_1; }

#define CADMJOPHMJL_MKIOHLLDJOI_MELHBECGANK_OFFSET UNITYSDK_OFFSET(0x11419FC0)
#define CADMJOPHMJL_MKIOHLLDJOI__CTOR_OFFSET UNITYSDK_OFFSET(0x11419FB0)

inline static constexpr unsigned int CADMJOPHMJL_MKIOHLLDJOI_TypeDefinitionIndex = 41227;

class CADMJOPHMJL_MKIOHLLDJOI : public ::System::Object
{
public:
	::CADMJOPHMJL* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::UInt32>* EDNJGMKPFHG; // 0x18
	::System::UInt32 FHEIMLOCHJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_MKIOHLLDJOI__CTOR_OFFSET))(this);
	}

	::System::Void MELHBECGANK(::AOCCBECFDKA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOCCBECFDKA*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_MKIOHLLDJOI_MELHBECGANK_OFFSET))(this, GLAOEHCGCFO);
	}
};
