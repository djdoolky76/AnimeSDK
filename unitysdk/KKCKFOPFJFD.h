#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TitanAtlasVoicePoolRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKCKFOPFJFD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D099730)
#define KKCKFOPFJFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09A280)
#define KKCKFOPFJFD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D099AD0)
#define KKCKFOPFJFD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D099770)
#define KKCKFOPFJFD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D099FC0)
#define KKCKFOPFJFD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D099B70)
#define KKCKFOPFJFD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D099BC0)
#define KKCKFOPFJFD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0999A0)
#define KKCKFOPFJFD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D099F60)
#define KKCKFOPFJFD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D09A0F0)
#define KKCKFOPFJFD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D099A30)
#define KKCKFOPFJFD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D099EE0)

inline static constexpr unsigned int KKCKFOPFJFD_TypeDefinitionIndex = 15303;

	class KKCKFOPFJFD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasVoicePoolRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasVoicePoolRow*>**)UnitySDK::FromName("", "KKCKFOPFJFD")->GetStaticField(0x35650);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KKCKFOPFJFD")->GetStaticField(0x35658);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KKCKFOPFJFD")->GetStaticField(0x35660);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KKCKFOPFJFD")->GetStaticField(0xB3C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KKCKFOPFJFD")->GetStaticField(0xB3C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKCKFOPFJFD_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKCKFOPFJFD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKCKFOPFJFD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKCKFOPFJFD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KKCKFOPFJFD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKCKFOPFJFD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KKCKFOPFJFD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TitanAtlasVoicePoolRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TitanAtlasVoicePoolRow*))((::PBYTE)hIl2Cpp + KKCKFOPFJFD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasVoicePoolRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasVoicePoolRow*>*(*)())((::PBYTE)hIl2Cpp + KKCKFOPFJFD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKCKFOPFJFD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasVoicePoolRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasVoicePoolRow*>(*)())((::PBYTE)hIl2Cpp + KKCKFOPFJFD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TitanAtlasVoicePoolRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TitanAtlasVoicePoolRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KKCKFOPFJFD_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
