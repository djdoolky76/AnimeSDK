#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MGDPMNHPBOC;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIIDDEDEBBK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D283ED0)
#define OIIDDEDEBBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D284A20)
#define OIIDDEDEBBK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D284270)
#define OIIDDEDEBBK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D283F10)
#define OIIDDEDEBBK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D284760)
#define OIIDDEDEBBK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D284310)
#define OIIDDEDEBBK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D284360)
#define OIIDDEDEBBK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D284140)
#define OIIDDEDEBBK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D284700)
#define OIIDDEDEBBK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2848D0)
#define OIIDDEDEBBK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2841D0)
#define OIIDDEDEBBK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D284680)

inline static constexpr unsigned int OIIDDEDEBBK_TypeDefinitionIndex = 15409;

	class OIIDDEDEBBK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OIIDDEDEBBK")->GetStaticField(0x37480);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OIIDDEDEBBK")->GetStaticField(0x37488);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGDPMNHPBOC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGDPMNHPBOC*>**)UnitySDK::FromName("", "OIIDDEDEBBK")->GetStaticField(0x37490);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OIIDDEDEBBK")->GetStaticField(0xBB90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OIIDDEDEBBK")->GetStaticField(0xBB91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIIDDEDEBBK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIIDDEDEBBK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIIDDEDEBBK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIIDDEDEBBK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OIIDDEDEBBK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OIIDDEDEBBK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OIIDDEDEBBK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MGDPMNHPBOC* a1)
		{
			return ((::System::Void(*)(::MGDPMNHPBOC*))((::PBYTE)hIl2Cpp + OIIDDEDEBBK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGDPMNHPBOC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MGDPMNHPBOC*>*(*)())((::PBYTE)hIl2Cpp + OIIDDEDEBBK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIIDDEDEBBK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGDPMNHPBOC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MGDPMNHPBOC*>(*)())((::PBYTE)hIl2Cpp + OIIDDEDEBBK_FPHGMAMDFHE_OFFSET))();
		}

		static ::MGDPMNHPBOC* LMBKNCAIDLC(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::MGDPMNHPBOC*(*)(::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + OIIDDEDEBBK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
