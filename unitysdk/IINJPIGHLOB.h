#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooCatteryRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IINJPIGHLOB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF16F60)
#define IINJPIGHLOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF17690)
#define IINJPIGHLOB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF170D0)
#define IINJPIGHLOB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF169D0)
#define IINJPIGHLOB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF16C60)
#define IINJPIGHLOB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF17170)
#define IINJPIGHLOB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF171C0)
#define IINJPIGHLOB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF16FA0)
#define IINJPIGHLOB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF16C00)
#define IINJPIGHLOB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF16DD0)
#define IINJPIGHLOB_OOAMBOKBHAJ_OFFSET UNITYSDK_OFFSET(0x1CF17530)
#define IINJPIGHLOB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF17030)
#define IINJPIGHLOB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF16950)

inline static constexpr unsigned int IINJPIGHLOB_TypeDefinitionIndex = 12376;

	class IINJPIGHLOB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IINJPIGHLOB")->GetStaticField(0x23B50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCatteryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCatteryRow*>**)UnitySDK::FromName("", "IINJPIGHLOB")->GetStaticField(0x23B58);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IINJPIGHLOB")->GetStaticField(0x23B60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IINJPIGHLOB")->GetStaticField(0x7E70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IINJPIGHLOB")->GetStaticField(0x7E71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IINJPIGHLOB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCatteryRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCatteryRow*>*(*)())((::PBYTE)hIl2Cpp + IINJPIGHLOB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IINJPIGHLOB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCatteryRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCatteryRow*>(*)())((::PBYTE)hIl2Cpp + IINJPIGHLOB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooCatteryRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooCatteryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IINJPIGHLOB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IINJPIGHLOB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IINJPIGHLOB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IINJPIGHLOB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IINJPIGHLOB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IINJPIGHLOB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IINJPIGHLOB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SpaceZooCatteryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooCatteryRow*))((::PBYTE)hIl2Cpp + IINJPIGHLOB_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::UInt32 OOAMBOKBHAJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IINJPIGHLOB_OOAMBOKBHAJ_OFFSET))(a1, a2, a3);
		}

	};
