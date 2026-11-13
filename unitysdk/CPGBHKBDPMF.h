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

#define CPGBHKBDPMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EB91F40)
#define CPGBHKBDPMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB92510)
#define CPGBHKBDPMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EB920B0)
#define CPGBHKBDPMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EB919B0)
#define CPGBHKBDPMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EB91C40)
#define CPGBHKBDPMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EB92150)
#define CPGBHKBDPMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EB921A0)
#define CPGBHKBDPMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EB91F80)
#define CPGBHKBDPMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EB91BE0)
#define CPGBHKBDPMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EB91DB0)
#define CPGBHKBDPMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EB92010)
#define CPGBHKBDPMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EB91930)

inline static constexpr unsigned int CPGBHKBDPMF_TypeDefinitionIndex = 11725;

	class CPGBHKBDPMF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0x37870);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0x37878);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenEndingRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenEndingRow*>**)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0x37880);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0xAE70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPGBHKBDPMF")->GetStaticField(0xAE71);
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
