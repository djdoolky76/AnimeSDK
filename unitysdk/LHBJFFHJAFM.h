#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamSkinConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHBJFFHJAFM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F0610)
#define LHBJFFHJAFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F0B90)
#define LHBJFFHJAFM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F0780)
#define LHBJFFHJAFM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F00C0)
#define LHBJFFHJAFM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F0350)
#define LHBJFFHJAFM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F0820)
#define LHBJFFHJAFM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F0870)
#define LHBJFFHJAFM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F0650)
#define LHBJFFHJAFM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F02F0)
#define LHBJFFHJAFM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F0480)
#define LHBJFFHJAFM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F06E0)
#define LHBJFFHJAFM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F0040)

inline static constexpr unsigned int LHBJFFHJAFM_TypeDefinitionIndex = 14320;

	class LHBJFFHJAFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>**)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0x3D3F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0x3D3F8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0x3D400);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0xD200);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LHBJFFHJAFM")->GetStaticField(0xD201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PamSkinConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PamSkinConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHBJFFHJAFM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PamSkinConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PamSkinConfigRow*))((::PBYTE)hIl2Cpp + LHBJFFHJAFM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
