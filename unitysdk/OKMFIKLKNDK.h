#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitEquipRelationConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKMFIKLKNDK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D267120)
#define OKMFIKLKNDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2676A0)
#define OKMFIKLKNDK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D267290)
#define OKMFIKLKNDK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D266BD0)
#define OKMFIKLKNDK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D266E60)
#define OKMFIKLKNDK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D267330)
#define OKMFIKLKNDK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D267380)
#define OKMFIKLKNDK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D267160)
#define OKMFIKLKNDK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D266E00)
#define OKMFIKLKNDK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D266F90)
#define OKMFIKLKNDK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2671F0)
#define OKMFIKLKNDK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D266B50)

inline static constexpr unsigned int OKMFIKLKNDK_TypeDefinitionIndex = 13468;

	class OKMFIKLKNDK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OKMFIKLKNDK")->GetStaticField(0x498A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow*>**)UnitySDK::FromName("", "OKMFIKLKNDK")->GetStaticField(0x498A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OKMFIKLKNDK")->GetStaticField(0x498B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OKMFIKLKNDK")->GetStaticField(0x10F80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OKMFIKLKNDK")->GetStaticField(0x10F81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKMFIKLKNDK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OKMFIKLKNDK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKMFIKLKNDK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow*>(*)())((::PBYTE)hIl2Cpp + OKMFIKLKNDK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitEquipRelationConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitEquipRelationConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OKMFIKLKNDK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKMFIKLKNDK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKMFIKLKNDK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKMFIKLKNDK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OKMFIKLKNDK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKMFIKLKNDK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OKMFIKLKNDK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitEquipRelationConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitEquipRelationConfigRow*))((::PBYTE)hIl2Cpp + OKMFIKLKNDK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
