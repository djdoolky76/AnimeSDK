#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NIOHDNNONNN;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOJPLNHFNBF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D289460)
#define OOJPLNHFNBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D289A30)
#define OOJPLNHFNBF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2895D0)
#define OOJPLNHFNBF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D288ED0)
#define OOJPLNHFNBF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D289160)
#define OOJPLNHFNBF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D289670)
#define OOJPLNHFNBF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2896C0)
#define OOJPLNHFNBF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2894A0)
#define OOJPLNHFNBF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D289100)
#define OOJPLNHFNBF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2892D0)
#define OOJPLNHFNBF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D289530)
#define OOJPLNHFNBF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D288E50)

inline static constexpr unsigned int OOJPLNHFNBF_TypeDefinitionIndex = 13946;

	class OOJPLNHFNBF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0x4C2E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0x4C2E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NIOHDNNONNN*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NIOHDNNONNN*>**)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0x4C2F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0x116D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOJPLNHFNBF")->GetStaticField(0x116D1);
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
