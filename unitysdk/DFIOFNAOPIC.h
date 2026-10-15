#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueArcadeConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFIOFNAOPIC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD1A0F0)
#define DFIOFNAOPIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD1A6C0)
#define DFIOFNAOPIC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD1A260)
#define DFIOFNAOPIC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD19B60)
#define DFIOFNAOPIC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD19DF0)
#define DFIOFNAOPIC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD1A300)
#define DFIOFNAOPIC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD1A350)
#define DFIOFNAOPIC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD1A130)
#define DFIOFNAOPIC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD19D90)
#define DFIOFNAOPIC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD19F60)
#define DFIOFNAOPIC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD1A1C0)
#define DFIOFNAOPIC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD19AE0)

	class DFIOFNAOPIC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x4C100);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>**)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x4C108);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x4C110);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x11920);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x11921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueArcadeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueArcadeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueArcadeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueArcadeConfigRow*))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
