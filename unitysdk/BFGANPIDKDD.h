#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GrowthTargetTimeLimitTopRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFGANPIDKDD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D6722F0)
#define BFGANPIDKDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6728C0)
#define BFGANPIDKDD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D672460)
#define BFGANPIDKDD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D671D60)
#define BFGANPIDKDD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D671FF0)
#define BFGANPIDKDD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D672500)
#define BFGANPIDKDD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D672550)
#define BFGANPIDKDD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D672330)
#define BFGANPIDKDD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D671F90)
#define BFGANPIDKDD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D672160)
#define BFGANPIDKDD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D6723C0)
#define BFGANPIDKDD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D671CE0)

inline static constexpr unsigned int BFGANPIDKDD_TypeDefinitionIndex = 13370;

	class BFGANPIDKDD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BFGANPIDKDD")->GetStaticField(0x33CF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GrowthTargetTimeLimitTopRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GrowthTargetTimeLimitTopRow*>**)UnitySDK::FromName("", "BFGANPIDKDD")->GetStaticField(0x33CF8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BFGANPIDKDD")->GetStaticField(0x33D00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BFGANPIDKDD")->GetStaticField(0xAE20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BFGANPIDKDD")->GetStaticField(0xAE21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFGANPIDKDD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GrowthTargetTimeLimitTopRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GrowthTargetTimeLimitTopRow*>*(*)())((::PBYTE)hIl2Cpp + BFGANPIDKDD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFGANPIDKDD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GrowthTargetTimeLimitTopRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GrowthTargetTimeLimitTopRow*>(*)())((::PBYTE)hIl2Cpp + BFGANPIDKDD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GrowthTargetTimeLimitTopRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GrowthTargetTimeLimitTopRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BFGANPIDKDD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFGANPIDKDD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFGANPIDKDD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFGANPIDKDD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BFGANPIDKDD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BFGANPIDKDD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BFGANPIDKDD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GrowthTargetTimeLimitTopRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GrowthTargetTimeLimitTopRow*))((::PBYTE)hIl2Cpp + BFGANPIDKDD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
