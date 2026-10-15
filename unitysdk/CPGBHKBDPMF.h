#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenEndingRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPGBHKBDPMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCBD810)
#define CPGBHKBDPMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCBDDE0)
#define CPGBHKBDPMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCBD980)
#define CPGBHKBDPMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCBD280)
#define CPGBHKBDPMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCBD510)
#define CPGBHKBDPMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCBDA20)
#define CPGBHKBDPMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCBDA70)
#define CPGBHKBDPMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCBD850)
#define CPGBHKBDPMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCBD4B0)
#define CPGBHKBDPMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCBD680)
#define CPGBHKBDPMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCBD8E0)
#define CPGBHKBDPMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCBD200)

inline static constexpr unsigned int CPGBHKBDPMF_TypeDefinitionIndex = 11674;

	class CPGBHKBDPMF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0x45A90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0x45A98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenEndingRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenEndingRow*>**)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0x45AA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0x10AE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0x10AE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPGBHKBDPMF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenEndingRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenEndingRow*>*(*)())((::PBYTE)hIl2Cpp + CPGBHKBDPMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPGBHKBDPMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenEndingRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenEndingRow*>(*)())((::PBYTE)hIl2Cpp + CPGBHKBDPMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenEndingRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHipplenEndingRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CPGBHKBDPMF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPGBHKBDPMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPGBHKBDPMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPGBHKBDPMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPGBHKBDPMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPGBHKBDPMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CPGBHKBDPMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenEndingRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenEndingRow*))((::PBYTE)hIl2Cpp + CPGBHKBDPMF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
