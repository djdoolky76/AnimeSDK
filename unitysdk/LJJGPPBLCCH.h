#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BNEJEFALJIP;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJJGPPBLCCH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0D5CC0)
#define LJJGPPBLCCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0D6290)
#define LJJGPPBLCCH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0D5E30)
#define LJJGPPBLCCH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0D5730)
#define LJJGPPBLCCH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0D59C0)
#define LJJGPPBLCCH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0D5ED0)
#define LJJGPPBLCCH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0D5F20)
#define LJJGPPBLCCH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0D5D00)
#define LJJGPPBLCCH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0D5960)
#define LJJGPPBLCCH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0D5B30)
#define LJJGPPBLCCH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0D5D90)
#define LJJGPPBLCCH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0D56B0)

inline static constexpr unsigned int LJJGPPBLCCH_TypeDefinitionIndex = 13950;

	class LJJGPPBLCCH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BNEJEFALJIP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BNEJEFALJIP*>**)UnitySDK::FromName("", "LJJGPPBLCCH")->GetStaticField(0x3CC60);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LJJGPPBLCCH")->GetStaticField(0x3CC68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LJJGPPBLCCH")->GetStaticField(0x3CC70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LJJGPPBLCCH")->GetStaticField(0xC200);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LJJGPPBLCCH")->GetStaticField(0xC201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJGPPBLCCH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BNEJEFALJIP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BNEJEFALJIP*>*(*)())((::PBYTE)hIl2Cpp + LJJGPPBLCCH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJJGPPBLCCH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BNEJEFALJIP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BNEJEFALJIP*>(*)())((::PBYTE)hIl2Cpp + LJJGPPBLCCH_FPHGMAMDFHE_OFFSET))();
		}

		static ::BNEJEFALJIP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BNEJEFALJIP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LJJGPPBLCCH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJJGPPBLCCH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJGPPBLCCH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJGPPBLCCH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LJJGPPBLCCH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJJGPPBLCCH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LJJGPPBLCCH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BNEJEFALJIP* a1)
		{
			return ((::System::Void(*)(::BNEJEFALJIP*))((::PBYTE)hIl2Cpp + LJJGPPBLCCH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
