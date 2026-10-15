#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SceneTVMenuDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBMAKNMFPHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD32590)
#define EBMAKNMFPHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD32B10)
#define EBMAKNMFPHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD32700)
#define EBMAKNMFPHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD32080)
#define EBMAKNMFPHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD32310)
#define EBMAKNMFPHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD327A0)
#define EBMAKNMFPHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD327F0)
#define EBMAKNMFPHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD325D0)
#define EBMAKNMFPHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD322B0)
#define EBMAKNMFPHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD32440)
#define EBMAKNMFPHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD32660)
#define EBMAKNMFPHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD32000)

inline static constexpr unsigned int EBMAKNMFPHO_TypeDefinitionIndex = 14563;

	class EBMAKNMFPHO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>**)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x4BC50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x4BC58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x4BC60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x11510);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EBMAKNMFPHO")->GetStaticField(0x11511);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>*(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SceneTVMenuDataRow*>(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SceneTVMenuDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SceneTVMenuDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMAKNMFPHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SceneTVMenuDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SceneTVMenuDataRow*))((::PBYTE)hIl2Cpp + EBMAKNMFPHO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
