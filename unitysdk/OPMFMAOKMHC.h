#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCJoyHelpRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPMFMAOKMHC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2BDD70)
#define OPMFMAOKMHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BE340)
#define OPMFMAOKMHC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2BDEE0)
#define OPMFMAOKMHC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2BD7E0)
#define OPMFMAOKMHC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2BDA70)
#define OPMFMAOKMHC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2BDF80)
#define OPMFMAOKMHC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2BDFD0)
#define OPMFMAOKMHC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2BDDB0)
#define OPMFMAOKMHC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2BDA10)
#define OPMFMAOKMHC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2BDBE0)
#define OPMFMAOKMHC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2BDE40)
#define OPMFMAOKMHC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2BD760)

inline static constexpr unsigned int OPMFMAOKMHC_TypeDefinitionIndex = 14752;

	class OPMFMAOKMHC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OPMFMAOKMHC")->GetStaticField(0x3D540);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>**)UnitySDK::FromName("", "OPMFMAOKMHC")->GetStaticField(0x3D548);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OPMFMAOKMHC")->GetStaticField(0x3D550);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OPMFMAOKMHC")->GetStaticField(0xD250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OPMFMAOKMHC")->GetStaticField(0xD251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPMFMAOKMHC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>*(*)())((::PBYTE)hIl2Cpp + OPMFMAOKMHC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OPMFMAOKMHC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>(*)())((::PBYTE)hIl2Cpp + OPMFMAOKMHC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCJoyHelpRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCJoyHelpRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OPMFMAOKMHC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OPMFMAOKMHC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPMFMAOKMHC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPMFMAOKMHC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OPMFMAOKMHC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OPMFMAOKMHC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OPMFMAOKMHC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDLCJoyHelpRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCJoyHelpRow*))((::PBYTE)hIl2Cpp + OPMFMAOKMHC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
