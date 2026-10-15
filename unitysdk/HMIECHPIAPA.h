#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournBuffGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMIECHPIAPA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE98240)
#define HMIECHPIAPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE987C0)
#define HMIECHPIAPA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE983B0)
#define HMIECHPIAPA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE97CF0)
#define HMIECHPIAPA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE97F80)
#define HMIECHPIAPA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE98450)
#define HMIECHPIAPA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE984A0)
#define HMIECHPIAPA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE98280)
#define HMIECHPIAPA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE97F20)
#define HMIECHPIAPA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE980B0)
#define HMIECHPIAPA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE98310)
#define HMIECHPIAPA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE97C70)

inline static constexpr unsigned int HMIECHPIAPA_TypeDefinitionIndex = 15016;

	class HMIECHPIAPA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HMIECHPIAPA")->GetStaticField(0x1D0E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HMIECHPIAPA")->GetStaticField(0x1D0E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffGroupRow*>**)UnitySDK::FromName("", "HMIECHPIAPA")->GetStaticField(0x1D0F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMIECHPIAPA")->GetStaticField(0x63F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HMIECHPIAPA")->GetStaticField(0x63F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMIECHPIAPA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffGroupRow*>*(*)())((::PBYTE)hIl2Cpp + HMIECHPIAPA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMIECHPIAPA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffGroupRow*>(*)())((::PBYTE)hIl2Cpp + HMIECHPIAPA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournBuffGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournBuffGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HMIECHPIAPA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMIECHPIAPA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMIECHPIAPA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMIECHPIAPA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HMIECHPIAPA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMIECHPIAPA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HMIECHPIAPA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournBuffGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournBuffGroupRow*))((::PBYTE)hIl2Cpp + HMIECHPIAPA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
