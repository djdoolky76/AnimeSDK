#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicComposeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPAONACBAID_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEFD4E0)
#define IPAONACBAID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFDAB0)
#define IPAONACBAID_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEFD650)
#define IPAONACBAID_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEFCF50)
#define IPAONACBAID_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEFD1E0)
#define IPAONACBAID_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEFD6F0)
#define IPAONACBAID_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEFD740)
#define IPAONACBAID_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEFD520)
#define IPAONACBAID_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEFD180)
#define IPAONACBAID_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEFD350)
#define IPAONACBAID_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEFD5B0)
#define IPAONACBAID_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEFCED0)

inline static constexpr unsigned int IPAONACBAID_TypeDefinitionIndex = 13845;

	class IPAONACBAID : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IPAONACBAID")->GetStaticField(0x23F90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicComposeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicComposeConfigRow*>**)UnitySDK::FromName("", "IPAONACBAID")->GetStaticField(0x23F98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPAONACBAID")->GetStaticField(0x23FA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPAONACBAID")->GetStaticField(0x7C80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPAONACBAID")->GetStaticField(0x7C81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPAONACBAID_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicComposeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicComposeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IPAONACBAID_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPAONACBAID_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicComposeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicComposeConfigRow*>(*)())((::PBYTE)hIl2Cpp + IPAONACBAID_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RelicComposeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RelicComposeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPAONACBAID_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPAONACBAID_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPAONACBAID_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPAONACBAID_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPAONACBAID_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPAONACBAID_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPAONACBAID_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RelicComposeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicComposeConfigRow*))((::PBYTE)hIl2Cpp + IPAONACBAID_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
