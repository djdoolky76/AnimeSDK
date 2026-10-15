#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NAHKJFGBOKD;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BODBGCCAANO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9EEAB0)
#define BODBGCCAANO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9EF080)
#define BODBGCCAANO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9EEC20)
#define BODBGCCAANO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9EE520)
#define BODBGCCAANO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9EE7B0)
#define BODBGCCAANO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9EECC0)
#define BODBGCCAANO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9EED10)
#define BODBGCCAANO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9EEAF0)
#define BODBGCCAANO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9EE750)
#define BODBGCCAANO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9EE920)
#define BODBGCCAANO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9EEB80)
#define BODBGCCAANO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9EE4A0)

inline static constexpr unsigned int BODBGCCAANO_TypeDefinitionIndex = 14435;

	class BODBGCCAANO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BODBGCCAANO")->GetStaticField(0x38E60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NAHKJFGBOKD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NAHKJFGBOKD*>**)UnitySDK::FromName("", "BODBGCCAANO")->GetStaticField(0x38E68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BODBGCCAANO")->GetStaticField(0x38E70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BODBGCCAANO")->GetStaticField(0xC230);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BODBGCCAANO")->GetStaticField(0xC231);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BODBGCCAANO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NAHKJFGBOKD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NAHKJFGBOKD*>*(*)())((::PBYTE)hIl2Cpp + BODBGCCAANO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BODBGCCAANO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NAHKJFGBOKD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NAHKJFGBOKD*>(*)())((::PBYTE)hIl2Cpp + BODBGCCAANO_FPHGMAMDFHE_OFFSET))();
		}

		static ::NAHKJFGBOKD* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NAHKJFGBOKD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BODBGCCAANO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BODBGCCAANO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BODBGCCAANO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BODBGCCAANO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BODBGCCAANO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BODBGCCAANO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BODBGCCAANO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NAHKJFGBOKD* a1)
		{
			return ((::System::Void(*)(::NAHKJFGBOKD*))((::PBYTE)hIl2Cpp + BODBGCCAANO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
