#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournModuleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OONLJNNGBEM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F1E48A0)
#define OONLJNNGBEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1E4E60)
#define OONLJNNGBEM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F1E4A10)
#define OONLJNNGBEM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F1E4300)
#define OONLJNNGBEM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F1E4590)
#define OONLJNNGBEM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F1E4AB0)
#define OONLJNNGBEM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F1E4B00)
#define OONLJNNGBEM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F1E48E0)
#define OONLJNNGBEM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F1E4530)
#define OONLJNNGBEM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F1E4700)
#define OONLJNNGBEM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F1E4970)
#define OONLJNNGBEM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F1E4280)

inline static constexpr unsigned int OONLJNNGBEM_TypeDefinitionIndex = 15098;

	class OONLJNNGBEM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OONLJNNGBEM")->GetStaticField(0x3B210);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OONLJNNGBEM")->GetStaticField(0x3B218);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournModuleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournModuleRow*>**)UnitySDK::FromName("", "OONLJNNGBEM")->GetStaticField(0x3B220);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OONLJNNGBEM")->GetStaticField(0xBC40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OONLJNNGBEM")->GetStaticField(0xBC41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OONLJNNGBEM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournModuleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournModuleRow*>*(*)())((::PBYTE)hIl2Cpp + OONLJNNGBEM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OONLJNNGBEM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournModuleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournModuleRow*>(*)())((::PBYTE)hIl2Cpp + OONLJNNGBEM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournModuleRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueTournModuleRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OONLJNNGBEM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OONLJNNGBEM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OONLJNNGBEM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OONLJNNGBEM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OONLJNNGBEM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OONLJNNGBEM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OONLJNNGBEM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournModuleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournModuleRow*))((::PBYTE)hIl2Cpp + OONLJNNGBEM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
