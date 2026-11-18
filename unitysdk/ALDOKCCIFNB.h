#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace MoleMole { class UILineupSelectPageController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALDOKCCIFNB_BCKNNDAHDEN_OFFSET UNITYSDK_OFFSET(0x134E0EE0)
#define ALDOKCCIFNB_KAGJOEMLPDO_OFFSET UNITYSDK_OFFSET(0x134E0EA0)
#define ALDOKCCIFNB__CTOR_OFFSET UNITYSDK_OFFSET(0x134E0E50)

inline static constexpr unsigned int ALDOKCCIFNB_TypeDefinitionIndex = 63799;

class ALDOKCCIFNB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HLOFEHKAPEE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::SByte, ::BPHGNMNLLHF*>* ECENMJCLBIJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::SByte, ::System::Int32>* JBAGADMADIA; // 0x20
	::Il2CppArray<::System::Int32>* FFJGPKNMBBP; // 0x28
	::MoleMole::UILineupSelectPageController* NHJJFLPHAGI; // 0x30
	::System::Int32 DIFCPANPBLC; // 0x38
	::System::Boolean CCICDFINKJI; // 0x3C

	::System::Void _ctor(::MoleMole::UILineupSelectPageController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UILineupSelectPageController*))((::PBYTE)hIl2Cpp + ALDOKCCIFNB__CTOR_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void KAGJOEMLPDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDOKCCIFNB_KAGJOEMLPDO_OFFSET))(this);
	}

	::System::Void BCKNNDAHDEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDOKCCIFNB_BCKNNDAHDEN_OFFSET))(this);
	}
};
