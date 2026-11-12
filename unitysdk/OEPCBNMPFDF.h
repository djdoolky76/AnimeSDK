#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEPCBNMPFDF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E469F80)
#define OEPCBNMPFDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46A500)
#define OEPCBNMPFDF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E46A0F0)
#define OEPCBNMPFDF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E469A30)
#define OEPCBNMPFDF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E469CC0)
#define OEPCBNMPFDF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E46A190)
#define OEPCBNMPFDF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E46A1E0)
#define OEPCBNMPFDF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E469FC0)
#define OEPCBNMPFDF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E469C60)
#define OEPCBNMPFDF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E469E30)
#define OEPCBNMPFDF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E46A050)
#define OEPCBNMPFDF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E4699B0)

inline static constexpr unsigned int OEPCBNMPFDF_TypeDefinitionIndex = 13048;

	class OEPCBNMPFDF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>**)UnitySDK::FromName("", "OEPCBNMPFDF")->GetStaticField(0x4F450);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OEPCBNMPFDF")->GetStaticField(0x4F458);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEPCBNMPFDF")->GetStaticField(0x4F460);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OEPCBNMPFDF")->GetStaticField(0xFCE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OEPCBNMPFDF")->GetStaticField(0xFCE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEPCBNMPFDF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OEPCBNMPFDF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEPCBNMPFDF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>(*)())((::PBYTE)hIl2Cpp + OEPCBNMPFDF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChallengePeakConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengePeakConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OEPCBNMPFDF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEPCBNMPFDF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEPCBNMPFDF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEPCBNMPFDF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OEPCBNMPFDF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEPCBNMPFDF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OEPCBNMPFDF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChallengePeakConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengePeakConfigRow*))((::PBYTE)hIl2Cpp + OEPCBNMPFDF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
