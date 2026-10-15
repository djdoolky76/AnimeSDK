#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAvatarRarityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHPCIPNKIHA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDC6A10)
#define FHPCIPNKIHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDC6FE0)
#define FHPCIPNKIHA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDC6B80)
#define FHPCIPNKIHA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDC6480)
#define FHPCIPNKIHA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDC6710)
#define FHPCIPNKIHA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDC6C20)
#define FHPCIPNKIHA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDC6C70)
#define FHPCIPNKIHA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDC6A50)
#define FHPCIPNKIHA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDC66B0)
#define FHPCIPNKIHA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDC6880)
#define FHPCIPNKIHA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDC6AE0)
#define FHPCIPNKIHA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDC6400)

inline static constexpr unsigned int FHPCIPNKIHA_TypeDefinitionIndex = 11723;

	class FHPCIPNKIHA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>**)UnitySDK::FromName("", "FHPCIPNKIHA")->GetStaticField(0x11A20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FHPCIPNKIHA")->GetStaticField(0x11A28);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FHPCIPNKIHA")->GetStaticField(0x11A30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FHPCIPNKIHA")->GetStaticField(0x39B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FHPCIPNKIHA")->GetStaticField(0x39B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHPCIPNKIHA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>*(*)())((::PBYTE)hIl2Cpp + FHPCIPNKIHA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FHPCIPNKIHA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>(*)())((::PBYTE)hIl2Cpp + FHPCIPNKIHA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveAvatarRarityRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveAvatarRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FHPCIPNKIHA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FHPCIPNKIHA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHPCIPNKIHA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHPCIPNKIHA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FHPCIPNKIHA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FHPCIPNKIHA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FHPCIPNKIHA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveAvatarRarityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveAvatarRarityRow*))((::PBYTE)hIl2Cpp + FHPCIPNKIHA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
