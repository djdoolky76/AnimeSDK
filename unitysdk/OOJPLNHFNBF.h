#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NIOHDNNONNN;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOJPLNHFNBF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2B7060)
#define OOJPLNHFNBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2B7630)
#define OOJPLNHFNBF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2B71D0)
#define OOJPLNHFNBF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2B6AD0)
#define OOJPLNHFNBF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2B6D60)
#define OOJPLNHFNBF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2B7270)
#define OOJPLNHFNBF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2B72C0)
#define OOJPLNHFNBF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2B70A0)
#define OOJPLNHFNBF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2B6D00)
#define OOJPLNHFNBF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2B6ED0)
#define OOJPLNHFNBF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2B7130)
#define OOJPLNHFNBF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2B6A50)

inline static constexpr unsigned int OOJPLNHFNBF_TypeDefinitionIndex = 13946;

	class OOJPLNHFNBF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NIOHDNNONNN*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NIOHDNNONNN*>**)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0x3CD10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0x3CD18);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0x3CD20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0xD0A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0xD0A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOJPLNHFNBF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NIOHDNNONNN*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NIOHDNNONNN*>*(*)())((::PBYTE)hIl2Cpp + OOJPLNHFNBF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOJPLNHFNBF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NIOHDNNONNN*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NIOHDNNONNN*>(*)())((::PBYTE)hIl2Cpp + OOJPLNHFNBF_FPHGMAMDFHE_OFFSET))();
		}

		static ::NIOHDNNONNN* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NIOHDNNONNN*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OOJPLNHFNBF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOJPLNHFNBF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOJPLNHFNBF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOJPLNHFNBF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OOJPLNHFNBF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOJPLNHFNBF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OOJPLNHFNBF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NIOHDNNONNN* a1)
		{
			return ((::System::Void(*)(::NIOHDNNONNN*))((::PBYTE)hIl2Cpp + OOJPLNHFNBF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
