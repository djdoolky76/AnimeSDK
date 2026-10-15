#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HNJPENLPJKC;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGCIFIGHPME_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE10D10)
#define GGCIFIGHPME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE112E0)
#define GGCIFIGHPME_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE10E80)
#define GGCIFIGHPME_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE10780)
#define GGCIFIGHPME_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE10A10)
#define GGCIFIGHPME_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE10F20)
#define GGCIFIGHPME_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE10F70)
#define GGCIFIGHPME_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE10D50)
#define GGCIFIGHPME_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE109B0)
#define GGCIFIGHPME_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE10B80)
#define GGCIFIGHPME_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE10DE0)
#define GGCIFIGHPME_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE10700)

inline static constexpr unsigned int GGCIFIGHPME_TypeDefinitionIndex = 12823;

	class GGCIFIGHPME : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x153D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x153D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>**)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x153E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x4850);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GGCIFIGHPME")->GetStaticField(0x4851);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>*(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNJPENLPJKC*>(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_FPHGMAMDFHE_OFFSET))();
		}

		static ::HNJPENLPJKC* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HNJPENLPJKC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GGCIFIGHPME_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCIFIGHPME_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GGCIFIGHPME_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGCIFIGHPME_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GGCIFIGHPME_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HNJPENLPJKC* a1)
		{
			return ((::System::Void(*)(::HNJPENLPJKC*))((::PBYTE)hIl2Cpp + GGCIFIGHPME_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
