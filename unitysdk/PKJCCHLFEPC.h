#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyMtCategoryScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKJCCHLFEPC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2CDB20)
#define PKJCCHLFEPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2CE770)
#define PKJCCHLFEPC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2CDEC0)
#define PKJCCHLFEPC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2CDB60)
#define PKJCCHLFEPC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2CE430)
#define PKJCCHLFEPC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2CDF60)
#define PKJCCHLFEPC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2CDFB0)
#define PKJCCHLFEPC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2CDD90)
#define PKJCCHLFEPC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2CE3D0)
#define PKJCCHLFEPC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2CE5A0)
#define PKJCCHLFEPC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2CDE20)
#define PKJCCHLFEPC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2CE350)

inline static constexpr unsigned int PKJCCHLFEPC_TypeDefinitionIndex = 15358;

	class PKJCCHLFEPC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PKJCCHLFEPC")->GetStaticField(0x51260);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>**)UnitySDK::FromName("", "PKJCCHLFEPC")->GetStaticField(0x51268);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PKJCCHLFEPC")->GetStaticField(0x51270);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PKJCCHLFEPC")->GetStaticField(0x12460);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKJCCHLFEPC")->GetStaticField(0x12461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKJCCHLFEPC_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PKJCCHLFEPC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKJCCHLFEPC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKJCCHLFEPC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PKJCCHLFEPC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKJCCHLFEPC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PKJCCHLFEPC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyMtCategoryScoreRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyMtCategoryScoreRow*))((::PBYTE)hIl2Cpp + PKJCCHLFEPC_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>*(*)())((::PBYTE)hIl2Cpp + PKJCCHLFEPC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PKJCCHLFEPC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>(*)())((::PBYTE)hIl2Cpp + PKJCCHLFEPC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyMtCategoryScoreRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::TrainPartyMtCategoryScoreRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PKJCCHLFEPC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};
