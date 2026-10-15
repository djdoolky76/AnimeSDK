#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopCGEncryptionConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHBNAJEIHEN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E4F40)
#define PHBNAJEIHEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E5A90)
#define PHBNAJEIHEN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E52E0)
#define PHBNAJEIHEN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E4F80)
#define PHBNAJEIHEN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E57D0)
#define PHBNAJEIHEN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E5380)
#define PHBNAJEIHEN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E53D0)
#define PHBNAJEIHEN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E51B0)
#define PHBNAJEIHEN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E5770)
#define PHBNAJEIHEN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E5940)
#define PHBNAJEIHEN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E5240)
#define PHBNAJEIHEN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E56F0)

	class PHBNAJEIHEN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PHBNAJEIHEN")->GetStaticField(0x3FF60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHBNAJEIHEN")->GetStaticField(0x3FF68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGEncryptionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGEncryptionConfigRow*>**)UnitySDK::FromName("", "PHBNAJEIHEN")->GetStaticField(0x3FF70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHBNAJEIHEN")->GetStaticField(0xDA70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHBNAJEIHEN")->GetStaticField(0xDA71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHBNAJEIHEN_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHBNAJEIHEN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHBNAJEIHEN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHBNAJEIHEN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHBNAJEIHEN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHBNAJEIHEN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHBNAJEIHEN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::LoopCGEncryptionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LoopCGEncryptionConfigRow*))((::PBYTE)hIl2Cpp + PHBNAJEIHEN_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGEncryptionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGEncryptionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PHBNAJEIHEN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHBNAJEIHEN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGEncryptionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoopCGEncryptionConfigRow*>(*)())((::PBYTE)hIl2Cpp + PHBNAJEIHEN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::LoopCGEncryptionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LoopCGEncryptionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHBNAJEIHEN_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
