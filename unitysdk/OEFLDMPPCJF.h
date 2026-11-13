#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchPlayerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEFLDMPPCJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E609BC0)
#define OEFLDMPPCJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60A190)
#define OEFLDMPPCJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E609D30)
#define OEFLDMPPCJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E609630)
#define OEFLDMPPCJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6098C0)
#define OEFLDMPPCJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E609DD0)
#define OEFLDMPPCJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E609E20)
#define OEFLDMPPCJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E609C00)
#define OEFLDMPPCJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E609860)
#define OEFLDMPPCJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E609A30)
#define OEFLDMPPCJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E609C90)
#define OEFLDMPPCJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6095B0)

inline static constexpr unsigned int OEFLDMPPCJF_TypeDefinitionIndex = 11931;

	class OEFLDMPPCJF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OEFLDMPPCJF")->GetStaticField(0x560F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>**)UnitySDK::FromName("", "OEFLDMPPCJF")->GetStaticField(0x560F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEFLDMPPCJF")->GetStaticField(0x56100);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OEFLDMPPCJF")->GetStaticField(0x125B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OEFLDMPPCJF")->GetStaticField(0x125B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEFLDMPPCJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>*(*)())((::PBYTE)hIl2Cpp + OEFLDMPPCJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEFLDMPPCJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchPlayerRow*>(*)())((::PBYTE)hIl2Cpp + OEFLDMPPCJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleMatchPlayerRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleMatchPlayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OEFLDMPPCJF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEFLDMPPCJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEFLDMPPCJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEFLDMPPCJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OEFLDMPPCJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEFLDMPPCJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OEFLDMPPCJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleMatchPlayerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleMatchPlayerRow*))((::PBYTE)hIl2Cpp + OEFLDMPPCJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
