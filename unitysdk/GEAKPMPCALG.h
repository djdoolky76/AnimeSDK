#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryAtlasRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define GEAKPMPCALG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE32900)
#define GEAKPMPCALG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE32F10)
#define GEAKPMPCALG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE32A70)
#define GEAKPMPCALG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE323A0)
#define GEAKPMPCALG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE32630)
#define GEAKPMPCALG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE32B10)
#define GEAKPMPCALG_IKBMBPKEFLD_OFFSET UNITYSDK_OFFSET(0x1CE32EC0)
#define GEAKPMPCALG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE32B60)
#define GEAKPMPCALG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE32940)
#define GEAKPMPCALG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE325D0)
#define GEAKPMPCALG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE32760)
#define GEAKPMPCALG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE329D0)
#define GEAKPMPCALG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE32320)

inline static constexpr unsigned int GEAKPMPCALG_TypeDefinitionIndex = 12688;

	class GEAKPMPCALG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0x16CD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>**)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0x16CD8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0x16CE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0x55E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GEAKPMPCALG")->GetStaticField(0x55E1);
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
