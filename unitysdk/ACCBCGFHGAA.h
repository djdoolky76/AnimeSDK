#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionMaterialWhiteRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACCBCGFHGAA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC73D80)
#define ACCBCGFHGAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC74960)
#define ACCBCGFHGAA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC74120)
#define ACCBCGFHGAA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC73DC0)
#define ACCBCGFHGAA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC74660)
#define ACCBCGFHGAA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC741C0)
#define ACCBCGFHGAA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC74210)
#define ACCBCGFHGAA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC73FF0)
#define ACCBCGFHGAA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC74600)
#define ACCBCGFHGAA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC747D0)
#define ACCBCGFHGAA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC74080)
#define ACCBCGFHGAA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC74580)

inline static constexpr unsigned int ACCBCGFHGAA_TypeDefinitionIndex = 15167;

	class ACCBCGFHGAA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0x3D820);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0x3D828);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>**)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0x3D830);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0xE760);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ACCBCGFHGAA")->GetStaticField(0xE761);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageInvasionMaterialWhiteRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInvasionMaterialWhiteRow*))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>*(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialWhiteRow*>(*)())((::PBYTE)hIl2Cpp + ACCBCGFHGAA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageInvasionMaterialWhiteRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionMaterialWhiteRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ACCBCGFHGAA_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
