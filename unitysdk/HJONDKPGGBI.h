#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingUnlockRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJONDKPGGBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEB84F0)
#define HJONDKPGGBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB8AC0)
#define HJONDKPGGBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEB8660)
#define HJONDKPGGBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEB7F60)
#define HJONDKPGGBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEB81F0)
#define HJONDKPGGBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEB8700)
#define HJONDKPGGBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEB8750)
#define HJONDKPGGBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEB8530)
#define HJONDKPGGBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEB8190)
#define HJONDKPGGBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEB8360)
#define HJONDKPGGBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEB85C0)
#define HJONDKPGGBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEB7EE0)

inline static constexpr unsigned int HJONDKPGGBI_TypeDefinitionIndex = 12463;

	class HJONDKPGGBI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>**)UnitySDK::FromName("", "HJONDKPGGBI")->GetStaticField(0x1EB80);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HJONDKPGGBI")->GetStaticField(0x1EB88);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HJONDKPGGBI")->GetStaticField(0x1EB90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HJONDKPGGBI")->GetStaticField(0x7050);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HJONDKPGGBI")->GetStaticField(0x7051);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJONDKPGGBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + HJONDKPGGBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJONDKPGGBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>(*)())((::PBYTE)hIl2Cpp + HJONDKPGGBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingUnlockRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJONDKPGGBI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJONDKPGGBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJONDKPGGBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJONDKPGGBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HJONDKPGGBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJONDKPGGBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HJONDKPGGBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingUnlockRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingUnlockRow*))((::PBYTE)hIl2Cpp + HJONDKPGGBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
