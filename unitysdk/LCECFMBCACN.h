#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpEquipSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCECFMBCACN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0AA440)
#define LCECFMBCACN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0AAA40)
#define LCECFMBCACN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0AA5B0)
#define LCECFMBCACN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0A9E70)
#define LCECFMBCACN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0AA100)
#define LCECFMBCACN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0AA650)
#define LCECFMBCACN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0AA6A0)
#define LCECFMBCACN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0AA480)
#define LCECFMBCACN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0AA0A0)
#define LCECFMBCACN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0AA270)
#define LCECFMBCACN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0AA510)
#define LCECFMBCACN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0A9DF0)

inline static constexpr unsigned int LCECFMBCACN_TypeDefinitionIndex = 11765;

	class LCECFMBCACN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSkillRow*>**)UnitySDK::FromName("", "LCECFMBCACN")->GetStaticField(0x39E40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LCECFMBCACN")->GetStaticField(0x39E48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LCECFMBCACN")->GetStaticField(0x39E50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LCECFMBCACN")->GetStaticField(0xBB70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LCECFMBCACN")->GetStaticField(0xBB71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCECFMBCACN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSkillRow*>*(*)())((::PBYTE)hIl2Cpp + LCECFMBCACN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LCECFMBCACN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSkillRow*>(*)())((::PBYTE)hIl2Cpp + LCECFMBCACN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpEquipSkillRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::IdleLiveSpEquipSkillRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LCECFMBCACN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LCECFMBCACN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCECFMBCACN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCECFMBCACN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LCECFMBCACN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LCECFMBCACN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LCECFMBCACN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpEquipSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpEquipSkillRow*))((::PBYTE)hIl2Cpp + LCECFMBCACN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
