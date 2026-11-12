#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRolePropertyConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMLEHEKEBMN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E3E5F00)
#define MMLEHEKEBMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E64D0)
#define MMLEHEKEBMN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E3E6070)
#define MMLEHEKEBMN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E3E5970)
#define MMLEHEKEBMN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3E5C00)
#define MMLEHEKEBMN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E3E6110)
#define MMLEHEKEBMN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E3E6160)
#define MMLEHEKEBMN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E3E5F40)
#define MMLEHEKEBMN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E3E5BA0)
#define MMLEHEKEBMN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E3E5D70)
#define MMLEHEKEBMN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E3E5FD0)
#define MMLEHEKEBMN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E3E58F0)

inline static constexpr unsigned int MMLEHEKEBMN_TypeDefinitionIndex = 13616;

	class MMLEHEKEBMN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0x439F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRolePropertyConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRolePropertyConfigRow*>**)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0x439F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0x43A00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0xE4B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0xE4B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMLEHEKEBMN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRolePropertyConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRolePropertyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MMLEHEKEBMN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMLEHEKEBMN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRolePropertyConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRolePropertyConfigRow*>(*)())((::PBYTE)hIl2Cpp + MMLEHEKEBMN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRolePropertyConfigRow* LMBKNCAIDLC(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::GridFightRolePropertyConfigRow*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + MMLEHEKEBMN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMLEHEKEBMN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMLEHEKEBMN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMLEHEKEBMN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MMLEHEKEBMN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMLEHEKEBMN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MMLEHEKEBMN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRolePropertyConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRolePropertyConfigRow*))((::PBYTE)hIl2Cpp + MMLEHEKEBMN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
