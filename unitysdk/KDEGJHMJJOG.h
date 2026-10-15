#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCOGFOGPKHI;
class HIPNGPHHCJC;
class LGGELBFHJIM;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDEGJHMJJOG_AGOOGJKKBPP_OFFSET UNITYSDK_OFFSET(0xB346590)
#define KDEGJHMJJOG_AHFKNHKBBDL_OFFSET UNITYSDK_OFFSET(0xB346050)
#define KDEGJHMJJOG_BGEHLILMOFO_OFFSET UNITYSDK_OFFSET(0xB346A70)
#define KDEGJHMJJOG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB346B50)
#define KDEGJHMJJOG_CFEAGDDGKLA_OFFSET UNITYSDK_OFFSET(0xB3467D0)
#define KDEGJHMJJOG_CTOR_OFFSET UNITYSDK_OFFSET(0xB346040)
#define KDEGJHMJJOG_EOJMLAIBIDP_OFFSET UNITYSDK_OFFSET(0xB346960)
#define KDEGJHMJJOG_FAKLBLNKDPK_OFFSET UNITYSDK_OFFSET(0xB3460A0)
#define KDEGJHMJJOG_FJMHPLLONKC_OFFSET UNITYSDK_OFFSET(0xB3469C0)
#define KDEGJHMJJOG_FOLDHBCAMNI_OFFSET UNITYSDK_OFFSET(0xB346310)
#define KDEGJHMJJOG_IMKAAECFDKA_OFFSET UNITYSDK_OFFSET(0xB346490)
#define KDEGJHMJJOG_JFILFJPJMPD_OFFSET UNITYSDK_OFFSET(0xB3463A0)
#define KDEGJHMJJOG_KANPMLIDMGB_OFFSET UNITYSDK_OFFSET(0xB346540)
#define KDEGJHMJJOG_OGGHLJFAAHI_OFFSET UNITYSDK_OFFSET(0xB346760)
#define KDEGJHMJJOG_PGHMOMGHJFA_OFFSET UNITYSDK_OFFSET(0xB3463F0)
#define KDEGJHMJJOG_PLFKPIDFFKE_OFFSET UNITYSDK_OFFSET(0xB3466F0)

inline static constexpr unsigned int KDEGJHMJJOG_TypeDefinitionIndex = 79049;

	class KDEGJHMJJOG : public ::System::Object
	{
	public:
		::HCOGFOGPKHI* IHPMLDMEHFO; // 0x10
		::LGGELBFHJIM* LBNAGLIGKIO; // 0x18
		static ::System::UInt32* StaticGet_GLIGCIABECB()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "KDEGJHMJJOG")->GetStaticField(0xB910);
		}

		::System::Void _ctor(::LGGELBFHJIM* a1, ::HCOGFOGPKHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LGGELBFHJIM*, ::HCOGFOGPKHI*))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDEGJHMJJOG_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::HIPNGPHHCJC*>* AHFKNHKBBDL()
		{
			return ((::System::Collections::Generic::List_1<::HIPNGPHHCJC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_AHFKNHKBBDL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* FAKLBLNKDPK()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_FAKLBLNKDPK_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* FOLDHBCAMNI()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_FOLDHBCAMNI_OFFSET))(this);
		}

		::System::UInt32 JFILFJPJMPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_JFILFJPJMPD_OFFSET))(this);
		}

		::System::Boolean PGHMOMGHJFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_PGHMOMGHJFA_OFFSET))(this);
		}

		::System::Boolean IMKAAECFDKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_IMKAAECFDKA_OFFSET))(this);
		}

		::System::Boolean KANPMLIDMGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_KANPMLIDMGB_OFFSET))(this);
		}

		::System::UInt32 AGOOGJKKBPP(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_AGOOGJKKBPP_OFFSET))(this, a1);
		}

		::System::UInt32 PLFKPIDFFKE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_PLFKPIDFFKE_OFFSET))(this);
		}

		::System::UInt32 OGGHLJFAAHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_OGGHLJFAAHI_OFFSET))(this);
		}

		::System::String* CFEAGDDGKLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_CFEAGDDGKLA_OFFSET))(this);
		}

		::System::UInt32 EOJMLAIBIDP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_EOJMLAIBIDP_OFFSET))(this);
		}

		::System::Boolean BGEHLILMOFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_BGEHLILMOFO_OFFSET))(this);
		}

		::RPG::Client::ActivityData* FJMHPLLONKC()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGJHMJJOG_FJMHPLLONKC_OFFSET))(this);
		}

	};
