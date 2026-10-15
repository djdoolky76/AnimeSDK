#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHLFDPNDGNL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2BD0F0)
#define PHLFDPNDGNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BD6C0)
#define PHLFDPNDGNL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2BD260)
#define PHLFDPNDGNL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2BCB60)
#define PHLFDPNDGNL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2BCDF0)
#define PHLFDPNDGNL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2BD300)
#define PHLFDPNDGNL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2BD350)
#define PHLFDPNDGNL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2BD130)
#define PHLFDPNDGNL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2BCD90)
#define PHLFDPNDGNL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2BCF60)
#define PHLFDPNDGNL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2BD1C0)
#define PHLFDPNDGNL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2BCAE0)

inline static constexpr unsigned int PHLFDPNDGNL_TypeDefinitionIndex = 12425;

	class PHLFDPNDGNL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PHLFDPNDGNL")->GetStaticField(0x50710);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>**)UnitySDK::FromName("", "PHLFDPNDGNL")->GetStaticField(0x50718);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHLFDPNDGNL")->GetStaticField(0x50720);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHLFDPNDGNL")->GetStaticField(0x121D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHLFDPNDGNL")->GetStaticField(0x121D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHLFDPNDGNL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>*(*)())((::PBYTE)hIl2Cpp + PHLFDPNDGNL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHLFDPNDGNL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEffectRow*>(*)())((::PBYTE)hIl2Cpp + PHLFDPNDGNL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHLFDPNDGNL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHLFDPNDGNL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHLFDPNDGNL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHLFDPNDGNL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHLFDPNDGNL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHLFDPNDGNL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHLFDPNDGNL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + PHLFDPNDGNL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
