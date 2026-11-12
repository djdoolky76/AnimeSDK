#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGiftSenderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPGGCFDCOFA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2BD4C0)
#define KPGGCFDCOFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BDA90)
#define KPGGCFDCOFA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E2BD630)
#define KPGGCFDCOFA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E2BCF30)
#define KPGGCFDCOFA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E2BD1C0)
#define KPGGCFDCOFA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E2BD6D0)
#define KPGGCFDCOFA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E2BD720)
#define KPGGCFDCOFA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E2BD500)
#define KPGGCFDCOFA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E2BD160)
#define KPGGCFDCOFA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E2BD330)
#define KPGGCFDCOFA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2BD590)
#define KPGGCFDCOFA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2BCEB0)

inline static constexpr unsigned int KPGGCFDCOFA_TypeDefinitionIndex = 11864;

	class KPGGCFDCOFA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KPGGCFDCOFA")->GetStaticField(0x31570);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>**)UnitySDK::FromName("", "KPGGCFDCOFA")->GetStaticField(0x31578);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPGGCFDCOFA")->GetStaticField(0x31580);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPGGCFDCOFA")->GetStaticField(0xA730);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPGGCFDCOFA")->GetStaticField(0xA731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPGGCFDCOFA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>*(*)())((::PBYTE)hIl2Cpp + KPGGCFDCOFA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPGGCFDCOFA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftSenderRow*>(*)())((::PBYTE)hIl2Cpp + KPGGCFDCOFA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveGiftSenderRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveGiftSenderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPGGCFDCOFA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPGGCFDCOFA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPGGCFDCOFA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPGGCFDCOFA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPGGCFDCOFA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPGGCFDCOFA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPGGCFDCOFA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveGiftSenderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveGiftSenderRow*))((::PBYTE)hIl2Cpp + KPGGCFDCOFA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
