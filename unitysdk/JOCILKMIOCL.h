#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JLMKCFFODIA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JOCILKMIOCL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E5D1900)
#define JOCILKMIOCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9366A0)
#define JOCILKMIOCL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F936290)
#define JOCILKMIOCL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F935F30)
#define JOCILKMIOCL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E5D1640)
#define JOCILKMIOCL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F936330)
#define JOCILKMIOCL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F936380)
#define JOCILKMIOCL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F936160)
#define JOCILKMIOCL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E5D15E0)
#define JOCILKMIOCL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E5D17B0)
#define JOCILKMIOCL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F9361F0)
#define JOCILKMIOCL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E5D1560)

inline static constexpr unsigned int JOCILKMIOCL_TypeDefinitionIndex = 14119;

	class JOCILKMIOCL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JOCILKMIOCL")->GetStaticField(0x305E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JLMKCFFODIA*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JLMKCFFODIA*>**)UnitySDK::FromName("", "JOCILKMIOCL")->GetStaticField(0x305E8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JOCILKMIOCL")->GetStaticField(0x305F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JOCILKMIOCL")->GetStaticField(0x9720);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JOCILKMIOCL")->GetStaticField(0x9721);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCILKMIOCL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JLMKCFFODIA*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JLMKCFFODIA*>*(*)())((::PBYTE)hIl2Cpp + JOCILKMIOCL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JOCILKMIOCL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JLMKCFFODIA*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JLMKCFFODIA*>(*)())((::PBYTE)hIl2Cpp + JOCILKMIOCL_FPHGMAMDFHE_OFFSET))();
		}

		static ::JLMKCFFODIA* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JLMKCFFODIA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JOCILKMIOCL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JOCILKMIOCL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCILKMIOCL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCILKMIOCL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JOCILKMIOCL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JOCILKMIOCL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JOCILKMIOCL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JLMKCFFODIA* a1)
		{
			return ((::System::Void(*)(::JLMKCFFODIA*))((::PBYTE)hIl2Cpp + JOCILKMIOCL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
