#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCAdventureRoomRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHDNCDJEDEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC0E600)
#define CHDNCDJEDEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC0EBD0)
#define CHDNCDJEDEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC0E770)
#define CHDNCDJEDEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC0E070)
#define CHDNCDJEDEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC0E300)
#define CHDNCDJEDEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC0E810)
#define CHDNCDJEDEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC0E860)
#define CHDNCDJEDEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC0E640)
#define CHDNCDJEDEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC0E2A0)
#define CHDNCDJEDEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC0E470)
#define CHDNCDJEDEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC0E6D0)
#define CHDNCDJEDEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC0DFF0)

inline static constexpr unsigned int CHDNCDJEDEE_TypeDefinitionIndex = 14780;

	class CHDNCDJEDEE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CHDNCDJEDEE")->GetStaticField(0x42D90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>**)UnitySDK::FromName("", "CHDNCDJEDEE")->GetStaticField(0x42D98);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CHDNCDJEDEE")->GetStaticField(0x42DA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CHDNCDJEDEE")->GetStaticField(0x10120);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CHDNCDJEDEE")->GetStaticField(0x10121);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHDNCDJEDEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CHDNCDJEDEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHDNCDJEDEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>(*)())((::PBYTE)hIl2Cpp + CHDNCDJEDEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAdventureRoomRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCAdventureRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CHDNCDJEDEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHDNCDJEDEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHDNCDJEDEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHDNCDJEDEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CHDNCDJEDEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHDNCDJEDEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CHDNCDJEDEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDLCAdventureRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAdventureRoomRow*))((::PBYTE)hIl2Cpp + CHDNCDJEDEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
