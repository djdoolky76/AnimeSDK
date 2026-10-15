#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournRoomRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCFIDGFJCCN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0669C0)
#define KCFIDGFJCCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D066FC0)
#define KCFIDGFJCCN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D066B30)
#define KCFIDGFJCCN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0663E0)
#define KCFIDGFJCCN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D066670)
#define KCFIDGFJCCN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D066BD0)
#define KCFIDGFJCCN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D066C20)
#define KCFIDGFJCCN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D066A00)
#define KCFIDGFJCCN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D066610)
#define KCFIDGFJCCN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0667E0)
#define KCFIDGFJCCN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D066A90)
#define KCFIDGFJCCN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D066360)

inline static constexpr unsigned int KCFIDGFJCCN_TypeDefinitionIndex = 14963;

	class KCFIDGFJCCN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KCFIDGFJCCN")->GetStaticField(0x31BA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>**)UnitySDK::FromName("", "KCFIDGFJCCN")->GetStaticField(0x31BA8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KCFIDGFJCCN")->GetStaticField(0x31BB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KCFIDGFJCCN")->GetStaticField(0xA7B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KCFIDGFJCCN")->GetStaticField(0xA7B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCFIDGFJCCN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>*(*)())((::PBYTE)hIl2Cpp + KCFIDGFJCCN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KCFIDGFJCCN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>(*)())((::PBYTE)hIl2Cpp + KCFIDGFJCCN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournRoomRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::RogueTournMode a2)
		{
			return ((::RPG::GameCore::RogueTournRoomRow*(*)(::System::UInt32, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + KCFIDGFJCCN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KCFIDGFJCCN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCFIDGFJCCN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCFIDGFJCCN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KCFIDGFJCCN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KCFIDGFJCCN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KCFIDGFJCCN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournRoomRow*))((::PBYTE)hIl2Cpp + KCFIDGFJCCN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
