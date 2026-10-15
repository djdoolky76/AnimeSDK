#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraMotionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKHOLDALLCL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEEE050)
#define IKHOLDALLCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEEE620)
#define IKHOLDALLCL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEEE1C0)
#define IKHOLDALLCL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEEDAC0)
#define IKHOLDALLCL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEEDD50)
#define IKHOLDALLCL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEEE260)
#define IKHOLDALLCL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEEE2B0)
#define IKHOLDALLCL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEEE090)
#define IKHOLDALLCL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEEDCF0)
#define IKHOLDALLCL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEEDEC0)
#define IKHOLDALLCL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEEE120)
#define IKHOLDALLCL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEEDA40)

inline static constexpr unsigned int IKHOLDALLCL_TypeDefinitionIndex = 13039;

	class IKHOLDALLCL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IKHOLDALLCL")->GetStaticField(0x233F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IKHOLDALLCL")->GetStaticField(0x233F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>**)UnitySDK::FromName("", "IKHOLDALLCL")->GetStaticField(0x23400);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IKHOLDALLCL")->GetStaticField(0x7A00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IKHOLDALLCL")->GetStaticField(0x7A01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHOLDALLCL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>*(*)())((::PBYTE)hIl2Cpp + IKHOLDALLCL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKHOLDALLCL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>(*)())((::PBYTE)hIl2Cpp + IKHOLDALLCL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraMotionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraMotionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IKHOLDALLCL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKHOLDALLCL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHOLDALLCL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHOLDALLCL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IKHOLDALLCL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKHOLDALLCL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IKHOLDALLCL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraMotionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraMotionRow*))((::PBYTE)hIl2Cpp + IKHOLDALLCL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
