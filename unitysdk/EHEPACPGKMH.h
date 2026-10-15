#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PunkLordRewardFinishWayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHEPACPGKMH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD52A00)
#define EHEPACPGKMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD52FD0)
#define EHEPACPGKMH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD52B70)
#define EHEPACPGKMH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD52470)
#define EHEPACPGKMH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD52700)
#define EHEPACPGKMH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD52C10)
#define EHEPACPGKMH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD52C60)
#define EHEPACPGKMH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD52A40)
#define EHEPACPGKMH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD526A0)
#define EHEPACPGKMH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD52870)
#define EHEPACPGKMH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD52AD0)
#define EHEPACPGKMH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD523F0)

inline static constexpr unsigned int EHEPACPGKMH_TypeDefinitionIndex = 12298;

	class EHEPACPGKMH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>**)UnitySDK::FromName("", "EHEPACPGKMH")->GetStaticField(0x4D6A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EHEPACPGKMH")->GetStaticField(0x4D6A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EHEPACPGKMH")->GetStaticField(0x4D6B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EHEPACPGKMH")->GetStaticField(0x11B10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EHEPACPGKMH")->GetStaticField(0x11B11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHEPACPGKMH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>*(*)())((::PBYTE)hIl2Cpp + EHEPACPGKMH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHEPACPGKMH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>(*)())((::PBYTE)hIl2Cpp + EHEPACPGKMH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PunkLordRewardFinishWayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PunkLordRewardFinishWayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EHEPACPGKMH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHEPACPGKMH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHEPACPGKMH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHEPACPGKMH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EHEPACPGKMH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EHEPACPGKMH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EHEPACPGKMH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PunkLordRewardFinishWayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PunkLordRewardFinishWayRow*))((::PBYTE)hIl2Cpp + EHEPACPGKMH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
