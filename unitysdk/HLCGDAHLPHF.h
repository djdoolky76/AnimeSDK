#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPortalExpiredConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLCGDAHLPHF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE905D0)
#define HLCGDAHLPHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE90BA0)
#define HLCGDAHLPHF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE90740)
#define HLCGDAHLPHF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE90040)
#define HLCGDAHLPHF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE902D0)
#define HLCGDAHLPHF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE907E0)
#define HLCGDAHLPHF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE90830)
#define HLCGDAHLPHF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE90610)
#define HLCGDAHLPHF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE90270)
#define HLCGDAHLPHF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE90440)
#define HLCGDAHLPHF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE906A0)
#define HLCGDAHLPHF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE8FFC0)

inline static constexpr unsigned int HLCGDAHLPHF_TypeDefinitionIndex = 13654;

	class HLCGDAHLPHF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>**)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x1CC10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x1CC18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x1CC20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x6320);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x6321);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPortalExpiredConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPortalExpiredConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPortalExpiredConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPortalExpiredConfigRow*))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
