#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightHandBookType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightHandBookRewardRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDABAHEMKML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA0E9B0)
#define CDABAHEMKML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA0EF80)
#define CDABAHEMKML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA0EB20)
#define CDABAHEMKML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA0E420)
#define CDABAHEMKML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA0E6B0)
#define CDABAHEMKML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA0EBC0)
#define CDABAHEMKML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA0EC10)
#define CDABAHEMKML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA0E9F0)
#define CDABAHEMKML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA0E650)
#define CDABAHEMKML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA0E820)
#define CDABAHEMKML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA0EA80)
#define CDABAHEMKML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA0E3A0)

inline static constexpr unsigned int CDABAHEMKML_TypeDefinitionIndex = 13576;

	class CDABAHEMKML : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>**)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0x3BBB0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0x3BBB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0x3BBC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0xCB60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CDABAHEMKML")->GetStaticField(0xCB61);
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
