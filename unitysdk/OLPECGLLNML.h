#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class PIGJBPHCFIG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLPECGLLNML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D26EE10)
#define OLPECGLLNML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D26F390)
#define OLPECGLLNML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D26EF80)
#define OLPECGLLNML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D26E900)
#define OLPECGLLNML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D26EB90)
#define OLPECGLLNML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D26F020)
#define OLPECGLLNML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D26F070)
#define OLPECGLLNML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D26EE50)
#define OLPECGLLNML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D26EB30)
#define OLPECGLLNML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D26ECC0)
#define OLPECGLLNML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D26EEE0)
#define OLPECGLLNML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D26E880)

inline static constexpr unsigned int OLPECGLLNML_TypeDefinitionIndex = 11564;

	class OLPECGLLNML : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x49FD0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x49FD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PIGJBPHCFIG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PIGJBPHCFIG*>**)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x49FE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x11100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x11101);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLPECGLLNML_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PIGJBPHCFIG*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PIGJBPHCFIG*>*(*)())((::PBYTE)hIl2Cpp + OLPECGLLNML_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLPECGLLNML_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PIGJBPHCFIG*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PIGJBPHCFIG*>(*)())((::PBYTE)hIl2Cpp + OLPECGLLNML_FPHGMAMDFHE_OFFSET))();
		}

		static ::PIGJBPHCFIG* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::PIGJBPHCFIG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OLPECGLLNML_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLPECGLLNML_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLPECGLLNML_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLPECGLLNML_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OLPECGLLNML_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLPECGLLNML_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OLPECGLLNML_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::PIGJBPHCFIG* a1)
		{
			return ((::System::Void(*)(::PIGJBPHCFIG*))((::PBYTE)hIl2Cpp + OLPECGLLNML_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
