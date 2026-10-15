#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2ReputationRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFFDIPNMCNN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCB4240)
#define AFFDIPNMCNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCB47C0)
#define AFFDIPNMCNN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCB43B0)
#define AFFDIPNMCNN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCB3D30)
#define AFFDIPNMCNN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCB3FC0)
#define AFFDIPNMCNN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCB4450)
#define AFFDIPNMCNN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCB44A0)
#define AFFDIPNMCNN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCB4280)
#define AFFDIPNMCNN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCB3F60)
#define AFFDIPNMCNN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCB40F0)
#define AFFDIPNMCNN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCB4310)
#define AFFDIPNMCNN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCB3CB0)

inline static constexpr unsigned int AFFDIPNMCNN_TypeDefinitionIndex = 11941;

	class AFFDIPNMCNN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AFFDIPNMCNN")->GetStaticField(0x37AC0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AFFDIPNMCNN")->GetStaticField(0x37AC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>**)UnitySDK::FromName("", "AFFDIPNMCNN")->GetStaticField(0x37AD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AFFDIPNMCNN")->GetStaticField(0xBDB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AFFDIPNMCNN")->GetStaticField(0xBDB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFFDIPNMCNN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>*(*)())((::PBYTE)hIl2Cpp + AFFDIPNMCNN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AFFDIPNMCNN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>(*)())((::PBYTE)hIl2Cpp + AFFDIPNMCNN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2ReputationRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2ReputationRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AFFDIPNMCNN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AFFDIPNMCNN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFFDIPNMCNN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFFDIPNMCNN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AFFDIPNMCNN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AFFDIPNMCNN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AFFDIPNMCNN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2ReputationRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2ReputationRow*))((::PBYTE)hIl2Cpp + AFFDIPNMCNN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
