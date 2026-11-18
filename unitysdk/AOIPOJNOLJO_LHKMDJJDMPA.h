#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOIPOJNOLJO;
class IFOHGNLIAKH;
class LCHGIJJLKGH;

#define AOIPOJNOLJO_LHKMDJJDMPA_PGEOHJLJHMG_OFFSET UNITYSDK_OFFSET(0x113C3E80)
#define AOIPOJNOLJO_LHKMDJJDMPA__CTOR_OFFSET UNITYSDK_OFFSET(0x113C3E70)

inline static constexpr unsigned int AOIPOJNOLJO_LHKMDJJDMPA_TypeDefinitionIndex = 73578;

class AOIPOJNOLJO_LHKMDJJDMPA : public ::System::Object
{
public:
	::AOIPOJNOLJO* KLHPEBKNIFB; // 0x10
	::LCHGIJJLKGH* ELBHPEPMGBP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIPOJNOLJO_LHKMDJJDMPA__CTOR_OFFSET))(this);
	}

	::System::Void PGEOHJLJHMG(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + AOIPOJNOLJO_LHKMDJJDMPA_PGEOHJLJHMG_OFFSET))(this, JOLDOMEIKEF);
	}
};
