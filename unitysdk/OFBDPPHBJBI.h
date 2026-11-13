#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFBDPPHBJBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E611890)
#define OFBDPPHBJBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E611E60)
#define OFBDPPHBJBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E611A00)
#define OFBDPPHBJBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E611300)
#define OFBDPPHBJBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E611590)
#define OFBDPPHBJBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E611AA0)
#define OFBDPPHBJBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E611AF0)
#define OFBDPPHBJBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6118D0)
#define OFBDPPHBJBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E611530)
#define OFBDPPHBJBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E611700)
#define OFBDPPHBJBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E611960)
#define OFBDPPHBJBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E611280)

inline static constexpr unsigned int OFBDPPHBJBI_TypeDefinitionIndex = 11498;

	class OFBDPPHBJBI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleLevelConfigRow*>**)UnitySDK::FromName("", "OFBDPPHBJBI")->GetStaticField(0x564C0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OFBDPPHBJBI")->GetStaticField(0x564C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OFBDPPHBJBI")->GetStaticField(0x564D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OFBDPPHBJBI")->GetStaticField(0x12690);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OFBDPPHBJBI")->GetStaticField(0x12691);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFBDPPHBJBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleLevelConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OFBDPPHBJBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFBDPPHBJBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleLevelConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionBattleLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + OFBDPPHBJBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionBattleLevelConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ExpeditionBattleLevelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OFBDPPHBJBI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFBDPPHBJBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFBDPPHBJBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFBDPPHBJBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OFBDPPHBJBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFBDPPHBJBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OFBDPPHBJBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ExpeditionBattleLevelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionBattleLevelConfigRow*))((::PBYTE)hIl2Cpp + OFBDPPHBJBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
