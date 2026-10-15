#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBasicBonusConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIKPFLFOKBF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2134A0)
#define NIKPFLFOKBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D213A70)
#define NIKPFLFOKBF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D213610)
#define NIKPFLFOKBF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D212F10)
#define NIKPFLFOKBF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2131A0)
#define NIKPFLFOKBF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2136B0)
#define NIKPFLFOKBF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D213700)
#define NIKPFLFOKBF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2134E0)
#define NIKPFLFOKBF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D213140)
#define NIKPFLFOKBF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D213310)
#define NIKPFLFOKBF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D213570)
#define NIKPFLFOKBF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D212E90)

inline static constexpr unsigned int NIKPFLFOKBF_TypeDefinitionIndex = 13421;

	class NIKPFLFOKBF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>**)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0x2EC10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0x2EC18);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0x2EC20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0x9AC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0x9AC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBasicBonusConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightBasicBonusConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBasicBonusConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBasicBonusConfigRow*))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
