#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AtlasConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAFCBKNHBHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE7DA00)
#define HAFCBKNHBHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE7DFD0)
#define HAFCBKNHBHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE7DB70)
#define HAFCBKNHBHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE7D470)
#define HAFCBKNHBHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE7D700)
#define HAFCBKNHBHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE7DC10)
#define HAFCBKNHBHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE7DC60)
#define HAFCBKNHBHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE7DA40)
#define HAFCBKNHBHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE7D6A0)
#define HAFCBKNHBHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE7D870)
#define HAFCBKNHBHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE7DAD0)
#define HAFCBKNHBHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE7D3F0)

	class HAFCBKNHBHO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x1B200);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>**)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x1B208);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x1B210);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x61D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x61D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AtlasConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AtlasConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AtlasConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AtlasConfigRow*))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
