#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSenderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKFLOIMODJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E5BAC50)
#define JKFLOIMODJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB220)
#define JKFLOIMODJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E5BADC0)
#define JKFLOIMODJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E5BA6C0)
#define JKFLOIMODJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E5BA950)
#define JKFLOIMODJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E5BAE60)
#define JKFLOIMODJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E5BAEB0)
#define JKFLOIMODJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E5BAC90)
#define JKFLOIMODJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E5BA8F0)
#define JKFLOIMODJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E5BAAC0)
#define JKFLOIMODJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E5BAD20)
#define JKFLOIMODJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E5BA640)

inline static constexpr unsigned int JKFLOIMODJF_TypeDefinitionIndex = 11848;

	class JKFLOIMODJF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JKFLOIMODJF")->GetStaticField(0x37300);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JKFLOIMODJF")->GetStaticField(0x37308);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSenderRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSenderRow*>**)UnitySDK::FromName("", "JKFLOIMODJF")->GetStaticField(0x37310);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JKFLOIMODJF")->GetStaticField(0xAD20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JKFLOIMODJF")->GetStaticField(0xAD21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKFLOIMODJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSenderRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSenderRow*>*(*)())((::PBYTE)hIl2Cpp + JKFLOIMODJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKFLOIMODJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSenderRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSenderRow*>(*)())((::PBYTE)hIl2Cpp + JKFLOIMODJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSenderRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSenderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JKFLOIMODJF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKFLOIMODJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKFLOIMODJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKFLOIMODJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JKFLOIMODJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKFLOIMODJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JKFLOIMODJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSenderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSenderRow*))((::PBYTE)hIl2Cpp + JKFLOIMODJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
