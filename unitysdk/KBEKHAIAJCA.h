#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingPartnerGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBEKHAIAJCA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E24FB60)
#define KBEKHAIAJCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E250130)
#define KBEKHAIAJCA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E24FCD0)
#define KBEKHAIAJCA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E24F5D0)
#define KBEKHAIAJCA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E24F860)
#define KBEKHAIAJCA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E24FD70)
#define KBEKHAIAJCA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E24FDC0)
#define KBEKHAIAJCA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E24FBA0)
#define KBEKHAIAJCA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E24F800)
#define KBEKHAIAJCA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E24F9D0)
#define KBEKHAIAJCA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E24FC30)
#define KBEKHAIAJCA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E24F550)

inline static constexpr unsigned int KBEKHAIAJCA_TypeDefinitionIndex = 12509;

	class KBEKHAIAJCA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KBEKHAIAJCA")->GetStaticField(0x2A340);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KBEKHAIAJCA")->GetStaticField(0x2A348);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerGroupRow*>**)UnitySDK::FromName("", "KBEKHAIAJCA")->GetStaticField(0x2A350);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KBEKHAIAJCA")->GetStaticField(0x8810);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KBEKHAIAJCA")->GetStaticField(0x8811);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEKHAIAJCA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerGroupRow*>*(*)())((::PBYTE)hIl2Cpp + KBEKHAIAJCA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBEKHAIAJCA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingPartnerGroupRow*>(*)())((::PBYTE)hIl2Cpp + KBEKHAIAJCA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingPartnerGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingPartnerGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KBEKHAIAJCA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBEKHAIAJCA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEKHAIAJCA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBEKHAIAJCA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KBEKHAIAJCA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBEKHAIAJCA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KBEKHAIAJCA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingPartnerGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingPartnerGroupRow*))((::PBYTE)hIl2Cpp + KBEKHAIAJCA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
