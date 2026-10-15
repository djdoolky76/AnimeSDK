#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleCustomActionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHAODAAEHOK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0EF920)
#define LHAODAAEHOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EFEF0)
#define LHAODAAEHOK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0EFA90)
#define LHAODAAEHOK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0EF390)
#define LHAODAAEHOK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0EF620)
#define LHAODAAEHOK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0EFB30)
#define LHAODAAEHOK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0EFB80)
#define LHAODAAEHOK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0EF960)
#define LHAODAAEHOK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0EF5C0)
#define LHAODAAEHOK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0EF790)
#define LHAODAAEHOK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0EF9F0)
#define LHAODAAEHOK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0EF310)

inline static constexpr unsigned int LHAODAAEHOK_TypeDefinitionIndex = 11893;

	class LHAODAAEHOK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LHAODAAEHOK")->GetStaticField(0x3D320);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LHAODAAEHOK")->GetStaticField(0x3D328);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleCustomActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleCustomActionRow*>**)UnitySDK::FromName("", "LHAODAAEHOK")->GetStaticField(0x3D330);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LHAODAAEHOK")->GetStaticField(0xD1E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LHAODAAEHOK")->GetStaticField(0xD1E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHAODAAEHOK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleCustomActionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleCustomActionRow*>*(*)())((::PBYTE)hIl2Cpp + LHAODAAEHOK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHAODAAEHOK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleCustomActionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleCustomActionRow*>(*)())((::PBYTE)hIl2Cpp + LHAODAAEHOK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleCustomActionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleCustomActionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LHAODAAEHOK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LHAODAAEHOK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHAODAAEHOK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHAODAAEHOK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LHAODAAEHOK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHAODAAEHOK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LHAODAAEHOK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleCustomActionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleCustomActionRow*))((::PBYTE)hIl2Cpp + LHAODAAEHOK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
