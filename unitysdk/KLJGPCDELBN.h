#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCSubStoryGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KLJGPCDELBN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D07A150)
#define KLJGPCDELBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D07A6D0)
#define KLJGPCDELBN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D07A2C0)
#define KLJGPCDELBN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D079C00)
#define KLJGPCDELBN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D079E90)
#define KLJGPCDELBN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D07A360)
#define KLJGPCDELBN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D07A3B0)
#define KLJGPCDELBN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D07A190)
#define KLJGPCDELBN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D079E30)
#define KLJGPCDELBN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D07A000)
#define KLJGPCDELBN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D07A220)
#define KLJGPCDELBN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D079B80)

inline static constexpr unsigned int KLJGPCDELBN_TypeDefinitionIndex = 14798;

	class KLJGPCDELBN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KLJGPCDELBN")->GetStaticField(0x35F20);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KLJGPCDELBN")->GetStaticField(0x35F28);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>**)UnitySDK::FromName("", "KLJGPCDELBN")->GetStaticField(0x35F30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KLJGPCDELBN")->GetStaticField(0xAE70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KLJGPCDELBN")->GetStaticField(0xAE71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJGPCDELBN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>*(*)())((::PBYTE)hIl2Cpp + KLJGPCDELBN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLJGPCDELBN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCSubStoryGroupRow*>(*)())((::PBYTE)hIl2Cpp + KLJGPCDELBN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCSubStoryGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCSubStoryGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KLJGPCDELBN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KLJGPCDELBN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJGPCDELBN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJGPCDELBN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLJGPCDELBN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLJGPCDELBN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KLJGPCDELBN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDLCSubStoryGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCSubStoryGroupRow*))((::PBYTE)hIl2Cpp + KLJGPCDELBN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
