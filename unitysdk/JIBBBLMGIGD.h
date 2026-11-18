#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDOJEBICCHE.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class HNLACBJDCGI;
class KOGPMKOGCLC;
class LHINLKLOLMP;
class NEPOFDEBNNN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define JIBBBLMGIGD_BCMBLHMKGMA_OFFSET UNITYSDK_OFFSET(0x198CB0B0)
#define JIBBBLMGIGD_EFHPEKGBBEA_OFFSET UNITYSDK_OFFSET(0x198CB410)
#define JIBBBLMGIGD_EGGIJBOGCJO_OFFSET UNITYSDK_OFFSET(0x198CA260)
#define JIBBBLMGIGD_HHENCAADLOK_OFFSET UNITYSDK_OFFSET(0x198CB270)
#define JIBBBLMGIGD_JOAGNLBOPJH_OFFSET UNITYSDK_OFFSET(0x198CB260)
#define JIBBBLMGIGD_LIDBEOCMEKL_OFFSET UNITYSDK_OFFSET(0x198CB2E0)
#define JIBBBLMGIGD__CTOR_OFFSET UNITYSDK_OFFSET(0x198C9EE0)

inline static constexpr unsigned int JIBBBLMGIGD_TypeDefinitionIndex = 47996;

class JIBBBLMGIGD : public ::IDOJEBICCHE
{
public:
	::NEPOFDEBNNN* FLDCALIHAAG; // 0x50
	::MoleMole::EntityHandle PDDJDELHMKN; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x68

	::System::Void _ctor(::KOGPMKOGCLC* IBJLHLDLLKN, ::HNLACBJDCGI* JMJGHFAOMNH, ::UnityEngine::Transform* OMKJFCJANHN)
	{
		return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*, ::HNLACBJDCGI*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JIBBBLMGIGD__CTOR_OFFSET))(this, IBJLHLDLLKN, JMJGHFAOMNH, OMKJFCJANHN);
	}

	::System::Void EGGIJBOGCJO(::MoleMole::UI::FlowerShop::ESlotType ABOCGLAOJGC, ::LHINLKLOLMP* DPOIMBCAJCG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::LHINLKLOLMP*))((::PBYTE)hIl2Cpp + JIBBBLMGIGD_EGGIJBOGCJO_OFFSET))(this, ABOCGLAOJGC, DPOIMBCAJCG);
	}

	::System::Void BCMBLHMKGMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBBLMGIGD_BCMBLHMKGMA_OFFSET))(this);
	}

	::System::Void JOAGNLBOPJH(::MoleMole::UI::FlowerShop::ESlotType MIALFKCCCPI, ::LHINLKLOLMP* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::LHINLKLOLMP*))((::PBYTE)hIl2Cpp + JIBBBLMGIGD_JOAGNLBOPJH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void HHENCAADLOK(::MoleMole::UI::FlowerShop::EFinishJudge NIDDHBMNNCJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::EFinishJudge))((::PBYTE)hIl2Cpp + JIBBBLMGIGD_HHENCAADLOK_OFFSET))(this, NIDDHBMNNCJ);
	}

	::System::Void LIDBEOCMEKL(::MoleMole::UI::FlowerShop::ESlotType ABOCGLAOJGC, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::System::Boolean))((::PBYTE)hIl2Cpp + JIBBBLMGIGD_LIDBEOCMEKL_OFFSET))(this, ABOCGLAOJGC, FBILHHBPEHD);
	}

	::System::Void EFHPEKGBBEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBBLMGIGD_EFHPEKGBBEA_OFFSET))(this);
	}
};
