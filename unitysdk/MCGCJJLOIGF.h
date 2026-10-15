#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumItemSkillConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCGCJJLOIGF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D13B0A0)
#define MCGCJJLOIGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D13B620)
#define MCGCJJLOIGF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D13B210)
#define MCGCJJLOIGF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D13AB50)
#define MCGCJJLOIGF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D13ADE0)
#define MCGCJJLOIGF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D13B2B0)
#define MCGCJJLOIGF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D13B300)
#define MCGCJJLOIGF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D13B0E0)
#define MCGCJJLOIGF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D13AD80)
#define MCGCJJLOIGF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D13AF50)
#define MCGCJJLOIGF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D13B170)
#define MCGCJJLOIGF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D13AAD0)

	class MCGCJJLOIGF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MCGCJJLOIGF")->GetStaticField(0x47950);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumItemSkillConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumItemSkillConfigRow*>**)UnitySDK::FromName("", "MCGCJJLOIGF")->GetStaticField(0x47958);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MCGCJJLOIGF")->GetStaticField(0x47960);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MCGCJJLOIGF")->GetStaticField(0x11030);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MCGCJJLOIGF")->GetStaticField(0x11031);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGCJJLOIGF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumItemSkillConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumItemSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MCGCJJLOIGF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCGCJJLOIGF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumItemSkillConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumItemSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + MCGCJJLOIGF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MuseumItemSkillConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MuseumItemSkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MCGCJJLOIGF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCGCJJLOIGF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGCJJLOIGF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGCJJLOIGF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MCGCJJLOIGF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCGCJJLOIGF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MCGCJJLOIGF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MuseumItemSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumItemSkillConfigRow*))((::PBYTE)hIl2Cpp + MCGCJJLOIGF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
