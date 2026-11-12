#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBuildingRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFOOGGGFAKF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DEE7BC0)
#define DFOOGGGFAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE8140)
#define DFOOGGGFAKF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DEE7D30)
#define DFOOGGGFAKF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DEE7670)
#define DFOOGGGFAKF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DEE7900)
#define DFOOGGGFAKF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DEE7DD0)
#define DFOOGGGFAKF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DEE7E20)
#define DFOOGGGFAKF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DEE7C00)
#define DFOOGGGFAKF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DEE78A0)
#define DFOOGGGFAKF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DEE7A70)
#define DFOOGGGFAKF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DEE7C90)
#define DFOOGGGFAKF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DEE75F0)

inline static constexpr unsigned int DFOOGGGFAKF_TypeDefinitionIndex = 11078;

	class DFOOGGGFAKF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DFOOGGGFAKF")->GetStaticField(0x3B8F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFOOGGGFAKF")->GetStaticField(0x3B8F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>**)UnitySDK::FromName("", "DFOOGGGFAKF")->GetStaticField(0x3B900);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFOOGGGFAKF")->GetStaticField(0xD1C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFOOGGGFAKF")->GetStaticField(0xD1C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFOOGGGFAKF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>*(*)())((::PBYTE)hIl2Cpp + DFOOGGGFAKF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFOOGGGFAKF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>(*)())((::PBYTE)hIl2Cpp + DFOOGGGFAKF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingBuildingRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingBuildingRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DFOOGGGFAKF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFOOGGGFAKF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFOOGGGFAKF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFOOGGGFAKF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFOOGGGFAKF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFOOGGGFAKF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DFOOGGGFAKF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingBuildingRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingBuildingRow*))((::PBYTE)hIl2Cpp + DFOOGGGFAKF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
