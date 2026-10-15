#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerOutfitSlotRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEMANAHCMPA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D01FAF0)
#define JEMANAHCMPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D020070)
#define JEMANAHCMPA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D01FC60)
#define JEMANAHCMPA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D01F5A0)
#define JEMANAHCMPA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D01F830)
#define JEMANAHCMPA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D01FD00)
#define JEMANAHCMPA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D01FD50)
#define JEMANAHCMPA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D01FB30)
#define JEMANAHCMPA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D01F7D0)
#define JEMANAHCMPA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D01F960)
#define JEMANAHCMPA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D01FBC0)
#define JEMANAHCMPA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D01F520)

inline static constexpr unsigned int JEMANAHCMPA_TypeDefinitionIndex = 14514;

	class JEMANAHCMPA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JEMANAHCMPA")->GetStaticField(0x2D2B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitSlotRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitSlotRow*>**)UnitySDK::FromName("", "JEMANAHCMPA")->GetStaticField(0x2D2B8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JEMANAHCMPA")->GetStaticField(0x2D2C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JEMANAHCMPA")->GetStaticField(0x9350);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JEMANAHCMPA")->GetStaticField(0x9351);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEMANAHCMPA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitSlotRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitSlotRow*>*(*)())((::PBYTE)hIl2Cpp + JEMANAHCMPA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEMANAHCMPA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitSlotRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitSlotRow*>(*)())((::PBYTE)hIl2Cpp + JEMANAHCMPA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerOutfitSlotRow* LMBKNCAIDLC(::RPG::GameCore::PlayerOutfitSlotType a1)
		{
			return ((::RPG::GameCore::PlayerOutfitSlotRow*(*)(::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + JEMANAHCMPA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEMANAHCMPA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEMANAHCMPA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEMANAHCMPA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JEMANAHCMPA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEMANAHCMPA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JEMANAHCMPA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerOutfitSlotRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerOutfitSlotRow*))((::PBYTE)hIl2Cpp + JEMANAHCMPA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
