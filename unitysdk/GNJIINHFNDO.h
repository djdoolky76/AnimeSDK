#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LPKHMDFGKFM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNJIINHFNDO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE6D810)
#define GNJIINHFNDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE6DDE0)
#define GNJIINHFNDO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE6D980)
#define GNJIINHFNDO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE6D280)
#define GNJIINHFNDO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE6D510)
#define GNJIINHFNDO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE6DA20)
#define GNJIINHFNDO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE6DA70)
#define GNJIINHFNDO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE6D850)
#define GNJIINHFNDO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE6D4B0)
#define GNJIINHFNDO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE6D680)
#define GNJIINHFNDO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE6D8E0)
#define GNJIINHFNDO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE6D200)

inline static constexpr unsigned int GNJIINHFNDO_TypeDefinitionIndex = 13968;

	class GNJIINHFNDO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GNJIINHFNDO")->GetStaticField(0x19EF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPKHMDFGKFM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPKHMDFGKFM*>**)UnitySDK::FromName("", "GNJIINHFNDO")->GetStaticField(0x19EF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GNJIINHFNDO")->GetStaticField(0x19F00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GNJIINHFNDO")->GetStaticField(0x5E20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GNJIINHFNDO")->GetStaticField(0x5E21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNJIINHFNDO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPKHMDFGKFM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPKHMDFGKFM*>*(*)())((::PBYTE)hIl2Cpp + GNJIINHFNDO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GNJIINHFNDO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LPKHMDFGKFM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LPKHMDFGKFM*>(*)())((::PBYTE)hIl2Cpp + GNJIINHFNDO_FPHGMAMDFHE_OFFSET))();
		}

		static ::LPKHMDFGKFM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LPKHMDFGKFM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GNJIINHFNDO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GNJIINHFNDO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNJIINHFNDO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNJIINHFNDO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GNJIINHFNDO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNJIINHFNDO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GNJIINHFNDO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LPKHMDFGKFM* a1)
		{
			return ((::System::Void(*)(::LPKHMDFGKFM*))((::PBYTE)hIl2Cpp + GNJIINHFNDO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
