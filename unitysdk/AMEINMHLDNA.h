#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMEINMHLDNA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCDAEE0)
#define AMEINMHLDNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCDBA30)
#define AMEINMHLDNA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCDB280)
#define AMEINMHLDNA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCDAF20)
#define AMEINMHLDNA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCDB770)
#define AMEINMHLDNA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCDB320)
#define AMEINMHLDNA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCDB370)
#define AMEINMHLDNA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCDB150)
#define AMEINMHLDNA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCDB710)
#define AMEINMHLDNA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCDB8E0)
#define AMEINMHLDNA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCDB1E0)
#define AMEINMHLDNA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCDB690)

	class AMEINMHLDNA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>**)UnitySDK::FromName("", "AMEINMHLDNA")->GetStaticField(0x3B570);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AMEINMHLDNA")->GetStaticField(0x3B578);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AMEINMHLDNA")->GetStaticField(0x3B580);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AMEINMHLDNA")->GetStaticField(0xCA00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AMEINMHLDNA")->GetStaticField(0xCA01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEINMHLDNA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMEINMHLDNA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEINMHLDNA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEINMHLDNA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AMEINMHLDNA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AMEINMHLDNA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AMEINMHLDNA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageInvasionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInvasionConfigRow*))((::PBYTE)hIl2Cpp + AMEINMHLDNA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AMEINMHLDNA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AMEINMHLDNA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionConfigRow*>(*)())((::PBYTE)hIl2Cpp + AMEINMHLDNA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageInvasionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AMEINMHLDNA_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
