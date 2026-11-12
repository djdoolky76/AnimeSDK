#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightElationEquipDescConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JAGDIBJFLEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E11B350)
#define JAGDIBJFLEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11B920)
#define JAGDIBJFLEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E11B4C0)
#define JAGDIBJFLEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E11ADC0)
#define JAGDIBJFLEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E11B050)
#define JAGDIBJFLEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E11B560)
#define JAGDIBJFLEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E11B5B0)
#define JAGDIBJFLEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E11B390)
#define JAGDIBJFLEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E11AFF0)
#define JAGDIBJFLEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E11B1C0)
#define JAGDIBJFLEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E11B420)
#define JAGDIBJFLEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E11AD40)

inline static constexpr unsigned int JAGDIBJFLEE_TypeDefinitionIndex = 13546;

	class JAGDIBJFLEE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JAGDIBJFLEE")->GetStaticField(0x1DA30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JAGDIBJFLEE")->GetStaticField(0x1DA38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationEquipDescConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationEquipDescConfigRow*>**)UnitySDK::FromName("", "JAGDIBJFLEE")->GetStaticField(0x1DA40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JAGDIBJFLEE")->GetStaticField(0x6700);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JAGDIBJFLEE")->GetStaticField(0x6701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAGDIBJFLEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationEquipDescConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationEquipDescConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JAGDIBJFLEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JAGDIBJFLEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationEquipDescConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationEquipDescConfigRow*>(*)())((::PBYTE)hIl2Cpp + JAGDIBJFLEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightElationEquipDescConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightElationEquipDescConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JAGDIBJFLEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JAGDIBJFLEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAGDIBJFLEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAGDIBJFLEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JAGDIBJFLEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JAGDIBJFLEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JAGDIBJFLEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightElationEquipDescConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightElationEquipDescConfigRow*))((::PBYTE)hIl2Cpp + JAGDIBJFLEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
