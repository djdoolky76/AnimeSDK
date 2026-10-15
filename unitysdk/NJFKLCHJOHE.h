#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILEliteGroupConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJFKLCHJOHE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D216950)
#define NJFKLCHJOHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D216F20)
#define NJFKLCHJOHE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D216AC0)
#define NJFKLCHJOHE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2163C0)
#define NJFKLCHJOHE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D216650)
#define NJFKLCHJOHE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D216B60)
#define NJFKLCHJOHE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D216BB0)
#define NJFKLCHJOHE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D216990)
#define NJFKLCHJOHE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2165F0)
#define NJFKLCHJOHE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2167C0)
#define NJFKLCHJOHE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D216A20)
#define NJFKLCHJOHE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D216340)

	class NJFKLCHJOHE : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NJFKLCHJOHE")->GetStaticField(0x2EE90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILEliteGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILEliteGroupConfigRow*>**)UnitySDK::FromName("", "NJFKLCHJOHE")->GetStaticField(0x2EE98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NJFKLCHJOHE")->GetStaticField(0x2EEA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NJFKLCHJOHE")->GetStaticField(0x9BC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NJFKLCHJOHE")->GetStaticField(0x9BC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJFKLCHJOHE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILEliteGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILEliteGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NJFKLCHJOHE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NJFKLCHJOHE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILEliteGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILEliteGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + NJFKLCHJOHE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILEliteGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ILEliteGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NJFKLCHJOHE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NJFKLCHJOHE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJFKLCHJOHE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJFKLCHJOHE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NJFKLCHJOHE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJFKLCHJOHE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NJFKLCHJOHE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILEliteGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILEliteGroupConfigRow*))((::PBYTE)hIl2Cpp + NJFKLCHJOHE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
