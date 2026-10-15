#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicRoomRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKGOBDAAHPK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2F91C0)
#define PKGOBDAAHPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F9790)
#define PKGOBDAAHPK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2F9330)
#define PKGOBDAAHPK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2F8C30)
#define PKGOBDAAHPK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2F8EC0)
#define PKGOBDAAHPK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2F93D0)
#define PKGOBDAAHPK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2F9420)
#define PKGOBDAAHPK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2F9200)
#define PKGOBDAAHPK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2F8E60)
#define PKGOBDAAHPK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2F9030)
#define PKGOBDAAHPK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2F9290)
#define PKGOBDAAHPK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2F8BB0)

inline static constexpr unsigned int PKGOBDAAHPK_TypeDefinitionIndex = 14861;

	class PKGOBDAAHPK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>**)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0x44C10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0x44C18);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0x44C20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0x10590);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKGOBDAAHPK")->GetStaticField(0x10591);
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
