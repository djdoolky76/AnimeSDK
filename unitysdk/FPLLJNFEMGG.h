#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingSoldierLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPLLJNFEMGG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA3F5D0)
#define FPLLJNFEMGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3FBD0)
#define FPLLJNFEMGG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA3F740)
#define FPLLJNFEMGG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA3F000)
#define FPLLJNFEMGG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA3F290)
#define FPLLJNFEMGG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA3F7E0)
#define FPLLJNFEMGG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA3F830)
#define FPLLJNFEMGG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA3F610)
#define FPLLJNFEMGG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA3F230)
#define FPLLJNFEMGG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA3F400)
#define FPLLJNFEMGG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA3F6A0)
#define FPLLJNFEMGG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA3EF80)

inline static constexpr unsigned int FPLLJNFEMGG_TypeDefinitionIndex = 11074;

	class FPLLJNFEMGG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierLevelRow*>**)UnitySDK::FromName("", "FPLLJNFEMGG")->GetStaticField(0xB0D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FPLLJNFEMGG")->GetStaticField(0xB0D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FPLLJNFEMGG")->GetStaticField(0xB0E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FPLLJNFEMGG")->GetStaticField(0x14B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FPLLJNFEMGG")->GetStaticField(0x14B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPLLJNFEMGG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierLevelRow*>*(*)())((::PBYTE)hIl2Cpp + FPLLJNFEMGG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPLLJNFEMGG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierLevelRow*>(*)())((::PBYTE)hIl2Cpp + FPLLJNFEMGG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingSoldierLevelRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ChenLingSoldierLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FPLLJNFEMGG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FPLLJNFEMGG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPLLJNFEMGG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPLLJNFEMGG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FPLLJNFEMGG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPLLJNFEMGG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FPLLJNFEMGG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingSoldierLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingSoldierLevelRow*))((::PBYTE)hIl2Cpp + FPLLJNFEMGG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
