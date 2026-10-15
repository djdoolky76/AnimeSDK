#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpecialChestFindDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCFPJKKKKGI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D13A320)
#define MCFPJKKKKGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D13A980)
#define MCFPJKKKKGI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D13A490)
#define MCFPJKKKKGI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D139CD0)
#define MCFPJKKKKGI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D139F60)
#define MCFPJKKKKGI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D13A530)
#define MCFPJKKKKGI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D13A580)
#define MCFPJKKKKGI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D13A360)
#define MCFPJKKKKGI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D139F00)
#define MCFPJKKKKGI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D13A0D0)
#define MCFPJKKKKGI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D13A3F0)
#define MCFPJKKKKGI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D139C50)

inline static constexpr unsigned int MCFPJKKKKGI_TypeDefinitionIndex = 13297;

	class MCFPJKKKKGI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MCFPJKKKKGI")->GetStaticField(0x47880);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialChestFindDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialChestFindDataRow*>**)UnitySDK::FromName("", "MCFPJKKKKGI")->GetStaticField(0x47888);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MCFPJKKKKGI")->GetStaticField(0x47890);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MCFPJKKKKGI")->GetStaticField(0x11010);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MCFPJKKKKGI")->GetStaticField(0x11011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCFPJKKKKGI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialChestFindDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialChestFindDataRow*>*(*)())((::PBYTE)hIl2Cpp + MCFPJKKKKGI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCFPJKKKKGI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialChestFindDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialChestFindDataRow*>(*)())((::PBYTE)hIl2Cpp + MCFPJKKKKGI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SpecialChestFindDataRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::GameCore::SpecialChestFindDataRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MCFPJKKKKGI_LMBKNCAIDLC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCFPJKKKKGI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCFPJKKKKGI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCFPJKKKKGI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MCFPJKKKKGI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCFPJKKKKGI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MCFPJKKKKGI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SpecialChestFindDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialChestFindDataRow*))((::PBYTE)hIl2Cpp + MCFPJKKKKGI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
