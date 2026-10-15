#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AtlasUnlockTextmapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKKKPMFEJDG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D016140)
#define JKKKPMFEJDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D016710)
#define JKKKPMFEJDG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0162B0)
#define JKKKPMFEJDG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D015BB0)
#define JKKKPMFEJDG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D015E40)
#define JKKKPMFEJDG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D016350)
#define JKKKPMFEJDG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0163A0)
#define JKKKPMFEJDG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D016180)
#define JKKKPMFEJDG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D015DE0)
#define JKKKPMFEJDG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D015FB0)
#define JKKKPMFEJDG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D016210)
#define JKKKPMFEJDG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D015B30)

inline static constexpr unsigned int JKKKPMFEJDG_TypeDefinitionIndex = 12691;

	class JKKKPMFEJDG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JKKKPMFEJDG")->GetStaticField(0x2F570);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JKKKPMFEJDG")->GetStaticField(0x2F578);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasUnlockTextmapRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasUnlockTextmapRow*>**)UnitySDK::FromName("", "JKKKPMFEJDG")->GetStaticField(0x2F580);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JKKKPMFEJDG")->GetStaticField(0x9BD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JKKKPMFEJDG")->GetStaticField(0x9BD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKKKPMFEJDG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasUnlockTextmapRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasUnlockTextmapRow*>*(*)())((::PBYTE)hIl2Cpp + JKKKPMFEJDG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKKKPMFEJDG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasUnlockTextmapRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasUnlockTextmapRow*>(*)())((::PBYTE)hIl2Cpp + JKKKPMFEJDG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AtlasUnlockTextmapRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AtlasUnlockTextmapRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JKKKPMFEJDG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKKKPMFEJDG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKKKPMFEJDG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKKKPMFEJDG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JKKKPMFEJDG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKKKPMFEJDG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JKKKPMFEJDG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AtlasUnlockTextmapRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AtlasUnlockTextmapRow*))((::PBYTE)hIl2Cpp + JKKKPMFEJDG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
