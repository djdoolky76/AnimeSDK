#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CADMJOPHMJL;
class EAIPIDOCCOJ;
namespace System { class Action; }

#define CADMJOPHMJL_EKHINBPIFDM_IGJKBCIKOHF_OFFSET UNITYSDK_OFFSET(0x14591B80)
#define CADMJOPHMJL_EKHINBPIFDM__CTOR_OFFSET UNITYSDK_OFFSET(0x14591B70)

inline static constexpr unsigned int CADMJOPHMJL_EKHINBPIFDM_TypeDefinitionIndex = 41239;

class CADMJOPHMJL_EKHINBPIFDM : public ::System::Object
{
public:
	::CADMJOPHMJL* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::System::UInt32 FHEIMLOCHJJ; // 0x20
	::System::Int32 MDKMEMLADPC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_EKHINBPIFDM__CTOR_OFFSET))(this);
	}

	::System::Void IGJKBCIKOHF(::EAIPIDOCCOJ* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::EAIPIDOCCOJ*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_EKHINBPIFDM_IGJKBCIKOHF_OFFSET))(this, GLAOEHCGCFO);
	}
};
