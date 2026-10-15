#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirPlaneRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBOAKMDEIKP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA071F0)
#define CBOAKMDEIKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA07770)
#define CBOAKMDEIKP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA07360)
#define CBOAKMDEIKP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA06CE0)
#define CBOAKMDEIKP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA06F70)
#define CBOAKMDEIKP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA07400)
#define CBOAKMDEIKP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA07450)
#define CBOAKMDEIKP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA07230)
#define CBOAKMDEIKP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA06F10)
#define CBOAKMDEIKP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA070A0)
#define CBOAKMDEIKP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA072C0)
#define CBOAKMDEIKP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA06C60)

inline static constexpr unsigned int CBOAKMDEIKP_TypeDefinitionIndex = 12136;

	class CBOAKMDEIKP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBOAKMDEIKP")->GetStaticField(0x3B590);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CBOAKMDEIKP")->GetStaticField(0x3B598);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirPlaneRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirPlaneRow*>**)UnitySDK::FromName("", "CBOAKMDEIKP")->GetStaticField(0x3B5A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CBOAKMDEIKP")->GetStaticField(0xCA10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CBOAKMDEIKP")->GetStaticField(0xCA11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBOAKMDEIKP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirPlaneRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirPlaneRow*>*(*)())((::PBYTE)hIl2Cpp + CBOAKMDEIKP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBOAKMDEIKP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirPlaneRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirPlaneRow*>(*)())((::PBYTE)hIl2Cpp + CBOAKMDEIKP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirPlaneRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirPlaneRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CBOAKMDEIKP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBOAKMDEIKP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBOAKMDEIKP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBOAKMDEIKP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CBOAKMDEIKP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CBOAKMDEIKP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CBOAKMDEIKP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirPlaneRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirPlaneRow*))((::PBYTE)hIl2Cpp + CBOAKMDEIKP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
