#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesSkillTreeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNLMMMEALFL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE6F550)
#define GNLMMMEALFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE6FAD0)
#define GNLMMMEALFL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE6F6C0)
#define GNLMMMEALFL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE6F040)
#define GNLMMMEALFL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE6F2D0)
#define GNLMMMEALFL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE6F760)
#define GNLMMMEALFL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE6F7B0)
#define GNLMMMEALFL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE6F590)
#define GNLMMMEALFL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE6F270)
#define GNLMMMEALFL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE6F400)
#define GNLMMMEALFL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE6F620)
#define GNLMMMEALFL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE6EFC0)

	class GNLMMMEALFL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GNLMMMEALFL")->GetStaticField(0x1A360);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreeRow*>**)UnitySDK::FromName("", "GNLMMMEALFL")->GetStaticField(0x1A368);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GNLMMMEALFL")->GetStaticField(0x1A370);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GNLMMMEALFL")->GetStaticField(0x5F50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GNLMMMEALFL")->GetStaticField(0x5F51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLMMMEALFL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreeRow*>*(*)())((::PBYTE)hIl2Cpp + GNLMMMEALFL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GNLMMMEALFL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreeRow*>(*)())((::PBYTE)hIl2Cpp + GNLMMMEALFL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesSkillTreeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesSkillTreeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GNLMMMEALFL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GNLMMMEALFL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLMMMEALFL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLMMMEALFL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GNLMMMEALFL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLMMMEALFL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GNLMMMEALFL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesSkillTreeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesSkillTreeRow*))((::PBYTE)hIl2Cpp + GNLMMMEALFL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
