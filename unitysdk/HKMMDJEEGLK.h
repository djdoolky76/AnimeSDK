#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCAeonDimensionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKMMDJEEGLK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEBD2B0)
#define HKMMDJEEGLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBD830)
#define HKMMDJEEGLK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEBD420)
#define HKMMDJEEGLK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEBCDA0)
#define HKMMDJEEGLK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEBD030)
#define HKMMDJEEGLK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEBD4C0)
#define HKMMDJEEGLK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEBD510)
#define HKMMDJEEGLK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEBD2F0)
#define HKMMDJEEGLK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEBCFD0)
#define HKMMDJEEGLK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEBD160)
#define HKMMDJEEGLK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEBD380)
#define HKMMDJEEGLK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEBCD20)

inline static constexpr unsigned int HKMMDJEEGLK_TypeDefinitionIndex = 14748;

	class HKMMDJEEGLK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDimensionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDimensionRow*>**)UnitySDK::FromName("", "HKMMDJEEGLK")->GetStaticField(0x1ED30);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HKMMDJEEGLK")->GetStaticField(0x1ED38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HKMMDJEEGLK")->GetStaticField(0x1ED40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HKMMDJEEGLK")->GetStaticField(0x7100);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HKMMDJEEGLK")->GetStaticField(0x7101);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKMMDJEEGLK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDimensionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDimensionRow*>*(*)())((::PBYTE)hIl2Cpp + HKMMDJEEGLK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKMMDJEEGLK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDimensionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDimensionRow*>(*)())((::PBYTE)hIl2Cpp + HKMMDJEEGLK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAeonDimensionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCAeonDimensionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HKMMDJEEGLK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKMMDJEEGLK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKMMDJEEGLK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKMMDJEEGLK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKMMDJEEGLK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKMMDJEEGLK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HKMMDJEEGLK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDLCAeonDimensionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonDimensionRow*))((::PBYTE)hIl2Cpp + HKMMDJEEGLK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
