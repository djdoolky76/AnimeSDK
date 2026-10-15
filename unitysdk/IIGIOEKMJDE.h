#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIGIOEKMJDE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF13220)
#define IIGIOEKMJDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF137A0)
#define IIGIOEKMJDE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF13390)
#define IIGIOEKMJDE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF12CD0)
#define IIGIOEKMJDE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF12F60)
#define IIGIOEKMJDE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF13430)
#define IIGIOEKMJDE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF13480)
#define IIGIOEKMJDE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF13260)
#define IIGIOEKMJDE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF12F00)
#define IIGIOEKMJDE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF130D0)
#define IIGIOEKMJDE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF132F0)
#define IIGIOEKMJDE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF12C50)

	class IIGIOEKMJDE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IIGIOEKMJDE")->GetStaticField(0x23910);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideTagConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideTagConfigRow*>**)UnitySDK::FromName("", "IIGIOEKMJDE")->GetStaticField(0x23918);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IIGIOEKMJDE")->GetStaticField(0x23920);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IIGIOEKMJDE")->GetStaticField(0x7E00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IIGIOEKMJDE")->GetStaticField(0x7E01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIGIOEKMJDE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideTagConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideTagConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IIGIOEKMJDE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IIGIOEKMJDE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideTagConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuideTagConfigRow*>(*)())((::PBYTE)hIl2Cpp + IIGIOEKMJDE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonsterGuideTagConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterGuideTagConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IIGIOEKMJDE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IIGIOEKMJDE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIGIOEKMJDE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIGIOEKMJDE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IIGIOEKMJDE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IIGIOEKMJDE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IIGIOEKMJDE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonsterGuideTagConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterGuideTagConfigRow*))((::PBYTE)hIl2Cpp + IIGIOEKMJDE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
