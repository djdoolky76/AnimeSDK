#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class APHPOEGLLNJ;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPICEEEIBMD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2ED4B0)
#define PPICEEEIBMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2EDA30)
#define PPICEEEIBMD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2ED620)
#define PPICEEEIBMD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2ECF60)
#define PPICEEEIBMD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2ED1F0)
#define PPICEEEIBMD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2ED6C0)
#define PPICEEEIBMD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2ED710)
#define PPICEEEIBMD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2ED4F0)
#define PPICEEEIBMD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2ED190)
#define PPICEEEIBMD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2ED320)
#define PPICEEEIBMD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2ED580)
#define PPICEEEIBMD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2ECEE0)

inline static constexpr unsigned int PPICEEEIBMD_TypeDefinitionIndex = 11486;

	class PPICEEEIBMD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PPICEEEIBMD")->GetStaticField(0x529F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::APHPOEGLLNJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::APHPOEGLLNJ*>**)UnitySDK::FromName("", "PPICEEEIBMD")->GetStaticField(0x529F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PPICEEEIBMD")->GetStaticField(0x52A00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PPICEEEIBMD")->GetStaticField(0x128D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PPICEEEIBMD")->GetStaticField(0x128D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPICEEEIBMD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::APHPOEGLLNJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::APHPOEGLLNJ*>*(*)())((::PBYTE)hIl2Cpp + PPICEEEIBMD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPICEEEIBMD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::APHPOEGLLNJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::APHPOEGLLNJ*>(*)())((::PBYTE)hIl2Cpp + PPICEEEIBMD_FPHGMAMDFHE_OFFSET))();
		}

		static ::APHPOEGLLNJ* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::APHPOEGLLNJ*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPICEEEIBMD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPICEEEIBMD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPICEEEIBMD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPICEEEIBMD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PPICEEEIBMD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PPICEEEIBMD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PPICEEEIBMD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::APHPOEGLLNJ* a1)
		{
			return ((::System::Void(*)(::APHPOEGLLNJ*))((::PBYTE)hIl2Cpp + PPICEEEIBMD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
