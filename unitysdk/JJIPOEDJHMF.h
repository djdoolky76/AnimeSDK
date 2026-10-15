#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AFNDEIGJLAM;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJIPOEDJHMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D03AA80)
#define JJIPOEDJHMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D03B000)
#define JJIPOEDJHMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D03ABF0)
#define JJIPOEDJHMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D03A570)
#define JJIPOEDJHMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D03A800)
#define JJIPOEDJHMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D03AC90)
#define JJIPOEDJHMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D03ACE0)
#define JJIPOEDJHMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D03AAC0)
#define JJIPOEDJHMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D03A7A0)
#define JJIPOEDJHMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D03A930)
#define JJIPOEDJHMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D03AB50)
#define JJIPOEDJHMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D03A4F0)

	class JJIPOEDJHMF : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JJIPOEDJHMF")->GetStaticField(0x2ECE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFNDEIGJLAM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFNDEIGJLAM*>**)UnitySDK::FromName("", "JJIPOEDJHMF")->GetStaticField(0x2ECE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJIPOEDJHMF")->GetStaticField(0x2ECF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJIPOEDJHMF")->GetStaticField(0x9B40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJIPOEDJHMF")->GetStaticField(0x9B41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJIPOEDJHMF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFNDEIGJLAM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFNDEIGJLAM*>*(*)())((::PBYTE)hIl2Cpp + JJIPOEDJHMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJIPOEDJHMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AFNDEIGJLAM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AFNDEIGJLAM*>(*)())((::PBYTE)hIl2Cpp + JJIPOEDJHMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::AFNDEIGJLAM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::AFNDEIGJLAM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JJIPOEDJHMF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJIPOEDJHMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJIPOEDJHMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJIPOEDJHMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JJIPOEDJHMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJIPOEDJHMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JJIPOEDJHMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AFNDEIGJLAM* a1)
		{
			return ((::System::Void(*)(::AFNDEIGJLAM*))((::PBYTE)hIl2Cpp + JJIPOEDJHMF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
