#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEquipTagConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOBGDAPPONK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2A7EB0)
#define OOBGDAPPONK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A8480)
#define OOBGDAPPONK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2A8020)
#define OOBGDAPPONK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2A7920)
#define OOBGDAPPONK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2A7BB0)
#define OOBGDAPPONK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2A80C0)
#define OOBGDAPPONK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2A8110)
#define OOBGDAPPONK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2A7EF0)
#define OOBGDAPPONK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2A7B50)
#define OOBGDAPPONK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2A7D20)
#define OOBGDAPPONK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2A7F80)
#define OOBGDAPPONK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2A78A0)

inline static constexpr unsigned int OOBGDAPPONK_TypeDefinitionIndex = 13464;

	class OOBGDAPPONK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OOBGDAPPONK")->GetStaticField(0x3AC10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>**)UnitySDK::FromName("", "OOBGDAPPONK")->GetStaticField(0x3AC18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOBGDAPPONK")->GetStaticField(0x3AC20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOBGDAPPONK")->GetStaticField(0xC830);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOBGDAPPONK")->GetStaticField(0xC831);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOBGDAPPONK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OOBGDAPPONK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOBGDAPPONK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipTagConfigRow*>(*)())((::PBYTE)hIl2Cpp + OOBGDAPPONK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightEquipTagConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightEquipTagConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OOBGDAPPONK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOBGDAPPONK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOBGDAPPONK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOBGDAPPONK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OOBGDAPPONK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOBGDAPPONK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OOBGDAPPONK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightEquipTagConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightEquipTagConfigRow*))((::PBYTE)hIl2Cpp + OOBGDAPPONK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
