#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKGOBDAAHPK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E506150)
#define PKGOBDAAHPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E506720)
#define PKGOBDAAHPK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E5062C0)
#define PKGOBDAAHPK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E505BC0)
#define PKGOBDAAHPK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E505E50)
#define PKGOBDAAHPK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E506360)
#define PKGOBDAAHPK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E5063B0)
#define PKGOBDAAHPK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E506190)
#define PKGOBDAAHPK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E505DF0)
#define PKGOBDAAHPK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E505FC0)
#define PKGOBDAAHPK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E506220)
#define PKGOBDAAHPK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E505B40)

inline static constexpr unsigned int PKGOBDAAHPK_TypeDefinitionIndex = 15017;

	class PKGOBDAAHPK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>**)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0x39840);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0x39848);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0x39850);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0xCA30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0xCA31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKGOBDAAHPK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>*(*)())((::PBYTE)hIl2Cpp + PKGOBDAAHPK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PKGOBDAAHPK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>(*)())((::PBYTE)hIl2Cpp + PKGOBDAAHPK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicRoomRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PKGOBDAAHPK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PKGOBDAAHPK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKGOBDAAHPK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKGOBDAAHPK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PKGOBDAAHPK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKGOBDAAHPK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PKGOBDAAHPK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicRoomRow*))((::PBYTE)hIl2Cpp + PKGOBDAAHPK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
