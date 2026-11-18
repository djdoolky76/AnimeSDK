#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
class IFOHGNLIAKH;
class NPGCLCICAFA;

#define NPGCLCICAFA_CADCELNNIOE_LINEECGDLAP_OFFSET UNITYSDK_OFFSET(0x106C8FC0)
#define NPGCLCICAFA_CADCELNNIOE__CTOR_OFFSET UNITYSDK_OFFSET(0x106C8FB0)

inline static constexpr unsigned int NPGCLCICAFA_CADCELNNIOE_TypeDefinitionIndex = 74605;

class NPGCLCICAFA_CADCELNNIOE : public ::System::Object
{
public:
	::FMHDMLBDIJC* ABHBKFJKINO; // 0x10
	::NPGCLCICAFA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGCLCICAFA_CADCELNNIOE__CTOR_OFFSET))(this);
	}

	::System::Void LINEECGDLAP(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + NPGCLCICAFA_CADCELNNIOE_LINEECGDLAP_OFFSET))(this, JOLDOMEIKEF);
	}
};
