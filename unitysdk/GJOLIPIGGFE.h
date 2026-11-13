#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomSlotConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GJOLIPIGGFE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E64D9E0)
#define GJOLIPIGGFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64DFB0)
#define GJOLIPIGGFE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E64DB50)
#define GJOLIPIGGFE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E64D450)
#define GJOLIPIGGFE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E64D6E0)
#define GJOLIPIGGFE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E64DBF0)
#define GJOLIPIGGFE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E64DC40)
#define GJOLIPIGGFE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E64DA20)
#define GJOLIPIGGFE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E64D680)
#define GJOLIPIGGFE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E64D850)
#define GJOLIPIGGFE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E64DAB0)
#define GJOLIPIGGFE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E64D3D0)

inline static constexpr unsigned int GJOLIPIGGFE_TypeDefinitionIndex = 14701;

	class GJOLIPIGGFE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>**)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x10BF0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x10BF8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x10C00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x3530);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GJOLIPIGGFE")->GetStaticField(0x3531);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerRoomSlotConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerRoomSlotConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJOLIPIGGFE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerRoomSlotConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerRoomSlotConfigRow*))((::PBYTE)hIl2Cpp + GJOLIPIGGFE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
