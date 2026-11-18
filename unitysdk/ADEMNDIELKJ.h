#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class BEKLEIALMDF;
class CKNONNOLBDB;
class OGEIKLGMBKD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADEMNDIELKJ_EJCBGPJOAKA_OFFSET UNITYSDK_OFFSET(0x134A7BB0)
#define ADEMNDIELKJ_FBAMGKJMHMD_OFFSET UNITYSDK_OFFSET(0x134A7800)
#define ADEMNDIELKJ_KCHJEOEFMFH_OFFSET UNITYSDK_OFFSET(0x134A72F0)
#define ADEMNDIELKJ_NNADOHINDFD_OFFSET UNITYSDK_OFFSET(0x134A77F0)
#define ADEMNDIELKJ_PFDLIKDGIPO_OFFSET UNITYSDK_OFFSET(0x134A75A0)
#define ADEMNDIELKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x134A7210)

inline static constexpr unsigned int ADEMNDIELKJ_TypeDefinitionIndex = 81317;

class ADEMNDIELKJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::RenderDataHandle, ::BEKLEIALMDF*>* OKAHGLFLCIN; // 0x10
	::System::Collections::Generic::List_1<::BEKLEIALMDF*>* DOLOKNFJIBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEMNDIELKJ__CTOR_OFFSET))(this);
	}

	::System::Void KCHJEOEFMFH(::BEKLEIALMDF* MFOJKBBNEBP)
	{
		return ((::System::Void(*)(::PVOID, ::BEKLEIALMDF*))((::PBYTE)hIl2Cpp + ADEMNDIELKJ_KCHJEOEFMFH_OFFSET))(this, MFOJKBBNEBP);
	}

	::System::Void PFDLIKDGIPO(::BEKLEIALMDF* MFOJKBBNEBP)
	{
		return ((::System::Void(*)(::PVOID, ::BEKLEIALMDF*))((::PBYTE)hIl2Cpp + ADEMNDIELKJ_PFDLIKDGIPO_OFFSET))(this, MFOJKBBNEBP);
	}

	::System::Collections::Generic::List_1<::BEKLEIALMDF*>* NNADOHINDFD()
	{
		return ((::System::Collections::Generic::List_1<::BEKLEIALMDF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEMNDIELKJ_NNADOHINDFD_OFFSET))(this);
	}

	::System::Void FBAMGKJMHMD(::OGEIKLGMBKD* PACHPEFCDKP, ::CKNONNOLBDB* BJIMLAACCHA)
	{
		return ((::System::Void(*)(::PVOID, ::OGEIKLGMBKD*, ::CKNONNOLBDB*))((::PBYTE)hIl2Cpp + ADEMNDIELKJ_FBAMGKJMHMD_OFFSET))(this, PACHPEFCDKP, BJIMLAACCHA);
	}

	::System::Boolean EJCBGPJOAKA(::MoleMole::HollowChessboard::RenderDataHandle ECPJIPGIAEN, ::BEKLEIALMDF*& GLHIJLCNCFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::BEKLEIALMDF*&))((::PBYTE)hIl2Cpp + ADEMNDIELKJ_EJCBGPJOAKA_OFFSET))(this, ECPJIPGIAEN, GLHIJLCNCFC);
	}
};
