#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceNPCRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCKMEJOPELF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF9FE0)
#define BCKMEJOPELF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCFA5B0)
#define BCKMEJOPELF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCFA150)
#define BCKMEJOPELF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF9A50)
#define BCKMEJOPELF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF9CE0)
#define BCKMEJOPELF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCFA1F0)
#define BCKMEJOPELF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCFA240)
#define BCKMEJOPELF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCFA020)
#define BCKMEJOPELF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF9C80)
#define BCKMEJOPELF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF9E50)
#define BCKMEJOPELF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCFA0B0)
#define BCKMEJOPELF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF99D0)

inline static constexpr unsigned int BCKMEJOPELF_TypeDefinitionIndex = 11008;

	class BCKMEJOPELF : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BCKMEJOPELF")->GetStaticField(0x3E010);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BCKMEJOPELF")->GetStaticField(0x3E018);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceNPCRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceNPCRow*>**)UnitySDK::FromName("", "BCKMEJOPELF")->GetStaticField(0x3E020);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BCKMEJOPELF")->GetStaticField(0xD460);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BCKMEJOPELF")->GetStaticField(0xD461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCKMEJOPELF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceNPCRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceNPCRow*>*(*)())((::PBYTE)hIl2Cpp + BCKMEJOPELF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BCKMEJOPELF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceNPCRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceNPCRow*>(*)())((::PBYTE)hIl2Cpp + BCKMEJOPELF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceNPCRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceNPCRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BCKMEJOPELF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BCKMEJOPELF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCKMEJOPELF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCKMEJOPELF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BCKMEJOPELF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCKMEJOPELF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BCKMEJOPELF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceNPCRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceNPCRow*))((::PBYTE)hIl2Cpp + BCKMEJOPELF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
