#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FNCJNHDMCBH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MACKHNLHJEC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E32EEB0)
#define MACKHNLHJEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32F4B0)
#define MACKHNLHJEC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E32F020)
#define MACKHNLHJEC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E32E8E0)
#define MACKHNLHJEC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E32EB70)
#define MACKHNLHJEC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E32F0C0)
#define MACKHNLHJEC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E32F110)
#define MACKHNLHJEC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E32EEF0)
#define MACKHNLHJEC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E32EB10)
#define MACKHNLHJEC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E32ECE0)
#define MACKHNLHJEC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E32EF80)
#define MACKHNLHJEC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E32E860)

inline static constexpr unsigned int MACKHNLHJEC_TypeDefinitionIndex = 12083;

	class MACKHNLHJEC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MACKHNLHJEC")->GetStaticField(0x37700);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FNCJNHDMCBH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FNCJNHDMCBH*>**)UnitySDK::FromName("", "MACKHNLHJEC")->GetStaticField(0x37708);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MACKHNLHJEC")->GetStaticField(0x37710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MACKHNLHJEC")->GetStaticField(0xBF90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MACKHNLHJEC")->GetStaticField(0xBF91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MACKHNLHJEC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FNCJNHDMCBH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FNCJNHDMCBH*>*(*)())((::PBYTE)hIl2Cpp + MACKHNLHJEC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MACKHNLHJEC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FNCJNHDMCBH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FNCJNHDMCBH*>(*)())((::PBYTE)hIl2Cpp + MACKHNLHJEC_FPHGMAMDFHE_OFFSET))();
		}

		static ::FNCJNHDMCBH* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::FNCJNHDMCBH*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MACKHNLHJEC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MACKHNLHJEC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MACKHNLHJEC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MACKHNLHJEC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MACKHNLHJEC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MACKHNLHJEC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MACKHNLHJEC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::FNCJNHDMCBH* a1)
		{
			return ((::System::Void(*)(::FNCJNHDMCBH*))((::PBYTE)hIl2Cpp + MACKHNLHJEC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
