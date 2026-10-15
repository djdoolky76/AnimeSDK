#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleRoundCustomBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMCOFCBLPPL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E1150)
#define BMCOFCBLPPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E1750)
#define BMCOFCBLPPL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E12C0)
#define BMCOFCBLPPL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E0B80)
#define BMCOFCBLPPL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E0E10)
#define BMCOFCBLPPL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E1360)
#define BMCOFCBLPPL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E13B0)
#define BMCOFCBLPPL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E1190)
#define BMCOFCBLPPL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E0DB0)
#define BMCOFCBLPPL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E0F80)
#define BMCOFCBLPPL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E1220)
#define BMCOFCBLPPL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E0B00)

inline static constexpr unsigned int BMCOFCBLPPL_TypeDefinitionIndex = 11891;

	class BMCOFCBLPPL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BMCOFCBLPPL")->GetStaticField(0x380E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>**)UnitySDK::FromName("", "BMCOFCBLPPL")->GetStaticField(0x380E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMCOFCBLPPL")->GetStaticField(0x380F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BMCOFCBLPPL")->GetStaticField(0xBF20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BMCOFCBLPPL")->GetStaticField(0xBF21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCOFCBLPPL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>*(*)())((::PBYTE)hIl2Cpp + BMCOFCBLPPL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMCOFCBLPPL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRoundCustomBuffRow*>(*)())((::PBYTE)hIl2Cpp + BMCOFCBLPPL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleRoundCustomBuffRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MarbleRoundCustomBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BMCOFCBLPPL_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMCOFCBLPPL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCOFCBLPPL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCOFCBLPPL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BMCOFCBLPPL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMCOFCBLPPL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BMCOFCBLPPL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleRoundCustomBuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleRoundCustomBuffRow*))((::PBYTE)hIl2Cpp + BMCOFCBLPPL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
