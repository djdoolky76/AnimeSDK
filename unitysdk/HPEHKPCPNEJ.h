#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureRoomRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPEHKPCPNEJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CED13A0)
#define HPEHKPCPNEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED1970)
#define HPEHKPCPNEJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CED1510)
#define HPEHKPCPNEJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CED0E10)
#define HPEHKPCPNEJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CED10A0)
#define HPEHKPCPNEJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CED15B0)
#define HPEHKPCPNEJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CED1600)
#define HPEHKPCPNEJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CED13E0)
#define HPEHKPCPNEJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CED1040)
#define HPEHKPCPNEJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CED1210)
#define HPEHKPCPNEJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CED1470)
#define HPEHKPCPNEJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CED0D90)

	class HPEHKPCPNEJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>**)UnitySDK::FromName("", "HPEHKPCPNEJ")->GetStaticField(0x20340);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HPEHKPCPNEJ")->GetStaticField(0x20348);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HPEHKPCPNEJ")->GetStaticField(0x20350);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HPEHKPCPNEJ")->GetStaticField(0x7590);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HPEHKPCPNEJ")->GetStaticField(0x7591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>*(*)())((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>(*)())((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueAdventureRoomRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueAdventureRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueAdventureRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueAdventureRoomRow*))((::PBYTE)hIl2Cpp + HPEHKPCPNEJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
