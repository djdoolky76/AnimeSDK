#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/ValueTuple_2.h"
class GIDHOABFFFP;
class GJABEBPIGDN;
class HPJEECIEDAB;
class KGHMBCLFFLG;
class NNOALJAEMCG;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PCNOHEGKHKM_CTOR_OFFSET UNITYSDK_OFFSET(0xC0016B0)
#define PCNOHEGKHKM_FNCNMCEOALF_OFFSET UNITYSDK_OFFSET(0xC001740)
#define PCNOHEGKHKM_LAABNIGOJKJ_OFFSET UNITYSDK_OFFSET(0xC001AB0)
#define PCNOHEGKHKM_ODFIFAAGBCO_OFFSET UNITYSDK_OFFSET(0xC001B20)
#define PCNOHEGKHKM_PAHALFAIMGN_OFFSET UNITYSDK_OFFSET(0xC001D60)
#define PCNOHEGKHKM_PFNDDBOENHC_OFFSET UNITYSDK_OFFSET(0xC001CC0)

inline static constexpr unsigned int PCNOHEGKHKM_TypeDefinitionIndex = 62823;

	class PCNOHEGKHKM : public ::System::Object
	{
	public:
		::HPJEECIEDAB* PLOCCENMDOI; // 0x10
		::GIDHOABFFFP* LIOJKFIGGIJ; // 0x18
		::System::Void _ctor(::GIDHOABFFFP* a1, ::HPJEECIEDAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*, ::HPJEECIEDAB*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_CTOR_OFFSET))(this, a1, a2);
		}

		::NNOALJAEMCG* FNCNMCEOALF(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::NNOALJAEMCG*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_FNCNMCEOALF_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>* LAABNIGOJKJ(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_LAABNIGOJKJ_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>* PAHALFAIMGN(::RPG::GameCore::SpecialAvatarRelicRow* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>*(*)(::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_PAHALFAIMGN_OFFSET))(a1);
		}

		static ::GJABEBPIGDN* ODFIFAAGBCO(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::GJABEBPIGDN*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_ODFIFAAGBCO_OFFSET))(a1);
		}

		::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>* PFNDDBOENHC(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_PFNDDBOENHC_OFFSET))(this, a1);
		}

	};
