#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumActivityQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPLNKMDODND_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE4A260)
#define GPLNKMDODND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE4A7E0)
#define GPLNKMDODND_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE4A3D0)
#define GPLNKMDODND_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE49D10)
#define GPLNKMDODND_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE49FA0)
#define GPLNKMDODND_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE4A470)
#define GPLNKMDODND_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE4A4C0)
#define GPLNKMDODND_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE4A2A0)
#define GPLNKMDODND_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE49F40)
#define GPLNKMDODND_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE4A0D0)
#define GPLNKMDODND_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE4A330)
#define GPLNKMDODND_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE49C90)

inline static constexpr unsigned int GPLNKMDODND_TypeDefinitionIndex = 14251;

	class GPLNKMDODND : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumActivityQuestConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumActivityQuestConfigRow*>**)UnitySDK::FromName("", "GPLNKMDODND")->GetStaticField(0x18390);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GPLNKMDODND")->GetStaticField(0x18398);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GPLNKMDODND")->GetStaticField(0x183A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GPLNKMDODND")->GetStaticField(0x52F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GPLNKMDODND")->GetStaticField(0x52F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPLNKMDODND_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumActivityQuestConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumActivityQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GPLNKMDODND_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPLNKMDODND_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumActivityQuestConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumActivityQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + GPLNKMDODND_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MuseumActivityQuestConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MuseumActivityQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GPLNKMDODND_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPLNKMDODND_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPLNKMDODND_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPLNKMDODND_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GPLNKMDODND_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPLNKMDODND_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GPLNKMDODND_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MuseumActivityQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + GPLNKMDODND_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
