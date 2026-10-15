#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MGHCFNBICOM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMLCFDHLLJH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF238D0)
#define IMLCFDHLLJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF23EA0)
#define IMLCFDHLLJH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF23A40)
#define IMLCFDHLLJH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF23340)
#define IMLCFDHLLJH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF235D0)
#define IMLCFDHLLJH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF23AE0)
#define IMLCFDHLLJH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF23B30)
#define IMLCFDHLLJH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF23910)
#define IMLCFDHLLJH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF23570)
#define IMLCFDHLLJH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF23740)
#define IMLCFDHLLJH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF239A0)
#define IMLCFDHLLJH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF232C0)

	class IMLCFDHLLJH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IMLCFDHLLJH")->GetStaticField(0x24580);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IMLCFDHLLJH")->GetStaticField(0x24588);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGHCFNBICOM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGHCFNBICOM*>**)UnitySDK::FromName("", "IMLCFDHLLJH")->GetStaticField(0x24590);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IMLCFDHLLJH")->GetStaticField(0x7FD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IMLCFDHLLJH")->GetStaticField(0x7FD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMLCFDHLLJH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGHCFNBICOM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGHCFNBICOM*>*(*)())((::PBYTE)hIl2Cpp + IMLCFDHLLJH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IMLCFDHLLJH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGHCFNBICOM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGHCFNBICOM*>(*)())((::PBYTE)hIl2Cpp + IMLCFDHLLJH_FPHGMAMDFHE_OFFSET))();
		}

		static ::MGHCFNBICOM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MGHCFNBICOM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IMLCFDHLLJH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IMLCFDHLLJH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMLCFDHLLJH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMLCFDHLLJH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IMLCFDHLLJH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IMLCFDHLLJH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IMLCFDHLLJH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MGHCFNBICOM* a1)
		{
			return ((::System::Void(*)(::MGHCFNBICOM*))((::PBYTE)hIl2Cpp + IMLCFDHLLJH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
