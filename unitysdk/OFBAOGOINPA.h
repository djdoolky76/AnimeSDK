#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEnemyMaterialMapRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFBAOGOINPA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D264D40)
#define OFBAOGOINPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D265340)
#define OFBAOGOINPA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D264EB0)
#define OFBAOGOINPA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D264770)
#define OFBAOGOINPA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D264A00)
#define OFBAOGOINPA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D264F50)
#define OFBAOGOINPA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D264FA0)
#define OFBAOGOINPA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D264D80)
#define OFBAOGOINPA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2649A0)
#define OFBAOGOINPA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D264B70)
#define OFBAOGOINPA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D264E10)
#define OFBAOGOINPA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2646F0)

	class OFBAOGOINPA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>**)UnitySDK::FromName("", "OFBAOGOINPA")->GetStaticField(0x33910);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OFBAOGOINPA")->GetStaticField(0x33918);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OFBAOGOINPA")->GetStaticField(0x33920);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OFBAOGOINPA")->GetStaticField(0xAD40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OFBAOGOINPA")->GetStaticField(0xAD41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFBAOGOINPA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>*(*)())((::PBYTE)hIl2Cpp + OFBAOGOINPA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFBAOGOINPA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>(*)())((::PBYTE)hIl2Cpp + OFBAOGOINPA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingEnemyMaterialMapRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ChenLingEnemyMaterialMapRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFBAOGOINPA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFBAOGOINPA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFBAOGOINPA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFBAOGOINPA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OFBAOGOINPA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFBAOGOINPA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OFBAOGOINPA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingEnemyMaterialMapRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingEnemyMaterialMapRow*))((::PBYTE)hIl2Cpp + OFBAOGOINPA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
