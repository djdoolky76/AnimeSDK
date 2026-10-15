#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPortalExpiredConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLCGDAHLPHF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEBE690)
#define HLCGDAHLPHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBEC60)
#define HLCGDAHLPHF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEBE800)
#define HLCGDAHLPHF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEBE100)
#define HLCGDAHLPHF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEBE390)
#define HLCGDAHLPHF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEBE8A0)
#define HLCGDAHLPHF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEBE8F0)
#define HLCGDAHLPHF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEBE6D0)
#define HLCGDAHLPHF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEBE330)
#define HLCGDAHLPHF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEBE500)
#define HLCGDAHLPHF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEBE760)
#define HLCGDAHLPHF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEBE080)

	class HLCGDAHLPHF : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x1ED60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x1ED68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>**)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x1ED70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x7120);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HLCGDAHLPHF")->GetStaticField(0x7121);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalExpiredConfigRow*>(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPortalExpiredConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPortalExpiredConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCGDAHLPHF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPortalExpiredConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPortalExpiredConfigRow*))((::PBYTE)hIl2Cpp + HLCGDAHLPHF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
