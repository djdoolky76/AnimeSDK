#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveChestLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EACNCHPAPOH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD2D8C0)
#define EACNCHPAPOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD2DE90)
#define EACNCHPAPOH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD2DA30)
#define EACNCHPAPOH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD2D330)
#define EACNCHPAPOH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD2D5C0)
#define EACNCHPAPOH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD2DAD0)
#define EACNCHPAPOH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD2DB20)
#define EACNCHPAPOH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD2D900)
#define EACNCHPAPOH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD2D560)
#define EACNCHPAPOH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD2D730)
#define EACNCHPAPOH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD2D990)
#define EACNCHPAPOH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD2D2B0)

inline static constexpr unsigned int EACNCHPAPOH_TypeDefinitionIndex = 11747;

	class EACNCHPAPOH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x4B5A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>**)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x4B5A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x4B5B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x11430);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EACNCHPAPOH")->GetStaticField(0x11431);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>*(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveChestLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveChestLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EACNCHPAPOH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EACNCHPAPOH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EACNCHPAPOH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EACNCHPAPOH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EACNCHPAPOH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveChestLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveChestLevelRow*))((::PBYTE)hIl2Cpp + EACNCHPAPOH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
