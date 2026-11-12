#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightElationGoodsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPNLCFLFDHG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E054D70)
#define GPNLCFLFDHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E055340)
#define GPNLCFLFDHG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E054EE0)
#define GPNLCFLFDHG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0547E0)
#define GPNLCFLFDHG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E054A70)
#define GPNLCFLFDHG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E054F80)
#define GPNLCFLFDHG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E054FD0)
#define GPNLCFLFDHG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E054DB0)
#define GPNLCFLFDHG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E054A10)
#define GPNLCFLFDHG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E054BE0)
#define GPNLCFLFDHG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E054E40)
#define GPNLCFLFDHG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E054760)

inline static constexpr unsigned int GPNLCFLFDHG_TypeDefinitionIndex = 13854;

	class GPNLCFLFDHG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GPNLCFLFDHG")->GetStaticField(0x129B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationGoodsConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationGoodsConfigRow*>**)UnitySDK::FromName("", "GPNLCFLFDHG")->GetStaticField(0x129B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GPNLCFLFDHG")->GetStaticField(0x129C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GPNLCFLFDHG")->GetStaticField(0x3C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GPNLCFLFDHG")->GetStaticField(0x3C51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPNLCFLFDHG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationGoodsConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationGoodsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GPNLCFLFDHG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPNLCFLFDHG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationGoodsConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationGoodsConfigRow*>(*)())((::PBYTE)hIl2Cpp + GPNLCFLFDHG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightElationGoodsConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightElationGoodsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GPNLCFLFDHG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPNLCFLFDHG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPNLCFLFDHG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPNLCFLFDHG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GPNLCFLFDHG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPNLCFLFDHG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GPNLCFLFDHG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightElationGoodsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightElationGoodsConfigRow*))((::PBYTE)hIl2Cpp + GPNLCFLFDHG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
