#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LCADLLHKAGE;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLIOBHAAONH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D233780)
#define NLIOBHAAONH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D233D00)
#define NLIOBHAAONH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2338F0)
#define NLIOBHAAONH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D233270)
#define NLIOBHAAONH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D233500)
#define NLIOBHAAONH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D233990)
#define NLIOBHAAONH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2339E0)
#define NLIOBHAAONH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2337C0)
#define NLIOBHAAONH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2334A0)
#define NLIOBHAAONH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D233630)
#define NLIOBHAAONH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D233850)
#define NLIOBHAAONH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2331F0)

	class NLIOBHAAONH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NLIOBHAAONH")->GetStaticField(0x30470);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NLIOBHAAONH")->GetStaticField(0x30478);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LCADLLHKAGE*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LCADLLHKAGE*>**)UnitySDK::FromName("", "NLIOBHAAONH")->GetStaticField(0x30480);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NLIOBHAAONH")->GetStaticField(0xA3A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NLIOBHAAONH")->GetStaticField(0xA3A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLIOBHAAONH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LCADLLHKAGE*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LCADLLHKAGE*>*(*)())((::PBYTE)hIl2Cpp + NLIOBHAAONH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLIOBHAAONH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LCADLLHKAGE*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LCADLLHKAGE*>(*)())((::PBYTE)hIl2Cpp + NLIOBHAAONH_FPHGMAMDFHE_OFFSET))();
		}

		static ::LCADLLHKAGE* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LCADLLHKAGE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLIOBHAAONH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLIOBHAAONH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLIOBHAAONH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLIOBHAAONH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NLIOBHAAONH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLIOBHAAONH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NLIOBHAAONH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LCADLLHKAGE* a1)
		{
			return ((::System::Void(*)(::LCADLLHKAGE*))((::PBYTE)hIl2Cpp + NLIOBHAAONH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
