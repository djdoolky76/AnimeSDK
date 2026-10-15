#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournDivisionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGJMDLPOICO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2713C0)
#define OGJMDLPOICO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D271940)
#define OGJMDLPOICO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D271530)
#define OGJMDLPOICO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D270EB0)
#define OGJMDLPOICO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D271140)
#define OGJMDLPOICO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2715D0)
#define OGJMDLPOICO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D271620)
#define OGJMDLPOICO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D271400)
#define OGJMDLPOICO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2710E0)
#define OGJMDLPOICO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D271270)
#define OGJMDLPOICO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D271490)
#define OGJMDLPOICO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D270E30)

inline static constexpr unsigned int OGJMDLPOICO_TypeDefinitionIndex = 14953;

	class OGJMDLPOICO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OGJMDLPOICO")->GetStaticField(0x35170);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>**)UnitySDK::FromName("", "OGJMDLPOICO")->GetStaticField(0x35178);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OGJMDLPOICO")->GetStaticField(0x35180);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OGJMDLPOICO")->GetStaticField(0xB260);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OGJMDLPOICO")->GetStaticField(0xB261);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGJMDLPOICO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>*(*)())((::PBYTE)hIl2Cpp + OGJMDLPOICO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGJMDLPOICO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionRow*>(*)())((::PBYTE)hIl2Cpp + OGJMDLPOICO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournDivisionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournDivisionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OGJMDLPOICO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGJMDLPOICO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGJMDLPOICO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGJMDLPOICO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OGJMDLPOICO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGJMDLPOICO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OGJMDLPOICO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournDivisionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournDivisionRow*))((::PBYTE)hIl2Cpp + OGJMDLPOICO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
