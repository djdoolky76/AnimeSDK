#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEnchantRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFMGAKOICIH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E9BE0)
#define LFMGAKOICIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EA160)
#define LFMGAKOICIH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E9D50)
#define LFMGAKOICIH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E9690)
#define LFMGAKOICIH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E9920)
#define LFMGAKOICIH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E9DF0)
#define LFMGAKOICIH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E9E40)
#define LFMGAKOICIH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E9C20)
#define LFMGAKOICIH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E98C0)
#define LFMGAKOICIH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E9A90)
#define LFMGAKOICIH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E9CB0)
#define LFMGAKOICIH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E9610)

inline static constexpr unsigned int LFMGAKOICIH_TypeDefinitionIndex = 11066;

	class LFMGAKOICIH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LFMGAKOICIH")->GetStaticField(0x3CC40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantRow*>**)UnitySDK::FromName("", "LFMGAKOICIH")->GetStaticField(0x3CC48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LFMGAKOICIH")->GetStaticField(0x3CC50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LFMGAKOICIH")->GetStaticField(0xD060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LFMGAKOICIH")->GetStaticField(0xD061);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFMGAKOICIH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantRow*>*(*)())((::PBYTE)hIl2Cpp + LFMGAKOICIH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFMGAKOICIH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnchantRow*>(*)())((::PBYTE)hIl2Cpp + LFMGAKOICIH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingEnchantRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingEnchantRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LFMGAKOICIH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFMGAKOICIH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFMGAKOICIH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFMGAKOICIH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LFMGAKOICIH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFMGAKOICIH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LFMGAKOICIH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingEnchantRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingEnchantRow*))((::PBYTE)hIl2Cpp + LFMGAKOICIH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
