#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerOutfitDetailRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFKICBOAIBE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D12CAC0)
#define MFKICBOAIBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D12D080)
#define MFKICBOAIBE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D12CC30)
#define MFKICBOAIBE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D12C520)
#define MFKICBOAIBE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D12C7B0)
#define MFKICBOAIBE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D12CCD0)
#define MFKICBOAIBE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D12CD20)
#define MFKICBOAIBE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D12CB00)
#define MFKICBOAIBE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D12C750)
#define MFKICBOAIBE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D12C920)
#define MFKICBOAIBE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D12CB90)
#define MFKICBOAIBE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D12C4A0)

inline static constexpr unsigned int MFKICBOAIBE_TypeDefinitionIndex = 14512;

	class MFKICBOAIBE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MFKICBOAIBE")->GetStaticField(0x438C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MFKICBOAIBE")->GetStaticField(0x438C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>**)UnitySDK::FromName("", "MFKICBOAIBE")->GetStaticField(0x438D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MFKICBOAIBE")->GetStaticField(0x10010);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MFKICBOAIBE")->GetStaticField(0x10011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKICBOAIBE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>*(*)())((::PBYTE)hIl2Cpp + MFKICBOAIBE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFKICBOAIBE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitDetailRow*>(*)())((::PBYTE)hIl2Cpp + MFKICBOAIBE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerOutfitDetailRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::TargetGenderType a2)
		{
			return ((::RPG::GameCore::PlayerOutfitDetailRow*(*)(::System::UInt32, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + MFKICBOAIBE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFKICBOAIBE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKICBOAIBE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKICBOAIBE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MFKICBOAIBE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MFKICBOAIBE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MFKICBOAIBE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerOutfitDetailRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerOutfitDetailRow*))((::PBYTE)hIl2Cpp + MFKICBOAIBE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
