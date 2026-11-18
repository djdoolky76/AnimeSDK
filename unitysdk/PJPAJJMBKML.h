#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagQueryExpression.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/PJPAJJMBKML_NAOIDNHDOJC.h"

namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJPAJJMBKML_BBNECHGONPG_OFFSET UNITYSDK_OFFSET(0x178E1390)
#define PJPAJJMBKML_CGAKMDKKPMG_OFFSET UNITYSDK_OFFSET(0x178E1100)
#define PJPAJJMBKML_ELHJGNAMKHJ_OFFSET UNITYSDK_OFFSET(0x178E0050)
#define PJPAJJMBKML_KIMHEEKOFCI_OFFSET UNITYSDK_OFFSET(0x178E00C0)
#define PJPAJJMBKML_MMFJBFKAPJK_OFFSET UNITYSDK_OFFSET(0x178E1300)
#define PJPAJJMBKML__CTOR_OFFSET UNITYSDK_OFFSET(0x178E10F0)

inline static constexpr unsigned int PJPAJJMBKML_TypeDefinitionIndex = 46006;

class PJPAJJMBKML : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Unreal::FGameplayTagQueryExpression>* BKKKLEKFNLA; // 0x18
	::PJPAJJMBKML_NAOIDNHDOJC DLDHDEELFGL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPAJJMBKML__CTOR_OFFSET))(this);
	}

	::System::Void ELHJGNAMKHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPAJJMBKML_ELHJGNAMKHJ_OFFSET))(this);
	}

	::System::Boolean CGAKMDKKPMG(::System::Int32 CJDFCANOBHM, ::Foundation::Unreal::FGameplayTagQuery*& OBIPHBKODPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagQuery*&))((::PBYTE)hIl2Cpp + PJPAJJMBKML_CGAKMDKKPMG_OFFSET))(this, CJDFCANOBHM, OBIPHBKODPP);
	}

	::System::Void MMFJBFKAPJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPAJJMBKML_MMFJBFKAPJK_OFFSET))(this);
	}

	::System::Boolean BBNECHGONPG(::System::Int32 CJDFCANOBHM, ::Foundation::Unreal::FGameplayTagQueryExpression& HJKPKODELAE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + PJPAJJMBKML_BBNECHGONPG_OFFSET))(this, CJDFCANOBHM, HJKPKODELAE);
	}

	::System::Void KIMHEEKOFCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPAJJMBKML_KIMHEEKOFCI_OFFSET))(this);
	}
};
