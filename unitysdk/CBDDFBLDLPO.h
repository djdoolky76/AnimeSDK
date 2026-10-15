#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class OJNEALELKJB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBDDFBLDLPO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA01FF0)
#define CBDDFBLDLPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA025C0)
#define CBDDFBLDLPO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA02160)
#define CBDDFBLDLPO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA01A60)
#define CBDDFBLDLPO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA01CF0)
#define CBDDFBLDLPO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA02200)
#define CBDDFBLDLPO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA02250)
#define CBDDFBLDLPO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA02030)
#define CBDDFBLDLPO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA01C90)
#define CBDDFBLDLPO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA01E60)
#define CBDDFBLDLPO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA020C0)
#define CBDDFBLDLPO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA019E0)

	class CBDDFBLDLPO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBDDFBLDLPO")->GetStaticField(0x3B190);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CBDDFBLDLPO")->GetStaticField(0x3B198);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OJNEALELKJB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OJNEALELKJB*>**)UnitySDK::FromName("", "CBDDFBLDLPO")->GetStaticField(0x3B1A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CBDDFBLDLPO")->GetStaticField(0xC900);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CBDDFBLDLPO")->GetStaticField(0xC901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDDFBLDLPO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OJNEALELKJB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OJNEALELKJB*>*(*)())((::PBYTE)hIl2Cpp + CBDDFBLDLPO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBDDFBLDLPO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OJNEALELKJB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OJNEALELKJB*>(*)())((::PBYTE)hIl2Cpp + CBDDFBLDLPO_FPHGMAMDFHE_OFFSET))();
		}

		static ::OJNEALELKJB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::OJNEALELKJB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CBDDFBLDLPO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBDDFBLDLPO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDDFBLDLPO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDDFBLDLPO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CBDDFBLDLPO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CBDDFBLDLPO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CBDDFBLDLPO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::OJNEALELKJB* a1)
		{
			return ((::System::Void(*)(::OJNEALELKJB*))((::PBYTE)hIl2Cpp + CBDDFBLDLPO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
