#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PenaconyEndmostChronicleMissionPackRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAINIACAFCG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEDA4B0)
#define IAINIACAFCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEDAA30)
#define IAINIACAFCG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEDA620)
#define IAINIACAFCG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CED9F60)
#define IAINIACAFCG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEDA1F0)
#define IAINIACAFCG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEDA6C0)
#define IAINIACAFCG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEDA710)
#define IAINIACAFCG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEDA4F0)
#define IAINIACAFCG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEDA190)
#define IAINIACAFCG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEDA360)
#define IAINIACAFCG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEDA580)
#define IAINIACAFCG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CED9EE0)

inline static constexpr unsigned int IAINIACAFCG_TypeDefinitionIndex = 14130;

	class IAINIACAFCG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IAINIACAFCG")->GetStaticField(0x20890);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IAINIACAFCG")->GetStaticField(0x20898);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*>**)UnitySDK::FromName("", "IAINIACAFCG")->GetStaticField(0x208A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IAINIACAFCG")->GetStaticField(0x7670);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IAINIACAFCG")->GetStaticField(0x7671);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAINIACAFCG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*>*(*)())((::PBYTE)hIl2Cpp + IAINIACAFCG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IAINIACAFCG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*>(*)())((::PBYTE)hIl2Cpp + IAINIACAFCG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IAINIACAFCG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IAINIACAFCG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAINIACAFCG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAINIACAFCG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IAINIACAFCG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAINIACAFCG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IAINIACAFCG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*))((::PBYTE)hIl2Cpp + IAINIACAFCG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
