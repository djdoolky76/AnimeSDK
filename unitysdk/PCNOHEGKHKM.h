#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/ValueTuple.h"
class GIDHOABFFFP;
class GJABEBPIGDN;
class HPJEECIEDAB;
class KGHMBCLFFLG;
class NNOALJAEMCG;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PCNOHEGKHKM_CTOR_OFFSET UNITYSDK_OFFSET(0xC008D70)
#define PCNOHEGKHKM_FNCNMCEOALF_OFFSET UNITYSDK_OFFSET(0xC008E00)
#define PCNOHEGKHKM_LAABNIGOJKJ_OFFSET UNITYSDK_OFFSET(0xC009170)
#define PCNOHEGKHKM_ODFIFAAGBCO_OFFSET UNITYSDK_OFFSET(0xC0091E0)
#define PCNOHEGKHKM_PAHALFAIMGN_OFFSET UNITYSDK_OFFSET(0xC009420)
#define PCNOHEGKHKM_PFNDDBOENHC_OFFSET UNITYSDK_OFFSET(0xC009380)

inline static constexpr unsigned int PCNOHEGKHKM_TypeDefinitionIndex = 62823;

	class PCNOHEGKHKM : public ::System::Object
	{
	public:
		::GIDHOABFFFP* LIOJKFIGGIJ; // 0x10
		::HPJEECIEDAB* PLOCCENMDOI; // 0x18
		::System::Void _ctor(::GIDHOABFFFP* a1, ::HPJEECIEDAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*, ::HPJEECIEDAB*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_CTOR_OFFSET))(this, a1, a2);
		}

		::NNOALJAEMCG* FNCNMCEOALF(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::NNOALJAEMCG*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_FNCNMCEOALF_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>* LAABNIGOJKJ(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_LAABNIGOJKJ_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>* PAHALFAIMGN(::RPG::GameCore::SpecialAvatarRelicRow* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>*(*)(::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + PCNOHEGKHKM_PAHALFAIMGN_OFFSET))(a1);
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
