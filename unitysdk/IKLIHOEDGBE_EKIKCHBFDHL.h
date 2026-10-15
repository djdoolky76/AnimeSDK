#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StageItem.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define IKLIHOEDGBE_EKIKCHBFDHL_CTOR_OFFSET UNITYSDK_OFFSET(0x16489C50)
#define IKLIHOEDGBE_EKIKCHBFDHL_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1648C460)
#define IKLIHOEDGBE_EKIKCHBFDHL_GLIEEBOHHGN_OFFSET UNITYSDK_OFFSET(0x1648C4D0)
#define IKLIHOEDGBE_EKIKCHBFDHL_JJCONIFJPHO_OFFSET UNITYSDK_OFFSET(0x1648C480)
#define IKLIHOEDGBE_EKIKCHBFDHL_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1648C470)

inline static constexpr unsigned int IKLIHOEDGBE_EKIKCHBFDHL_TypeDefinitionIndex = 60712;

	class IKLIHOEDGBE_EKIKCHBFDHL : public ::System::Object
	{
	public:
		::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem IPMPNPPGHCP; // 0x10
		::UnityEngine::GameObject* CCLEEEJCMIH; // 0x28
		::System::Single _FadeProgress_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_EKIKCHBFDHL_CTOR_OFFSET))(this);
		}

		::System::Single get_FadeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_EKIKCHBFDHL_GET_FADEPROGRESS_OFFSET))(this);
		}

		::System::Void set_FadeProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_EKIKCHBFDHL_SET_FADEPROGRESS_OFFSET))(this, a1);
		}

		::System::Single JJCONIFJPHO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_EKIKCHBFDHL_JJCONIFJPHO_OFFSET))(this);
		}

		::System::Void GLIEEBOHHGN(::System::Collections::Generic::List_1<::DEBEAKKOHLN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DEBEAKKOHLN*>*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_EKIKCHBFDHL_GLIEEBOHHGN_OFFSET))(this, a1);
		}

	};
