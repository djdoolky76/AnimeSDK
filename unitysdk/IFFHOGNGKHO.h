#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingEventOptionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFFHOGNGKHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEC0D10)
#define IFFHOGNGKHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEC12E0)
#define IFFHOGNGKHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEC0E80)
#define IFFHOGNGKHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEC0780)
#define IFFHOGNGKHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEC0A10)
#define IFFHOGNGKHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEC0F20)
#define IFFHOGNGKHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEC0F70)
#define IFFHOGNGKHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEC0D50)
#define IFFHOGNGKHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEC09B0)
#define IFFHOGNGKHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEC0B80)
#define IFFHOGNGKHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEC0DE0)
#define IFFHOGNGKHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEC0700)

inline static constexpr unsigned int IFFHOGNGKHO_TypeDefinitionIndex = 12465;

	class IFFHOGNGKHO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IFFHOGNGKHO")->GetStaticField(0x20BD0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IFFHOGNGKHO")->GetStaticField(0x20BD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventOptionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventOptionRow*>**)UnitySDK::FromName("", "IFFHOGNGKHO")->GetStaticField(0x20BE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IFFHOGNGKHO")->GetStaticField(0x74D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IFFHOGNGKHO")->GetStaticField(0x74D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFFHOGNGKHO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventOptionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventOptionRow*>*(*)())((::PBYTE)hIl2Cpp + IFFHOGNGKHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFFHOGNGKHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventOptionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventOptionRow*>(*)())((::PBYTE)hIl2Cpp + IFFHOGNGKHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingEventOptionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingEventOptionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IFFHOGNGKHO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFFHOGNGKHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFFHOGNGKHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFFHOGNGKHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IFFHOGNGKHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFFHOGNGKHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IFFHOGNGKHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingEventOptionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingEventOptionRow*))((::PBYTE)hIl2Cpp + IFFHOGNGKHO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
