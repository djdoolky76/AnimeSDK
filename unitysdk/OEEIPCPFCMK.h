#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class KAPJPNPIEBP;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEEIPCPFCMK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D25CAA0)
#define OEEIPCPFCMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D25D680)
#define OEEIPCPFCMK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D25CE40)
#define OEEIPCPFCMK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D25CAE0)
#define OEEIPCPFCMK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D25D380)
#define OEEIPCPFCMK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D25CEE0)
#define OEEIPCPFCMK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D25CF30)
#define OEEIPCPFCMK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D25CD10)
#define OEEIPCPFCMK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D25D320)
#define OEEIPCPFCMK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D25D4F0)
#define OEEIPCPFCMK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D25CDA0)
#define OEEIPCPFCMK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D25D2A0)

	class OEEIPCPFCMK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OEEIPCPFCMK")->GetStaticField(0x33360);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KAPJPNPIEBP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KAPJPNPIEBP*>**)UnitySDK::FromName("", "OEEIPCPFCMK")->GetStaticField(0x33368);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEEIPCPFCMK")->GetStaticField(0x33370);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OEEIPCPFCMK")->GetStaticField(0xAC40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OEEIPCPFCMK")->GetStaticField(0xAC41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEEIPCPFCMK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEEIPCPFCMK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEEIPCPFCMK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEEIPCPFCMK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OEEIPCPFCMK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEEIPCPFCMK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OEEIPCPFCMK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KAPJPNPIEBP* a1)
		{
			return ((::System::Void(*)(::KAPJPNPIEBP*))((::PBYTE)hIl2Cpp + OEEIPCPFCMK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KAPJPNPIEBP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KAPJPNPIEBP*>*(*)())((::PBYTE)hIl2Cpp + OEEIPCPFCMK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEEIPCPFCMK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KAPJPNPIEBP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KAPJPNPIEBP*>(*)())((::PBYTE)hIl2Cpp + OEEIPCPFCMK_FPHGMAMDFHE_OFFSET))();
		}

		static ::KAPJPNPIEBP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KAPJPNPIEBP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OEEIPCPFCMK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
