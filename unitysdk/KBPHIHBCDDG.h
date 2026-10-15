#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FGHCFBENCAN;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBPHIHBCDDG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0369B0)
#define KBPHIHBCDDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D036F80)
#define KBPHIHBCDDG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D036B20)
#define KBPHIHBCDDG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D036420)
#define KBPHIHBCDDG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0366B0)
#define KBPHIHBCDDG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D036BC0)
#define KBPHIHBCDDG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D036C10)
#define KBPHIHBCDDG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0369F0)
#define KBPHIHBCDDG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D036650)
#define KBPHIHBCDDG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D036820)
#define KBPHIHBCDDG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D036A80)
#define KBPHIHBCDDG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0363A0)

inline static constexpr unsigned int KBPHIHBCDDG_TypeDefinitionIndex = 11299;

	class KBPHIHBCDDG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FGHCFBENCAN*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FGHCFBENCAN*>**)UnitySDK::FromName("", "KBPHIHBCDDG")->GetStaticField(0x31E80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KBPHIHBCDDG")->GetStaticField(0x31E88);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KBPHIHBCDDG")->GetStaticField(0x31E90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KBPHIHBCDDG")->GetStaticField(0xA460);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KBPHIHBCDDG")->GetStaticField(0xA461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBPHIHBCDDG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FGHCFBENCAN*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FGHCFBENCAN*>*(*)())((::PBYTE)hIl2Cpp + KBPHIHBCDDG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBPHIHBCDDG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FGHCFBENCAN*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FGHCFBENCAN*>(*)())((::PBYTE)hIl2Cpp + KBPHIHBCDDG_FPHGMAMDFHE_OFFSET))();
		}

		static ::FGHCFBENCAN* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::FGHCFBENCAN*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KBPHIHBCDDG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBPHIHBCDDG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBPHIHBCDDG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBPHIHBCDDG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KBPHIHBCDDG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBPHIHBCDDG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KBPHIHBCDDG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::FGHCFBENCAN* a1)
		{
			return ((::System::Void(*)(::FGHCFBENCAN*))((::PBYTE)hIl2Cpp + KBPHIHBCDDG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
