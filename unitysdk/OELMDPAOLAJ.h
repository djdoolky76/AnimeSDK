#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpEquipRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OELMDPAOLAJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D261400)
#define OELMDPAOLAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2619D0)
#define OELMDPAOLAJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D261570)
#define OELMDPAOLAJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D260E70)
#define OELMDPAOLAJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D261100)
#define OELMDPAOLAJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D261610)
#define OELMDPAOLAJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D261660)
#define OELMDPAOLAJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D261440)
#define OELMDPAOLAJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2610A0)
#define OELMDPAOLAJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D261270)
#define OELMDPAOLAJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2614D0)
#define OELMDPAOLAJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D260DF0)

	class OELMDPAOLAJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>**)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0x334F0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0x334F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0x33500);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0xACA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0xACA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>*(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpEquipRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSpEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpEquipRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpEquipRow*))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
