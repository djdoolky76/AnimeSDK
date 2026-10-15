#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOrbConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDCGALOPFMD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCCE0C0)
#define BDCGALOPFMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCCE690)
#define BDCGALOPFMD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCCE230)
#define BDCGALOPFMD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCCDB30)
#define BDCGALOPFMD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCCDDC0)
#define BDCGALOPFMD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCCE2D0)
#define BDCGALOPFMD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCCE320)
#define BDCGALOPFMD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCCE100)
#define BDCGALOPFMD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCCDD60)
#define BDCGALOPFMD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCCDF30)
#define BDCGALOPFMD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCCE190)
#define BDCGALOPFMD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCCDAB0)

inline static constexpr unsigned int BDCGALOPFMD_TypeDefinitionIndex = 13423;

	class BDCGALOPFMD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BDCGALOPFMD")->GetStaticField(0x43EE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>**)UnitySDK::FromName("", "BDCGALOPFMD")->GetStaticField(0x43EE8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BDCGALOPFMD")->GetStaticField(0x43EF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BDCGALOPFMD")->GetStaticField(0x10170);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BDCGALOPFMD")->GetStaticField(0x10171);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDCGALOPFMD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BDCGALOPFMD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BDCGALOPFMD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>(*)())((::PBYTE)hIl2Cpp + BDCGALOPFMD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightOrbConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightOrbConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BDCGALOPFMD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BDCGALOPFMD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDCGALOPFMD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDCGALOPFMD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BDCGALOPFMD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BDCGALOPFMD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BDCGALOPFMD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightOrbConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightOrbConfigRow*))((::PBYTE)hIl2Cpp + BDCGALOPFMD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
