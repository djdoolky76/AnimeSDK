#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicContentDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IDIOBFHIJCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6B2B80)
#define IDIOBFHIJCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B3150)
#define IDIOBFHIJCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6B2CF0)
#define IDIOBFHIJCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6B25F0)
#define IDIOBFHIJCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6B2880)
#define IDIOBFHIJCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6B2D90)
#define IDIOBFHIJCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6B2DE0)
#define IDIOBFHIJCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6B2BC0)
#define IDIOBFHIJCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6B2820)
#define IDIOBFHIJCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6B29F0)
#define IDIOBFHIJCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6B2C50)
#define IDIOBFHIJCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6B2570)

inline static constexpr unsigned int IDIOBFHIJCG_TypeDefinitionIndex = 15051;

	class IDIOBFHIJCG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicContentDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicContentDisplayRow*>**)UnitySDK::FromName("", "IDIOBFHIJCG")->GetStaticField(0x1DB50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IDIOBFHIJCG")->GetStaticField(0x1DB58);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IDIOBFHIJCG")->GetStaticField(0x1DB60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IDIOBFHIJCG")->GetStaticField(0x65A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IDIOBFHIJCG")->GetStaticField(0x65A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDIOBFHIJCG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicContentDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicContentDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + IDIOBFHIJCG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IDIOBFHIJCG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicContentDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicContentDisplayRow*>(*)())((::PBYTE)hIl2Cpp + IDIOBFHIJCG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicContentDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicContentDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IDIOBFHIJCG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IDIOBFHIJCG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDIOBFHIJCG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDIOBFHIJCG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IDIOBFHIJCG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IDIOBFHIJCG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IDIOBFHIJCG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicContentDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicContentDisplayRow*))((::PBYTE)hIl2Cpp + IDIOBFHIJCG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
