#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightHandBookType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightHandBookRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDABAHEMKML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E1110)
#define CDABAHEMKML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E16E0)
#define CDABAHEMKML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E1280)
#define CDABAHEMKML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E0B80)
#define CDABAHEMKML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E0E10)
#define CDABAHEMKML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E1320)
#define CDABAHEMKML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E1370)
#define CDABAHEMKML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E1150)
#define CDABAHEMKML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E0DB0)
#define CDABAHEMKML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E0F80)
#define CDABAHEMKML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E11E0)
#define CDABAHEMKML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E0B00)

inline static constexpr unsigned int CDABAHEMKML_TypeDefinitionIndex = 13576;

	class CDABAHEMKML : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0x38F90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>**)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0x38F98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0x38FA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0xB870);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0xB871);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDABAHEMKML_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CDABAHEMKML_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDABAHEMKML_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>(*)())((::PBYTE)hIl2Cpp + CDABAHEMKML_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightHandBookRewardRow* LMBKNCAIDLC(::RPG::GameCore::GridFightHandBookType a1)
		{
			return ((::RPG::GameCore::GridFightHandBookRewardRow*(*)(::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + CDABAHEMKML_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDABAHEMKML_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDABAHEMKML_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDABAHEMKML_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CDABAHEMKML_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDABAHEMKML_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CDABAHEMKML_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightHandBookRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightHandBookRewardRow*))((::PBYTE)hIl2Cpp + CDABAHEMKML_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
