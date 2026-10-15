#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildShopRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIAKLDCCMGL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0682F0)
#define KIAKLDCCMGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D068870)
#define KIAKLDCCMGL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D068460)
#define KIAKLDCCMGL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D067DA0)
#define KIAKLDCCMGL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D068030)
#define KIAKLDCCMGL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D068500)
#define KIAKLDCCMGL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D068550)
#define KIAKLDCCMGL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D068330)
#define KIAKLDCCMGL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D067FD0)
#define KIAKLDCCMGL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D068160)
#define KIAKLDCCMGL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0683C0)
#define KIAKLDCCMGL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D067D20)

inline static constexpr unsigned int KIAKLDCCMGL_TypeDefinitionIndex = 11426;

	class KIAKLDCCMGL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildShopRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildShopRow*>**)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0x34B30);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0x34B38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0x34B40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0xAA80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KIAKLDCCMGL")->GetStaticField(0xAA81);
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
