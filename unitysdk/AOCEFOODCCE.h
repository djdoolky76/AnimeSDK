#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyDisplayCellRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOCEFOODCCE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE8100)
#define AOCEFOODCCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE86D0)
#define AOCEFOODCCE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE8270)
#define AOCEFOODCCE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE7B70)
#define AOCEFOODCCE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE7E00)
#define AOCEFOODCCE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE8310)
#define AOCEFOODCCE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE8360)
#define AOCEFOODCCE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE8140)
#define AOCEFOODCCE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE7DA0)
#define AOCEFOODCCE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE7F70)
#define AOCEFOODCCE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE81D0)
#define AOCEFOODCCE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE7AF0)

inline static constexpr unsigned int AOCEFOODCCE_TypeDefinitionIndex = 12053;

	class AOCEFOODCCE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AOCEFOODCCE")->GetStaticField(0x3C570);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AOCEFOODCCE")->GetStaticField(0x3C578);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyDisplayCellRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyDisplayCellRow*>**)UnitySDK::FromName("", "AOCEFOODCCE")->GetStaticField(0x3C580);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AOCEFOODCCE")->GetStaticField(0xCE70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AOCEFOODCCE")->GetStaticField(0xCE71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOCEFOODCCE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyDisplayCellRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyDisplayCellRow*>*(*)())((::PBYTE)hIl2Cpp + AOCEFOODCCE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOCEFOODCCE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyDisplayCellRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyDisplayCellRow*>(*)())((::PBYTE)hIl2Cpp + AOCEFOODCCE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyDisplayCellRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyDisplayCellRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOCEFOODCCE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOCEFOODCCE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOCEFOODCCE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOCEFOODCCE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOCEFOODCCE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AOCEFOODCCE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AOCEFOODCCE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyDisplayCellRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyDisplayCellRow*))((::PBYTE)hIl2Cpp + AOCEFOODCCE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
