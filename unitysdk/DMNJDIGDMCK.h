#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceFieldRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMNJDIGDMCK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF167F0)
#define DMNJDIGDMCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF16D70)
#define DMNJDIGDMCK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF16960)
#define DMNJDIGDMCK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF162E0)
#define DMNJDIGDMCK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF16570)
#define DMNJDIGDMCK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF16A00)
#define DMNJDIGDMCK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF16A50)
#define DMNJDIGDMCK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF16830)
#define DMNJDIGDMCK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF16510)
#define DMNJDIGDMCK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF166A0)
#define DMNJDIGDMCK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF168C0)
#define DMNJDIGDMCK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF16260)

inline static constexpr unsigned int DMNJDIGDMCK_TypeDefinitionIndex = 11008;

	class DMNJDIGDMCK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DMNJDIGDMCK")->GetStaticField(0x313C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldRow*>**)UnitySDK::FromName("", "DMNJDIGDMCK")->GetStaticField(0x313C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMNJDIGDMCK")->GetStaticField(0x313D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMNJDIGDMCK")->GetStaticField(0xA6C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMNJDIGDMCK")->GetStaticField(0xA6C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMNJDIGDMCK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldRow*>*(*)())((::PBYTE)hIl2Cpp + DMNJDIGDMCK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMNJDIGDMCK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldRow*>(*)())((::PBYTE)hIl2Cpp + DMNJDIGDMCK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceFieldRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceFieldRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DMNJDIGDMCK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMNJDIGDMCK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMNJDIGDMCK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMNJDIGDMCK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DMNJDIGDMCK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMNJDIGDMCK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DMNJDIGDMCK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceFieldRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceFieldRow*))((::PBYTE)hIl2Cpp + DMNJDIGDMCK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
