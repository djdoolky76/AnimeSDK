#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesGameplayTargetShowMode.h"
#include "unitysdk/System/Object.h"
class DMHADFNOIGP;
class FPPNANNOMPF;
class HJPJAKIIOCN;
class JGHGCOMJODN;
class MOJFFDOILBN;
class OBJANKHLNGO;
namespace RPG::Client::ChenLingFes { class ChenLingFesGameBuffRewardWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGamePhaseToastWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameSettleInfoWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayTargetWindow; }
namespace RPG::Client::ChenLingFes { class ChenLingFesWeekSettleInfoWindow; }
namespace System { class String; }

#define CDHIMOOBIME_CTOR_OFFSET UNITYSDK_OFFSET(0xC768570)
#define CDHIMOOBIME_EOPEJBIEPND_1_OFFSET UNITYSDK_OFFSET(0xC7683F0)
#define CDHIMOOBIME_EOPEJBIEPND_OFFSET UNITYSDK_OFFSET(0xC768340)
#define CDHIMOOBIME_FKMAKMIAPGD_OFFSET UNITYSDK_OFFSET(0xC767F60)
#define CDHIMOOBIME_ILLBOKJKAFD_OFFSET UNITYSDK_OFFSET(0xC767EB0)
#define CDHIMOOBIME_MEEJCKDPKIL_OFFSET UNITYSDK_OFFSET(0xC768020)
#define CDHIMOOBIME_PHFPEIAMPCJ_1_OFFSET UNITYSDK_OFFSET(0xC7684B0)
#define CDHIMOOBIME_PHFPEIAMPCJ_OFFSET UNITYSDK_OFFSET(0xC7680E0)
#define CDHIMOOBIME_PHIEOAADLKP_OFFSET UNITYSDK_OFFSET(0xC7681A0)

inline static constexpr unsigned int CDHIMOOBIME_TypeDefinitionIndex = 81296;

	class CDHIMOOBIME : public ::System::Object
	{
	public:
		::HJPJAKIIOCN* CHAHLPHIGCN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHIMOOBIME_CTOR_OFFSET))(this);
		}

		::System::Void ILLBOKJKAFD(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + CDHIMOOBIME_ILLBOKJKAFD_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetWindow* FKMAKMIAPGD(::OBJANKHLNGO* a1, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetShowMode a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetWindow*(*)(::PVOID, ::OBJANKHLNGO*, ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetShowMode))((::PBYTE)hIl2Cpp + CDHIMOOBIME_FKMAKMIAPGD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastWindow* MEEJCKDPKIL(::OBJANKHLNGO* a1, ::System::String* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastWindow*(*)(::PVOID, ::OBJANKHLNGO*, ::System::String*))((::PBYTE)hIl2Cpp + CDHIMOOBIME_MEEJCKDPKIL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow* PHFPEIAMPCJ(::OBJANKHLNGO* a1, ::MOJFFDOILBN* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow*(*)(::PVOID, ::OBJANKHLNGO*, ::MOJFFDOILBN*))((::PBYTE)hIl2Cpp + CDHIMOOBIME_PHFPEIAMPCJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardWindow* PHIEOAADLKP(::OBJANKHLNGO* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameBuffRewardWindow*(*)(::PVOID, ::OBJANKHLNGO*, ::System::UInt32))((::PBYTE)hIl2Cpp + CDHIMOOBIME_PHIEOAADLKP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow* EOPEJBIEPND(::OBJANKHLNGO* a1, ::DMHADFNOIGP* a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow*(*)(::PVOID, ::OBJANKHLNGO*, ::DMHADFNOIGP*, ::System::UInt32))((::PBYTE)hIl2Cpp + CDHIMOOBIME_EOPEJBIEPND_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow* EOPEJBIEPND_1(::OBJANKHLNGO* a1, ::JGHGCOMJODN* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow*(*)(::PVOID, ::OBJANKHLNGO*, ::JGHGCOMJODN*))((::PBYTE)hIl2Cpp + CDHIMOOBIME_EOPEJBIEPND_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow* PHFPEIAMPCJ_1(::OBJANKHLNGO* a1, ::FPPNANNOMPF* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow*(*)(::PVOID, ::OBJANKHLNGO*, ::FPPNANNOMPF*))((::PBYTE)hIl2Cpp + CDHIMOOBIME_PHFPEIAMPCJ_1_OFFSET))(this, a1, a2);
		}

	};
