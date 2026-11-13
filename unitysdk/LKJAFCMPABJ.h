#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionMaterialRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKJAFCMPABJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E403DE0)
#define LKJAFCMPABJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E404930)
#define LKJAFCMPABJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E404180)
#define LKJAFCMPABJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E403E20)
#define LKJAFCMPABJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E404670)
#define LKJAFCMPABJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E404220)
#define LKJAFCMPABJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E404270)
#define LKJAFCMPABJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E404050)
#define LKJAFCMPABJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E404610)
#define LKJAFCMPABJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4047A0)
#define LKJAFCMPABJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E4040E0)
#define LKJAFCMPABJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E404590)

inline static constexpr unsigned int LKJAFCMPABJ_TypeDefinitionIndex = 15322;

	class LKJAFCMPABJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialRow*>**)UnitySDK::FromName("", "LKJAFCMPABJ")->GetStaticField(0x3BA60);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LKJAFCMPABJ")->GetStaticField(0x3BA68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LKJAFCMPABJ")->GetStaticField(0x3BA70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LKJAFCMPABJ")->GetStaticField(0xBE20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LKJAFCMPABJ")->GetStaticField(0xBE21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKJAFCMPABJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKJAFCMPABJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKJAFCMPABJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKJAFCMPABJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LKJAFCMPABJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKJAFCMPABJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LKJAFCMPABJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageInvasionMaterialRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInvasionMaterialRow*))((::PBYTE)hIl2Cpp + LKJAFCMPABJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialRow*>*(*)())((::PBYTE)hIl2Cpp + LKJAFCMPABJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKJAFCMPABJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionMaterialRow*>(*)())((::PBYTE)hIl2Cpp + LKJAFCMPABJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageInvasionMaterialRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionMaterialRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LKJAFCMPABJ_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
