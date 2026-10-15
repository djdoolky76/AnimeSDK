#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TitanAtlasChangeInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPBLNGGIMFP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2EA7F0)
#define PPBLNGGIMFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2EB340)
#define PPBLNGGIMFP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2EAB90)
#define PPBLNGGIMFP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2EA830)
#define PPBLNGGIMFP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2EB080)
#define PPBLNGGIMFP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2EAC30)
#define PPBLNGGIMFP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2EAC80)
#define PPBLNGGIMFP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2EAA60)
#define PPBLNGGIMFP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2EB020)
#define PPBLNGGIMFP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2EB1B0)
#define PPBLNGGIMFP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2EAAF0)
#define PPBLNGGIMFP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2EAFA0)

inline static constexpr unsigned int PPBLNGGIMFP_TypeDefinitionIndex = 15304;

	class PPBLNGGIMFP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>**)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x527D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x527D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x527E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x12860);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PPBLNGGIMFP")->GetStaticField(0x12861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TitanAtlasChangeInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TitanAtlasChangeInfoRow*))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>*(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>(*)())((::PBYTE)hIl2Cpp + PPBLNGGIMFP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TitanAtlasChangeInfoRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TitanAtlasChangeInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPBLNGGIMFP_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
