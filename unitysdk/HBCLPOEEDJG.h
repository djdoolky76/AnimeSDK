#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShareConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBCLPOEEDJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE55550)
#define HBCLPOEEDJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE55B50)
#define HBCLPOEEDJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE556C0)
#define HBCLPOEEDJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE54F80)
#define HBCLPOEEDJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE55210)
#define HBCLPOEEDJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE55760)
#define HBCLPOEEDJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE557B0)
#define HBCLPOEEDJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE55590)
#define HBCLPOEEDJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE551B0)
#define HBCLPOEEDJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE55380)
#define HBCLPOEEDJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE55620)
#define HBCLPOEEDJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE54F00)

inline static constexpr unsigned int HBCLPOEEDJG_TypeDefinitionIndex = 14492;

	class HBCLPOEEDJG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HBCLPOEEDJG")->GetStaticField(0x18B70);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HBCLPOEEDJG")->GetStaticField(0x18B78);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>**)UnitySDK::FromName("", "HBCLPOEEDJG")->GetStaticField(0x18B80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HBCLPOEEDJG")->GetStaticField(0x5520);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HBCLPOEEDJG")->GetStaticField(0x5521);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBCLPOEEDJG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HBCLPOEEDJG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBCLPOEEDJG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareConfigRow*>(*)())((::PBYTE)hIl2Cpp + HBCLPOEEDJG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ShareConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::ShareConfigRow*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + HBCLPOEEDJG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBCLPOEEDJG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBCLPOEEDJG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBCLPOEEDJG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HBCLPOEEDJG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBCLPOEEDJG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HBCLPOEEDJG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ShareConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ShareConfigRow*))((::PBYTE)hIl2Cpp + HBCLPOEEDJG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
