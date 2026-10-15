#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PSTrophyRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKABKMCMMMA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEB9220)
#define HKABKMCMMMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB97F0)
#define HKABKMCMMMA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEB9390)
#define HKABKMCMMMA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEB8C90)
#define HKABKMCMMMA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEB8F20)
#define HKABKMCMMMA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEB9430)
#define HKABKMCMMMA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEB9480)
#define HKABKMCMMMA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEB9260)
#define HKABKMCMMMA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEB8EC0)
#define HKABKMCMMMA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEB9090)
#define HKABKMCMMMA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEB92F0)
#define HKABKMCMMMA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEB8C10)

inline static constexpr unsigned int HKABKMCMMMA_TypeDefinitionIndex = 13086;

	class HKABKMCMMMA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyRow*>**)UnitySDK::FromName("", "HKABKMCMMMA")->GetStaticField(0x1EC00);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HKABKMCMMMA")->GetStaticField(0x1EC08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HKABKMCMMMA")->GetStaticField(0x1EC10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HKABKMCMMMA")->GetStaticField(0x7060);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HKABKMCMMMA")->GetStaticField(0x7061);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKABKMCMMMA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyRow*>*(*)())((::PBYTE)hIl2Cpp + HKABKMCMMMA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKABKMCMMMA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyRow*>(*)())((::PBYTE)hIl2Cpp + HKABKMCMMMA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PSTrophyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PSTrophyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HKABKMCMMMA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKABKMCMMMA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKABKMCMMMA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKABKMCMMMA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKABKMCMMMA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKABKMCMMMA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HKABKMCMMMA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PSTrophyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PSTrophyRow*))((::PBYTE)hIl2Cpp + HKABKMCMMMA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
