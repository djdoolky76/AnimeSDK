#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VideoEncryptionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFAFKIAHKKI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1D0C30)
#define NFAFKIAHKKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1D1780)
#define NFAFKIAHKKI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1D0FD0)
#define NFAFKIAHKKI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1D0C70)
#define NFAFKIAHKKI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1D14C0)
#define NFAFKIAHKKI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1D1070)
#define NFAFKIAHKKI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1D10C0)
#define NFAFKIAHKKI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1D0EA0)
#define NFAFKIAHKKI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1D1460)
#define NFAFKIAHKKI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1D1630)
#define NFAFKIAHKKI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1D0F30)
#define NFAFKIAHKKI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1D13E0)

inline static constexpr unsigned int NFAFKIAHKKI_TypeDefinitionIndex = 15421;

	class NFAFKIAHKKI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoEncryptionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoEncryptionConfigRow*>**)UnitySDK::FromName("", "NFAFKIAHKKI")->GetStaticField(0x3F5F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NFAFKIAHKKI")->GetStaticField(0x3F5F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NFAFKIAHKKI")->GetStaticField(0x3F600);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NFAFKIAHKKI")->GetStaticField(0xEF90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NFAFKIAHKKI")->GetStaticField(0xEF91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAFKIAHKKI_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFAFKIAHKKI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAFKIAHKKI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAFKIAHKKI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NFAFKIAHKKI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFAFKIAHKKI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NFAFKIAHKKI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::VideoEncryptionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::VideoEncryptionConfigRow*))((::PBYTE)hIl2Cpp + NFAFKIAHKKI_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoEncryptionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoEncryptionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NFAFKIAHKKI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFAFKIAHKKI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoEncryptionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VideoEncryptionConfigRow*>(*)())((::PBYTE)hIl2Cpp + NFAFKIAHKKI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::VideoEncryptionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::VideoEncryptionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NFAFKIAHKKI_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
