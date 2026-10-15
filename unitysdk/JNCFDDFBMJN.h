#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class ILIHEINIGFM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNCFDDFBMJN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D020940)
#define JNCFDDFBMJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D020F10)
#define JNCFDDFBMJN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D020AB0)
#define JNCFDDFBMJN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0203B0)
#define JNCFDDFBMJN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D020640)
#define JNCFDDFBMJN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D020B50)
#define JNCFDDFBMJN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D020BA0)
#define JNCFDDFBMJN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D020980)
#define JNCFDDFBMJN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0205E0)
#define JNCFDDFBMJN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0207B0)
#define JNCFDDFBMJN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D020A10)
#define JNCFDDFBMJN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D020330)

inline static constexpr unsigned int JNCFDDFBMJN_TypeDefinitionIndex = 11257;

	class JNCFDDFBMJN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ILIHEINIGFM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ILIHEINIGFM*>**)UnitySDK::FromName("", "JNCFDDFBMJN")->GetStaticField(0x2FA90);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JNCFDDFBMJN")->GetStaticField(0x2FA98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JNCFDDFBMJN")->GetStaticField(0x2FAA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JNCFDDFBMJN")->GetStaticField(0x9D80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JNCFDDFBMJN")->GetStaticField(0x9D81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNCFDDFBMJN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ILIHEINIGFM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ILIHEINIGFM*>*(*)())((::PBYTE)hIl2Cpp + JNCFDDFBMJN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNCFDDFBMJN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ILIHEINIGFM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ILIHEINIGFM*>(*)())((::PBYTE)hIl2Cpp + JNCFDDFBMJN_FPHGMAMDFHE_OFFSET))();
		}

		static ::ILIHEINIGFM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::ILIHEINIGFM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JNCFDDFBMJN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNCFDDFBMJN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNCFDDFBMJN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNCFDDFBMJN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JNCFDDFBMJN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNCFDDFBMJN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JNCFDDFBMJN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::ILIHEINIGFM* a1)
		{
			return ((::System::Void(*)(::ILIHEINIGFM*))((::PBYTE)hIl2Cpp + JNCFDDFBMJN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
