#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NKPKLBAACHC;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JENHGDIBJMC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D020810)
#define JENHGDIBJMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D020E10)
#define JENHGDIBJMC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D020980)
#define JENHGDIBJMC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D020240)
#define JENHGDIBJMC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0204D0)
#define JENHGDIBJMC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D020A20)
#define JENHGDIBJMC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D020A70)
#define JENHGDIBJMC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D020850)
#define JENHGDIBJMC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D020470)
#define JENHGDIBJMC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D020640)
#define JENHGDIBJMC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0208E0)
#define JENHGDIBJMC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0201C0)

	class JENHGDIBJMC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JENHGDIBJMC")->GetStaticField(0x2D350);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JENHGDIBJMC")->GetStaticField(0x2D358);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKPKLBAACHC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKPKLBAACHC*>**)UnitySDK::FromName("", "JENHGDIBJMC")->GetStaticField(0x2D360);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JENHGDIBJMC")->GetStaticField(0x9370);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JENHGDIBJMC")->GetStaticField(0x9371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JENHGDIBJMC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKPKLBAACHC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKPKLBAACHC*>*(*)())((::PBYTE)hIl2Cpp + JENHGDIBJMC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JENHGDIBJMC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NKPKLBAACHC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NKPKLBAACHC*>(*)())((::PBYTE)hIl2Cpp + JENHGDIBJMC_FPHGMAMDFHE_OFFSET))();
		}

		static ::NKPKLBAACHC* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::NKPKLBAACHC*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JENHGDIBJMC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JENHGDIBJMC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JENHGDIBJMC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JENHGDIBJMC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JENHGDIBJMC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JENHGDIBJMC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JENHGDIBJMC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NKPKLBAACHC* a1)
		{
			return ((::System::Void(*)(::NKPKLBAACHC*))((::PBYTE)hIl2Cpp + JENHGDIBJMC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
