#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraEvaluationRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FENKCLAJNPD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFBCDB0)
#define FENKCLAJNPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBD330)
#define FENKCLAJNPD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFBCF20)
#define FENKCLAJNPD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFBC860)
#define FENKCLAJNPD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFBCAF0)
#define FENKCLAJNPD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFBCFC0)
#define FENKCLAJNPD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFBD010)
#define FENKCLAJNPD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFBCDF0)
#define FENKCLAJNPD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFBCA90)
#define FENKCLAJNPD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFBCC20)
#define FENKCLAJNPD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFBCE80)
#define FENKCLAJNPD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFBC7E0)

inline static constexpr unsigned int FENKCLAJNPD_TypeDefinitionIndex = 13096;

	class FENKCLAJNPD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FENKCLAJNPD")->GetStaticField(0x420A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationRow*>**)UnitySDK::FromName("", "FENKCLAJNPD")->GetStaticField(0x420A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FENKCLAJNPD")->GetStaticField(0x420B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FENKCLAJNPD")->GetStaticField(0xE0B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FENKCLAJNPD")->GetStaticField(0xE0B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FENKCLAJNPD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationRow*>*(*)())((::PBYTE)hIl2Cpp + FENKCLAJNPD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FENKCLAJNPD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraEvaluationRow*>(*)())((::PBYTE)hIl2Cpp + FENKCLAJNPD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraEvaluationRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraEvaluationRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FENKCLAJNPD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FENKCLAJNPD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FENKCLAJNPD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FENKCLAJNPD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FENKCLAJNPD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FENKCLAJNPD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FENKCLAJNPD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraEvaluationRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraEvaluationRow*))((::PBYTE)hIl2Cpp + FENKCLAJNPD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
