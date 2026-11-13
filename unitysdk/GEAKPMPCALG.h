#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define GEAKPMPCALG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E626230)
#define GEAKPMPCALG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E626840)
#define GEAKPMPCALG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6263A0)
#define GEAKPMPCALG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E625E60)
#define GEAKPMPCALG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E625D30)
#define GEAKPMPCALG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E626440)
#define GEAKPMPCALG_IKBMBPKEFLD_OFFSET UNITYSDK_OFFSET(0x1E6267F0)
#define GEAKPMPCALG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E626490)
#define GEAKPMPCALG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E626270)
#define GEAKPMPCALG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E625CD0)
#define GEAKPMPCALG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E626090)
#define GEAKPMPCALG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E626300)
#define GEAKPMPCALG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA55F00)

inline static constexpr unsigned int GEAKPMPCALG_TypeDefinitionIndex = 12755;

	class GEAKPMPCALG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0xBFE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0xBFE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>**)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0xBFF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0x1810);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0x1811);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEAKPMPCALG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + GEAKPMPCALG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GEAKPMPCALG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>(*)())((::PBYTE)hIl2Cpp + GEAKPMPCALG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StoryAtlasRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::StoryAtlasRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GEAKPMPCALG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GEAKPMPCALG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEAKPMPCALG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEAKPMPCALG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GEAKPMPCALG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEAKPMPCALG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GEAKPMPCALG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StoryAtlasRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StoryAtlasRow*))((::PBYTE)hIl2Cpp + GEAKPMPCALG_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::StoryAtlasRow*>* IKBMBPKEFLD(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::StoryAtlasRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GEAKPMPCALG_IKBMBPKEFLD_OFFSET))(a1);
		}

	};
