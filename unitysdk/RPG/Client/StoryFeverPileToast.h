#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FeverTimeToastType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/TextID.h"
class JKJGLIPPEPP;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class StoryFeverToastHintItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_STORYFEVERPILETOAST_AJFKPILFKID_OFFSET UNITYSDK_OFFSET(0x1CCD89F0)
#define RPG_CLIENT_STORYFEVERPILETOAST_BPIBBOPOOFE_OFFSET UNITYSDK_OFFSET(0x1CCD87F0)
#define RPG_CLIENT_STORYFEVERPILETOAST_CMJNCKOBBAA_OFFSET UNITYSDK_OFFSET(0x1CCD8010)
#define RPG_CLIENT_STORYFEVERPILETOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD8E90)
#define RPG_CLIENT_STORYFEVERPILETOAST_GJBPOALGGMN_OFFSET UNITYSDK_OFFSET(0x1CCD8290)
#define RPG_CLIENT_STORYFEVERPILETOAST_IJDAMOPNGCJ_OFFSET UNITYSDK_OFFSET(0x1CCD7F60)
#define RPG_CLIENT_STORYFEVERPILETOAST_JEBFAOKFENE_OFFSET UNITYSDK_OFFSET(0x1CCD7E30)
#define RPG_CLIENT_STORYFEVERPILETOAST_KIFCPJNJLDA_OFFSET UNITYSDK_OFFSET(0x1CCD8A50)
#define RPG_CLIENT_STORYFEVERPILETOAST_LBDEIHAAJLO_OFFSET UNITYSDK_OFFSET(0x1CCD7540)
#define RPG_CLIENT_STORYFEVERPILETOAST_OAHAPABENKG_OFFSET UNITYSDK_OFFSET(0x1CCD86C0)
#define RPG_CLIENT_STORYFEVERPILETOAST_PILE_OFFSET UNITYSDK_OFFSET(0x1CCD7450)
#define RPG_CLIENT_STORYFEVERPILETOAST_START_OFFSET UNITYSDK_OFFSET(0x1CCD7680)
#define RPG_CLIENT_STORYFEVERPILETOAST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CCD7950)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryFeverPileToast_TypeDefinitionIndex = 74147;

	class StoryFeverPileToast : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 CPEPOHBPJHM; // 0x18
		::System::Boolean LLNDBHENPCB; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single NPAPMDBIHMD; // 0x20
		::System::Int32 BIEBKDACEPB; // 0x24
		::Il2CppArray<::RPG::Client::StoryFeverToastHintItem*>* GCIKKMGIPIO; // 0x28
		::System::Collections::Generic::Queue_1<::JKJGLIPPEPP*>* BMOFKPFDKIC; // 0x30
		// static const ::System::Object GKANCLPAJHA; // 0x0
		// static const ::System::Object BOKCCOIEPBL; // 0x0
		// static const ::System::Object OFEBCGJLJLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_CTOR_OFFSET))(this);
		}

		::System::Void Pile(::RPG::Client::TextID a1, ::System::String* a2, ::RPG::GameCore::FeverTimeToastType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*, ::RPG::GameCore::FeverTimeToastType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_PILE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_UPDATE_OFFSET))(this);
		}

		::System::Void JEBFAOKFENE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_JEBFAOKFENE_OFFSET))(this, a1);
		}

		::System::Void IJDAMOPNGCJ(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_IJDAMOPNGCJ_OFFSET))(this, a1, a2);
		}

		::System::Void CMJNCKOBBAA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_CMJNCKOBBAA_OFFSET))(this, a1);
		}

		::System::Void BPIBBOPOOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_BPIBBOPOOFE_OFFSET))(this);
		}

		::System::Void GJBPOALGGMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_GJBPOALGGMN_OFFSET))(this);
		}

		::System::Void LBDEIHAAJLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_LBDEIHAAJLO_OFFSET))(this);
		}

		::System::Void AJFKPILFKID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_AJFKPILFKID_OFFSET))(this);
		}

		::System::Boolean KIFCPJNJLDA(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_KIFCPJNJLDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAHAPABENKG(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERPILETOAST_OAHAPABENKG_OFFSET))(this, a1);
		}

	};
}
