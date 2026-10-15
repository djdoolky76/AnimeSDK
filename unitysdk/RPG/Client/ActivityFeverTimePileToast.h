#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/TextID.h"
class HMLFAPGFDLB;
namespace RPG::Client { class ActivityFeverTimeToastHintItem; }
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_AJFKPILFKID_OFFSET UNITYSDK_OFFSET(0xC3F3760)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_BPIBBOPOOFE_OFFSET UNITYSDK_OFFSET(0xC3F3560)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_CMJNCKOBBAA_OFFSET UNITYSDK_OFFSET(0xC3F2D80)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_CTOR_OFFSET UNITYSDK_OFFSET(0xC3F3BF0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_GJBPOALGGMN_OFFSET UNITYSDK_OFFSET(0xC3F3000)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_IJDAMOPNGCJ_OFFSET UNITYSDK_OFFSET(0xC3F2CD0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_JEBFAOKFENE_OFFSET UNITYSDK_OFFSET(0xC3F2BA0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_KIFCPJNJLDA_OFFSET UNITYSDK_OFFSET(0xC3F37C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_LBDEIHAAJLO_OFFSET UNITYSDK_OFFSET(0xC3F2300)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_OAHAPABENKG_OFFSET UNITYSDK_OFFSET(0xC3F3430)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_PILE_OFFSET UNITYSDK_OFFSET(0xC3F2210)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_START_OFFSET UNITYSDK_OFFSET(0xC3F23F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_UPDATE_OFFSET UNITYSDK_OFFSET(0xC3F26C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimePileToast_TypeDefinitionIndex = 71378;

	class ActivityFeverTimePileToast : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 CPEPOHBPJHM; // 0x18
		::System::Boolean LLNDBHENPCB; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single NPAPMDBIHMD; // 0x20
		::System::Int32 BIEBKDACEPB; // 0x24
		::Il2CppArray<::RPG::Client::ActivityFeverTimeToastHintItem*>* GCIKKMGIPIO; // 0x28
		::System::Collections::Generic::Queue_1<::HMLFAPGFDLB*>* BMOFKPFDKIC; // 0x30
		// static const ::System::Object GKANCLPAJHA; // 0x0
		// static const ::System::Object BOKCCOIEPBL; // 0x0
		// static const ::System::Object OFEBCGJLJLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_CTOR_OFFSET))(this);
		}

		::System::Void Pile(::RPG::Client::TextID a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_PILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_UPDATE_OFFSET))(this);
		}

		::System::Void JEBFAOKFENE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_JEBFAOKFENE_OFFSET))(this, a1);
		}

		::System::Void IJDAMOPNGCJ(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_IJDAMOPNGCJ_OFFSET))(this, a1, a2);
		}

		::System::Void CMJNCKOBBAA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_CMJNCKOBBAA_OFFSET))(this, a1);
		}

		::System::Void BPIBBOPOOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_BPIBBOPOOFE_OFFSET))(this);
		}

		::System::Void GJBPOALGGMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_GJBPOALGGMN_OFFSET))(this);
		}

		::System::Void LBDEIHAAJLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_LBDEIHAAJLO_OFFSET))(this);
		}

		::System::Void AJFKPILFKID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_AJFKPILFKID_OFFSET))(this);
		}

		::System::Boolean KIFCPJNJLDA(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_KIFCPJNJLDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAHAPABENKG(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEPILETOAST_OAHAPABENKG_OFFSET))(this, a1);
		}

	};
}
