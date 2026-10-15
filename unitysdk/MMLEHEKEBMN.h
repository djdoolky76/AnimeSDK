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

#define MMLEHEKEBMN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1A4540)
#define MMLEHEKEBMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1A4B10)
#define MMLEHEKEBMN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1A46B0)
#define MMLEHEKEBMN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1A3FB0)
#define MMLEHEKEBMN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1A4240)
#define MMLEHEKEBMN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1A4750)
#define MMLEHEKEBMN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1A47A0)
#define MMLEHEKEBMN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1A4580)
#define MMLEHEKEBMN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1A41E0)
#define MMLEHEKEBMN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1A43B0)
#define MMLEHEKEBMN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1A4610)
#define MMLEHEKEBMN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1A3F30)

inline static constexpr unsigned int MMLEHEKEBMN_TypeDefinitionIndex = 13521;

	class MMLEHEKEBMN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRolePropertyConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRolePropertyConfigRow*>**)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0x3C250);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0x3C258);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0x3C260);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0xC060);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MMLEHEKEBMN")->GetStaticField(0xC061);
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
