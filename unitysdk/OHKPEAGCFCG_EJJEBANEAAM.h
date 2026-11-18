#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NCMJKFBKBEC;
class OHKPEAGCFCG;
namespace MoleMole { class UIBaseScenePageController; }

#define OHKPEAGCFCG_EJJEBANEAAM_KMCINMBPFDC_OFFSET UNITYSDK_OFFSET(0x1B78B130)
#define OHKPEAGCFCG_EJJEBANEAAM_NEPHFBHIJIL_OFFSET UNITYSDK_OFFSET(0x1B78B0A0)
#define OHKPEAGCFCG_EJJEBANEAAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B78B090)

inline static constexpr unsigned int OHKPEAGCFCG_EJJEBANEAAM_TypeDefinitionIndex = 74678;

class OHKPEAGCFCG_EJJEBANEAAM : public ::System::Object
{
public:
	::MoleMole::UIBaseScenePageController* DJNCNDNLIHJ; // 0x10
	::OHKPEAGCFCG* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKPEAGCFCG_EJJEBANEAAM__CTOR_OFFSET))(this);
	}

	::NCMJKFBKBEC* NEPHFBHIJIL()
	{
		return ((::NCMJKFBKBEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKPEAGCFCG_EJJEBANEAAM_NEPHFBHIJIL_OFFSET))(this);
	}

	::System::Void KMCINMBPFDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKPEAGCFCG_EJJEBANEAAM_KMCINMBPFDC_OFFSET))(this);
	}
};
