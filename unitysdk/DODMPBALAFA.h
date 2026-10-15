#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterRandomPoolRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DODMPBALAFA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD534E0)
#define DODMPBALAFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD53AB0)
#define DODMPBALAFA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD53650)
#define DODMPBALAFA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD52F50)
#define DODMPBALAFA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD531E0)
#define DODMPBALAFA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD536F0)
#define DODMPBALAFA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD53740)
#define DODMPBALAFA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD53520)
#define DODMPBALAFA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD53180)
#define DODMPBALAFA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD53350)
#define DODMPBALAFA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD535B0)
#define DODMPBALAFA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD52ED0)

	class DODMPBALAFA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DODMPBALAFA")->GetStaticField(0x52130);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DODMPBALAFA")->GetStaticField(0x52138);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>**)UnitySDK::FromName("", "DODMPBALAFA")->GetStaticField(0x52140);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DODMPBALAFA")->GetStaticField(0x12410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DODMPBALAFA")->GetStaticField(0x12411);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DODMPBALAFA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>*(*)())((::PBYTE)hIl2Cpp + DODMPBALAFA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DODMPBALAFA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterRandomPoolRow*>(*)())((::PBYTE)hIl2Cpp + DODMPBALAFA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonsterRandomPoolRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterRandomPoolRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DODMPBALAFA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DODMPBALAFA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DODMPBALAFA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DODMPBALAFA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DODMPBALAFA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DODMPBALAFA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DODMPBALAFA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonsterRandomPoolRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterRandomPoolRow*))((::PBYTE)hIl2Cpp + DODMPBALAFA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
