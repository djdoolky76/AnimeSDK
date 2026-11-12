#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitElationTemplateConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOGJNAEPMJL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EBBA110)
#define BOGJNAEPMJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBBA6E0)
#define BOGJNAEPMJL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EBBA280)
#define BOGJNAEPMJL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EBB9B80)
#define BOGJNAEPMJL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EBB9E10)
#define BOGJNAEPMJL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EBBA320)
#define BOGJNAEPMJL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EBBA370)
#define BOGJNAEPMJL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EBBA150)
#define BOGJNAEPMJL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EBB9DB0)
#define BOGJNAEPMJL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EBB9F80)
#define BOGJNAEPMJL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EBBA1E0)
#define BOGJNAEPMJL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EBB9B00)

inline static constexpr unsigned int BOGJNAEPMJL_TypeDefinitionIndex = 13833;

	class BOGJNAEPMJL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow*>**)UnitySDK::FromName("", "BOGJNAEPMJL")->GetStaticField(0x4B180);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BOGJNAEPMJL")->GetStaticField(0x4B188);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BOGJNAEPMJL")->GetStaticField(0x4B190);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BOGJNAEPMJL")->GetStaticField(0xF450);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BOGJNAEPMJL")->GetStaticField(0xF451);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOGJNAEPMJL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BOGJNAEPMJL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOGJNAEPMJL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitElationTemplateConfigRow*>(*)())((::PBYTE)hIl2Cpp + BOGJNAEPMJL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitElationTemplateConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitElationTemplateConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BOGJNAEPMJL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOGJNAEPMJL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOGJNAEPMJL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOGJNAEPMJL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BOGJNAEPMJL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BOGJNAEPMJL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BOGJNAEPMJL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitElationTemplateConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitElationTemplateConfigRow*))((::PBYTE)hIl2Cpp + BOGJNAEPMJL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
