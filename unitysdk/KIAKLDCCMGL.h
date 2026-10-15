#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildShopRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIAKLDCCMGL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D096230)
#define KIAKLDCCMGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0967B0)
#define KIAKLDCCMGL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0963A0)
#define KIAKLDCCMGL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D095CE0)
#define KIAKLDCCMGL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D095F70)
#define KIAKLDCCMGL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D096440)
#define KIAKLDCCMGL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D096490)
#define KIAKLDCCMGL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D096270)
#define KIAKLDCCMGL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D095F10)
#define KIAKLDCCMGL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0960A0)
#define KIAKLDCCMGL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D096300)
#define KIAKLDCCMGL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D095C60)

inline static constexpr unsigned int KIAKLDCCMGL_TypeDefinitionIndex = 11426;

	class KIAKLDCCMGL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0x34F00);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0x34F08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildShopRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildShopRow*>**)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0x34F10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0xB1E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0xB1E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAKLDCCMGL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildShopRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildShopRow*>*(*)())((::PBYTE)hIl2Cpp + KIAKLDCCMGL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KIAKLDCCMGL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildShopRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildShopRow*>(*)())((::PBYTE)hIl2Cpp + KIAKLDCCMGL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildShopRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EvolveBuildShopRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KIAKLDCCMGL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KIAKLDCCMGL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAKLDCCMGL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAKLDCCMGL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KIAKLDCCMGL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KIAKLDCCMGL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KIAKLDCCMGL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::EvolveBuildShopRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildShopRow*))((::PBYTE)hIl2Cpp + KIAKLDCCMGL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
