#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKDHEIBMFAC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1B84D0)
#define MKDHEIBMFAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B8AA0)
#define MKDHEIBMFAC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1B8640)
#define MKDHEIBMFAC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1B7F40)
#define MKDHEIBMFAC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1B81D0)
#define MKDHEIBMFAC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1B86E0)
#define MKDHEIBMFAC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1B8730)
#define MKDHEIBMFAC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1B8510)
#define MKDHEIBMFAC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1B8170)
#define MKDHEIBMFAC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1B8340)
#define MKDHEIBMFAC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1B85A0)
#define MKDHEIBMFAC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1B7EC0)

inline static constexpr unsigned int MKDHEIBMFAC_TypeDefinitionIndex = 11862;

	class MKDHEIBMFAC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MKDHEIBMFAC")->GetStaticField(0x4DC50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>**)UnitySDK::FromName("", "MKDHEIBMFAC")->GetStaticField(0x4DC58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MKDHEIBMFAC")->GetStaticField(0x4DC60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MKDHEIBMFAC")->GetStaticField(0x11EA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MKDHEIBMFAC")->GetStaticField(0x11EA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDHEIBMFAC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MKDHEIBMFAC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKDHEIBMFAC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + MKDHEIBMFAC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleSealGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleSealGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MKDHEIBMFAC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKDHEIBMFAC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDHEIBMFAC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDHEIBMFAC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MKDHEIBMFAC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MKDHEIBMFAC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MKDHEIBMFAC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleSealGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleSealGroupConfigRow*))((::PBYTE)hIl2Cpp + MKDHEIBMFAC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
