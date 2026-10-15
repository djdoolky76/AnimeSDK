#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AGLKOAMDEFB;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIHGFLJDGNE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D255C10)
#define OIHGFLJDGNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D256190)
#define OIHGFLJDGNE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D255D80)
#define OIHGFLJDGNE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D255700)
#define OIHGFLJDGNE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D255990)
#define OIHGFLJDGNE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D255E20)
#define OIHGFLJDGNE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D255E70)
#define OIHGFLJDGNE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D255C50)
#define OIHGFLJDGNE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D255930)
#define OIHGFLJDGNE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D255AC0)
#define OIHGFLJDGNE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D255CE0)
#define OIHGFLJDGNE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D255680)

inline static constexpr unsigned int OIHGFLJDGNE_TypeDefinitionIndex = 14416;

	class OIHGFLJDGNE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AGLKOAMDEFB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AGLKOAMDEFB*>**)UnitySDK::FromName("", "OIHGFLJDGNE")->GetStaticField(0x46EB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OIHGFLJDGNE")->GetStaticField(0x46EB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OIHGFLJDGNE")->GetStaticField(0x46EC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OIHGFLJDGNE")->GetStaticField(0x109C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OIHGFLJDGNE")->GetStaticField(0x109C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHGFLJDGNE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AGLKOAMDEFB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AGLKOAMDEFB*>*(*)())((::PBYTE)hIl2Cpp + OIHGFLJDGNE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIHGFLJDGNE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AGLKOAMDEFB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AGLKOAMDEFB*>(*)())((::PBYTE)hIl2Cpp + OIHGFLJDGNE_FPHGMAMDFHE_OFFSET))();
		}

		static ::AGLKOAMDEFB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::AGLKOAMDEFB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OIHGFLJDGNE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIHGFLJDGNE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHGFLJDGNE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHGFLJDGNE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OIHGFLJDGNE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OIHGFLJDGNE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OIHGFLJDGNE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AGLKOAMDEFB* a1)
		{
			return ((::System::Void(*)(::AGLKOAMDEFB*))((::PBYTE)hIl2Cpp + OIHGFLJDGNE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
