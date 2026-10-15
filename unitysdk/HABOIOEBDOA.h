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
namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HABOIOEBDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15B70B70)
#define HABOIOEBDOA_FNCNMCEOALF_OFFSET UNITYSDK_OFFSET(0x15B70C20)
#define HABOIOEBDOA_LAABNIGOJKJ_OFFSET UNITYSDK_OFFSET(0x15B70FF0)
#define HABOIOEBDOA_ODFIFAAGBCO_OFFSET UNITYSDK_OFFSET(0x15B71080)
#define HABOIOEBDOA_PFNDDBOENHC_OFFSET UNITYSDK_OFFSET(0x15B71140)

inline static constexpr unsigned int HABOIOEBDOA_TypeDefinitionIndex = 62735;

	class HABOIOEBDOA : public ::System::Object
	{
	public:
		::GIDHOABFFFP* LIOJKFIGGIJ; // 0x10
		::HPJEECIEDAB* PLOCCENMDOI; // 0x18
		::System::Void _ctor(::GIDHOABFFFP* a1, ::HPJEECIEDAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*, ::HPJEECIEDAB*))((::PBYTE)hIl2Cpp + HABOIOEBDOA_CTOR_OFFSET))(this, a1, a2);
		}

		::NNOALJAEMCG* FNCNMCEOALF(::Proto::DisplayAvatarDetailInfo* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::NNOALJAEMCG*(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HABOIOEBDOA_FNCNMCEOALF_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>* LAABNIGOJKJ(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>*(*)(::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + HABOIOEBDOA_LAABNIGOJKJ_OFFSET))(a1);
		}

		static ::GJABEBPIGDN* ODFIFAAGBCO(::Proto::DisplayAvatarDetailInfo* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::GJABEBPIGDN*(*)(::Proto::DisplayAvatarDetailInfo*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HABOIOEBDOA_ODFIFAAGBCO_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>* PFNDDBOENHC(::Proto::DisplayAvatarDetailInfo* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>*(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + HABOIOEBDOA_PFNDDBOENHC_OFFSET))(this, a1);
		}

	};
