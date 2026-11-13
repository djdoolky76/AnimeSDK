#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomSubAreaConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCCDFADFHEO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E434CA0)
#define FCCDFADFHEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E435270)
#define FCCDFADFHEO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E434E10)
#define FCCDFADFHEO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E434710)
#define FCCDFADFHEO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E4349A0)
#define FCCDFADFHEO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E434EB0)
#define FCCDFADFHEO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E434F00)
#define FCCDFADFHEO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E434CE0)
#define FCCDFADFHEO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E434940)
#define FCCDFADFHEO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E434B10)
#define FCCDFADFHEO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E434D70)
#define FCCDFADFHEO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E434690)

inline static constexpr unsigned int FCCDFADFHEO_TypeDefinitionIndex = 14705;

	class FCCDFADFHEO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0x51460);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>**)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0x51468);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0x51470);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0x11890);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FCCDFADFHEO")->GetStaticField(0x11891);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*>(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerRoomSubAreaConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerRoomSubAreaConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FCCDFADFHEO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCCDFADFHEO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FCCDFADFHEO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCCDFADFHEO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FCCDFADFHEO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerRoomSubAreaConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerRoomSubAreaConfigRow*))((::PBYTE)hIl2Cpp + FCCDFADFHEO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
