#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourBGMConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJAIDLMICKL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F196610)
#define BJAIDLMICKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F196BE0)
#define BJAIDLMICKL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F196780)
#define BJAIDLMICKL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F196080)
#define BJAIDLMICKL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F196310)
#define BJAIDLMICKL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F196820)
#define BJAIDLMICKL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F196870)
#define BJAIDLMICKL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F196650)
#define BJAIDLMICKL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F1962B0)
#define BJAIDLMICKL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F196480)
#define BJAIDLMICKL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F1966E0)
#define BJAIDLMICKL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F196000)

inline static constexpr unsigned int BJAIDLMICKL_TypeDefinitionIndex = 12172;

	class BJAIDLMICKL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BJAIDLMICKL")->GetStaticField(0x48F70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourBGMConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourBGMConfigRow*>**)UnitySDK::FromName("", "BJAIDLMICKL")->GetStaticField(0x48F78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BJAIDLMICKL")->GetStaticField(0x48F80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BJAIDLMICKL")->GetStaticField(0xE220);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BJAIDLMICKL")->GetStaticField(0xE221);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJAIDLMICKL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourBGMConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourBGMConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BJAIDLMICKL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJAIDLMICKL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourBGMConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourBGMConfigRow*>(*)())((::PBYTE)hIl2Cpp + BJAIDLMICKL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourBGMConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourBGMConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BJAIDLMICKL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BJAIDLMICKL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJAIDLMICKL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJAIDLMICKL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BJAIDLMICKL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BJAIDLMICKL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BJAIDLMICKL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourBGMConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourBGMConfigRow*))((::PBYTE)hIl2Cpp + BJAIDLMICKL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
