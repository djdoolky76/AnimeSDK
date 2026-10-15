#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialSDFRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBMBMFNJHBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD33230)
#define EBMBMFNJHBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD337B0)
#define EBMBMFNJHBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD333A0)
#define EBMBMFNJHBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD32CE0)
#define EBMBMFNJHBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD32F70)
#define EBMBMFNJHBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD33440)
#define EBMBMFNJHBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD33490)
#define EBMBMFNJHBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD33270)
#define EBMBMFNJHBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD32F10)
#define EBMBMFNJHBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD330E0)
#define EBMBMFNJHBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD33300)
#define EBMBMFNJHBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD32C60)

inline static constexpr unsigned int EBMBMFNJHBD_TypeDefinitionIndex = 13731;

	class EBMBMFNJHBD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EBMBMFNJHBD")->GetStaticField(0x4BDF0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EBMBMFNJHBD")->GetStaticField(0x4BDF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>**)UnitySDK::FromName("", "EBMBMFNJHBD")->GetStaticField(0x4BE00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EBMBMFNJHBD")->GetStaticField(0x11530);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EBMBMFNJHBD")->GetStaticField(0x11531);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMBMFNJHBD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>*(*)())((::PBYTE)hIl2Cpp + EBMBMFNJHBD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBMBMFNJHBD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>(*)())((::PBYTE)hIl2Cpp + EBMBMFNJHBD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialSDFRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialSDFRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EBMBMFNJHBD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBMBMFNJHBD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMBMFNJHBD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMBMFNJHBD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EBMBMFNJHBD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBMBMFNJHBD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EBMBMFNJHBD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeartDialSDFRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialSDFRow*))((::PBYTE)hIl2Cpp + EBMBMFNJHBD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
