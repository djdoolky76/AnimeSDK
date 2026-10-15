#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityAvatarDemoRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLELAIMEKLN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE63220)
#define GLELAIMEKLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE637A0)
#define GLELAIMEKLN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE63390)
#define GLELAIMEKLN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE62CD0)
#define GLELAIMEKLN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE62F60)
#define GLELAIMEKLN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE63430)
#define GLELAIMEKLN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE63480)
#define GLELAIMEKLN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE63260)
#define GLELAIMEKLN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE62F00)
#define GLELAIMEKLN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE630D0)
#define GLELAIMEKLN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE632F0)
#define GLELAIMEKLN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE62C50)

inline static constexpr unsigned int GLELAIMEKLN_TypeDefinitionIndex = 11228;

	class GLELAIMEKLN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDemoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDemoRow*>**)UnitySDK::FromName("", "GLELAIMEKLN")->GetStaticField(0x19080);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GLELAIMEKLN")->GetStaticField(0x19088);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GLELAIMEKLN")->GetStaticField(0x19090);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GLELAIMEKLN")->GetStaticField(0x5C60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GLELAIMEKLN")->GetStaticField(0x5C61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLELAIMEKLN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDemoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDemoRow*>*(*)())((::PBYTE)hIl2Cpp + GLELAIMEKLN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLELAIMEKLN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDemoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityAvatarDemoRow*>(*)())((::PBYTE)hIl2Cpp + GLELAIMEKLN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityAvatarDemoRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityAvatarDemoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GLELAIMEKLN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLELAIMEKLN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLELAIMEKLN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLELAIMEKLN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GLELAIMEKLN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLELAIMEKLN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GLELAIMEKLN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityAvatarDemoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityAvatarDemoRow*))((::PBYTE)hIl2Cpp + GLELAIMEKLN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
