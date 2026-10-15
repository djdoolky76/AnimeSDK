#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleGameRefConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PILDOAAEBNK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2F1570)
#define PILDOAAEBNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F1B40)
#define PILDOAAEBNK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2F16E0)
#define PILDOAAEBNK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2F0FE0)
#define PILDOAAEBNK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2F1270)
#define PILDOAAEBNK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2F1780)
#define PILDOAAEBNK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2F17D0)
#define PILDOAAEBNK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2F15B0)
#define PILDOAAEBNK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2F1210)
#define PILDOAAEBNK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2F13E0)
#define PILDOAAEBNK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2F1640)
#define PILDOAAEBNK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2F0F60)

	class PILDOAAEBNK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PILDOAAEBNK")->GetStaticField(0x44330);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PILDOAAEBNK")->GetStaticField(0x44338);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>**)UnitySDK::FromName("", "PILDOAAEBNK")->GetStaticField(0x44340);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PILDOAAEBNK")->GetStaticField(0x10450);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PILDOAAEBNK")->GetStaticField(0x10451);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PILDOAAEBNK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PILDOAAEBNK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PILDOAAEBNK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>(*)())((::PBYTE)hIl2Cpp + PILDOAAEBNK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleGameRefConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightRoleGameRefConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PILDOAAEBNK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PILDOAAEBNK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PILDOAAEBNK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PILDOAAEBNK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PILDOAAEBNK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PILDOAAEBNK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PILDOAAEBNK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleGameRefConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleGameRefConfigRow*))((::PBYTE)hIl2Cpp + PILDOAAEBNK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
