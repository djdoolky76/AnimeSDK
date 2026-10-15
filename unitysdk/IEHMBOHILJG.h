#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarBreakDamageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEHMBOHILJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEBCCA0)
#define IEHMBOHILJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBD220)
#define IEHMBOHILJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEBCE10)
#define IEHMBOHILJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEBC750)
#define IEHMBOHILJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEBC9E0)
#define IEHMBOHILJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEBCEB0)
#define IEHMBOHILJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEBCF00)
#define IEHMBOHILJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEBCCE0)
#define IEHMBOHILJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEBC980)
#define IEHMBOHILJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEBCB50)
#define IEHMBOHILJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEBCD70)
#define IEHMBOHILJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEBC6D0)

inline static constexpr unsigned int IEHMBOHILJG_TypeDefinitionIndex = 12759;

	class IEHMBOHILJG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>**)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x20640);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x20648);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x20650);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x73F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x73F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>*(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarBreakDamageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarBreakDamageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IEHMBOHILJG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IEHMBOHILJG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IEHMBOHILJG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IEHMBOHILJG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarBreakDamageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarBreakDamageRow*))((::PBYTE)hIl2Cpp + IEHMBOHILJG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
