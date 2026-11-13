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

#define OLPECGLLNML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA15E60)
#define OLPECGLLNML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA163E0)
#define OLPECGLLNML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA15FD0)
#define OLPECGLLNML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA15950)
#define OLPECGLLNML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA15BE0)
#define OLPECGLLNML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA16070)
#define OLPECGLLNML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA160C0)
#define OLPECGLLNML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA15EA0)
#define OLPECGLLNML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA15B80)
#define OLPECGLLNML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA15D10)
#define OLPECGLLNML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA15F30)
#define OLPECGLLNML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA158D0)

inline static constexpr unsigned int OLPECGLLNML_TypeDefinitionIndex = 11615;

	class OLPECGLLNML : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x58D00);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x58D08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PIGJBPHCFIG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PIGJBPHCFIG*>**)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x58D10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x12ED0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OLPECGLLNML")->GetStaticField(0x12ED1);
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
