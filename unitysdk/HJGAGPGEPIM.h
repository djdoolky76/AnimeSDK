#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MBBPMEANHCL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJGAGPGEPIM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEB6B20)
#define HJGAGPGEPIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB70F0)
#define HJGAGPGEPIM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEB6C90)
#define HJGAGPGEPIM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEB6590)
#define HJGAGPGEPIM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEB6820)
#define HJGAGPGEPIM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEB6D30)
#define HJGAGPGEPIM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEB6D80)
#define HJGAGPGEPIM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEB6B60)
#define HJGAGPGEPIM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEB67C0)
#define HJGAGPGEPIM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEB6990)
#define HJGAGPGEPIM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEB6BF0)
#define HJGAGPGEPIM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEB6510)

inline static constexpr unsigned int HJGAGPGEPIM_TypeDefinitionIndex = 11975;

	class HJGAGPGEPIM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MBBPMEANHCL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MBBPMEANHCL*>**)UnitySDK::FromName("", "HJGAGPGEPIM")->GetStaticField(0x1EA70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HJGAGPGEPIM")->GetStaticField(0x1EA78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HJGAGPGEPIM")->GetStaticField(0x1EA80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HJGAGPGEPIM")->GetStaticField(0x7000);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HJGAGPGEPIM")->GetStaticField(0x7001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJGAGPGEPIM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MBBPMEANHCL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MBBPMEANHCL*>*(*)())((::PBYTE)hIl2Cpp + HJGAGPGEPIM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJGAGPGEPIM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MBBPMEANHCL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MBBPMEANHCL*>(*)())((::PBYTE)hIl2Cpp + HJGAGPGEPIM_FPHGMAMDFHE_OFFSET))();
		}

		static ::MBBPMEANHCL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MBBPMEANHCL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJGAGPGEPIM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJGAGPGEPIM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJGAGPGEPIM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJGAGPGEPIM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HJGAGPGEPIM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJGAGPGEPIM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HJGAGPGEPIM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MBBPMEANHCL* a1)
		{
			return ((::System::Void(*)(::MBBPMEANHCL*))((::PBYTE)hIl2Cpp + HJGAGPGEPIM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
