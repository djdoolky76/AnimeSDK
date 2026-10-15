#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournWorkbenchRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAFBHMOFNBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE1F2A0)
#define GAFBHMOFNBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE1F870)
#define GAFBHMOFNBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE1F410)
#define GAFBHMOFNBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE1ED10)
#define GAFBHMOFNBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE1EFA0)
#define GAFBHMOFNBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE1F4B0)
#define GAFBHMOFNBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE1F500)
#define GAFBHMOFNBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE1F2E0)
#define GAFBHMOFNBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE1EF40)
#define GAFBHMOFNBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE1F110)
#define GAFBHMOFNBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE1F370)
#define GAFBHMOFNBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE1EC90)

	class GAFBHMOFNBI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>**)UnitySDK::FromName("", "GAFBHMOFNBI")->GetStaticField(0x15730);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GAFBHMOFNBI")->GetStaticField(0x15738);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GAFBHMOFNBI")->GetStaticField(0x15740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GAFBHMOFNBI")->GetStaticField(0x5200);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GAFBHMOFNBI")->GetStaticField(0x5201);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAFBHMOFNBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>*(*)())((::PBYTE)hIl2Cpp + GAFBHMOFNBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GAFBHMOFNBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>(*)())((::PBYTE)hIl2Cpp + GAFBHMOFNBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournWorkbenchRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournWorkbenchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GAFBHMOFNBI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GAFBHMOFNBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAFBHMOFNBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAFBHMOFNBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GAFBHMOFNBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GAFBHMOFNBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GAFBHMOFNBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournWorkbenchRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournWorkbenchRow*))((::PBYTE)hIl2Cpp + GAFBHMOFNBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
