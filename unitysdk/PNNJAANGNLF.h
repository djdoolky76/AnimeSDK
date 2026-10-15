#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSettleRankRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNNJAANGNLF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D312F90)
#define PNNJAANGNLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D313510)
#define PNNJAANGNLF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D313100)
#define PNNJAANGNLF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D312A40)
#define PNNJAANGNLF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D312CD0)
#define PNNJAANGNLF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D3131A0)
#define PNNJAANGNLF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D3131F0)
#define PNNJAANGNLF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D312FD0)
#define PNNJAANGNLF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D312C70)
#define PNNJAANGNLF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D312E00)
#define PNNJAANGNLF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D313060)
#define PNNJAANGNLF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D3129C0)

inline static constexpr unsigned int PNNJAANGNLF_TypeDefinitionIndex = 13434;

	class PNNJAANGNLF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PNNJAANGNLF")->GetStaticField(0x46BD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNNJAANGNLF")->GetStaticField(0x46BD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSettleRankRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSettleRankRow*>**)UnitySDK::FromName("", "PNNJAANGNLF")->GetStaticField(0x46BE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNNJAANGNLF")->GetStaticField(0x10DF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNNJAANGNLF")->GetStaticField(0x10DF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNNJAANGNLF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSettleRankRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSettleRankRow*>*(*)())((::PBYTE)hIl2Cpp + PNNJAANGNLF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNNJAANGNLF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSettleRankRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSettleRankRow*>(*)())((::PBYTE)hIl2Cpp + PNNJAANGNLF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSettleRankRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSettleRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNNJAANGNLF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNNJAANGNLF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNNJAANGNLF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNNJAANGNLF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNNJAANGNLF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNNJAANGNLF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNNJAANGNLF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSettleRankRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSettleRankRow*))((::PBYTE)hIl2Cpp + PNNJAANGNLF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
