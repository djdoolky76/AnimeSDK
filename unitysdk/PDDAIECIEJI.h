#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleStarConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDDAIECIEJI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E70B6A0)
#define PDDAIECIEJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70BCB0)
#define PDDAIECIEJI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E70B810)
#define PDDAIECIEJI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E70B0D0)
#define PDDAIECIEJI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E70B360)
#define PDDAIECIEJI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E70B8B0)
#define PDDAIECIEJI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E70B900)
#define PDDAIECIEJI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E70B6E0)
#define PDDAIECIEJI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E70B300)
#define PDDAIECIEJI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E70B4D0)
#define PDDAIECIEJI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E70B770)
#define PDDAIECIEJI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E70B050)

inline static constexpr unsigned int PDDAIECIEJI_TypeDefinitionIndex = 13601;

	class PDDAIECIEJI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PDDAIECIEJI")->GetStaticField(0x3E210);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleStarConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleStarConfigRow*>**)UnitySDK::FromName("", "PDDAIECIEJI")->GetStaticField(0x3E218);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PDDAIECIEJI")->GetStaticField(0x3E220);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PDDAIECIEJI")->GetStaticField(0xC670);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PDDAIECIEJI")->GetStaticField(0xC671);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDAIECIEJI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleStarConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleStarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PDDAIECIEJI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDDAIECIEJI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleStarConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleStarConfigRow*>(*)())((::PBYTE)hIl2Cpp + PDDAIECIEJI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleStarConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightRoleStarConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PDDAIECIEJI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDDAIECIEJI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDAIECIEJI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDAIECIEJI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PDDAIECIEJI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDDAIECIEJI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PDDAIECIEJI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleStarConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleStarConfigRow*))((::PBYTE)hIl2Cpp + PDDAIECIEJI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
