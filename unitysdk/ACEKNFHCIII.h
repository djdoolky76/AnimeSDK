#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSubAffixBaseValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACEKNFHCIII_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCA47F0)
#define ACEKNFHCIII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCA4DC0)
#define ACEKNFHCIII_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCA4960)
#define ACEKNFHCIII_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCA4260)
#define ACEKNFHCIII_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCA44F0)
#define ACEKNFHCIII_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCA4A00)
#define ACEKNFHCIII_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCA4A50)
#define ACEKNFHCIII_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCA4830)
#define ACEKNFHCIII_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCA4490)
#define ACEKNFHCIII_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCA4660)
#define ACEKNFHCIII_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCA48C0)
#define ACEKNFHCIII_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCA41E0)

inline static constexpr unsigned int ACEKNFHCIII_TypeDefinitionIndex = 10882;

	class ACEKNFHCIII : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>**)UnitySDK::FromName("", "ACEKNFHCIII")->GetStaticField(0x36680);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ACEKNFHCIII")->GetStaticField(0x36688);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ACEKNFHCIII")->GetStaticField(0x36690);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ACEKNFHCIII")->GetStaticField(0xB770);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ACEKNFHCIII")->GetStaticField(0xB771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACEKNFHCIII_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>*(*)())((::PBYTE)hIl2Cpp + ACEKNFHCIII_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACEKNFHCIII_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixBaseValueRow*>(*)())((::PBYTE)hIl2Cpp + ACEKNFHCIII_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RelicSubAffixBaseValueRow* LMBKNCAIDLC(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::RelicSubAffixBaseValueRow*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + ACEKNFHCIII_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACEKNFHCIII_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACEKNFHCIII_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACEKNFHCIII_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ACEKNFHCIII_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACEKNFHCIII_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ACEKNFHCIII_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RelicSubAffixBaseValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicSubAffixBaseValueRow*))((::PBYTE)hIl2Cpp + ACEKNFHCIII_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
