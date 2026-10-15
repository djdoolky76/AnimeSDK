#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StoryVFX.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace RPGTools { class MonoTimelineEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKLIHOEDGBE_OGNMMDLIAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16489980)
#define IKLIHOEDGBE_OGNMMDLIAHJ_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1648C9C0)
#define IKLIHOEDGBE_OGNMMDLIAHJ_GLIEEBOHHGN_OFFSET UNITYSDK_OFFSET(0x1648CA30)
#define IKLIHOEDGBE_OGNMMDLIAHJ_JJCONIFJPHO_OFFSET UNITYSDK_OFFSET(0x1648C9E0)
#define IKLIHOEDGBE_OGNMMDLIAHJ_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1648C9D0)

inline static constexpr unsigned int IKLIHOEDGBE_OGNMMDLIAHJ_TypeDefinitionIndex = 60711;

	class IKLIHOEDGBE_OGNMMDLIAHJ : public ::System::Object
	{
	public:
		::RPGTools::MonoTimelineEffect* ONCFMDAGDKE; // 0x10
		::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX IPMPNPPGHCP; // 0x18
		::System::Single _FadeProgress_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_OGNMMDLIAHJ_CTOR_OFFSET))(this);
		}

		::System::Single get_FadeProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_OGNMMDLIAHJ_GET_FADEPROGRESS_OFFSET))(this);
		}

		::System::Void set_FadeProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_OGNMMDLIAHJ_SET_FADEPROGRESS_OFFSET))(this, a1);
		}

		::System::Single JJCONIFJPHO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_OGNMMDLIAHJ_JJCONIFJPHO_OFFSET))(this);
		}

		::System::Void GLIEEBOHHGN(::System::Collections::Generic::List_1<::DEBEAKKOHLN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DEBEAKKOHLN*>*))((::PBYTE)hIl2Cpp + IKLIHOEDGBE_OGNMMDLIAHJ_GLIEEBOHHGN_OFFSET))(this, a1);
		}

	};
