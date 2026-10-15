#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NILCNHEGMDG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPIFGKLMKPK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF2E950)
#define IPIFGKLMKPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF2EF20)
#define IPIFGKLMKPK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF2EAC0)
#define IPIFGKLMKPK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF2E3C0)
#define IPIFGKLMKPK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF2E650)
#define IPIFGKLMKPK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF2EB60)
#define IPIFGKLMKPK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF2EBB0)
#define IPIFGKLMKPK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF2E990)
#define IPIFGKLMKPK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF2E5F0)
#define IPIFGKLMKPK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF2E7C0)
#define IPIFGKLMKPK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF2EA20)
#define IPIFGKLMKPK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF2E340)

inline static constexpr unsigned int IPIFGKLMKPK_TypeDefinitionIndex = 11662;

	class IPIFGKLMKPK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IPIFGKLMKPK")->GetStaticField(0x24E60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPIFGKLMKPK")->GetStaticField(0x24E68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NILCNHEGMDG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NILCNHEGMDG*>**)UnitySDK::FromName("", "IPIFGKLMKPK")->GetStaticField(0x24E70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPIFGKLMKPK")->GetStaticField(0x80C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPIFGKLMKPK")->GetStaticField(0x80C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIFGKLMKPK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NILCNHEGMDG*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NILCNHEGMDG*>*(*)())((::PBYTE)hIl2Cpp + IPIFGKLMKPK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPIFGKLMKPK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NILCNHEGMDG*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NILCNHEGMDG*>(*)())((::PBYTE)hIl2Cpp + IPIFGKLMKPK_FPHGMAMDFHE_OFFSET))();
		}

		static ::NILCNHEGMDG* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NILCNHEGMDG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPIFGKLMKPK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPIFGKLMKPK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIFGKLMKPK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIFGKLMKPK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPIFGKLMKPK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPIFGKLMKPK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPIFGKLMKPK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NILCNHEGMDG* a1)
		{
			return ((::System::Void(*)(::NILCNHEGMDG*))((::PBYTE)hIl2Cpp + IPIFGKLMKPK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
