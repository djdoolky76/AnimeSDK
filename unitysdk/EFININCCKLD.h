#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class CBOCALABMII;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFININCCKLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF4A510)
#define EFININCCKLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4AA90)
#define EFININCCKLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF4A680)
#define EFININCCKLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF4A000)
#define EFININCCKLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF4A290)
#define EFININCCKLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF4A720)
#define EFININCCKLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF4A770)
#define EFININCCKLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF4A550)
#define EFININCCKLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF4A230)
#define EFININCCKLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF4A3C0)
#define EFININCCKLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF4A5E0)
#define EFININCCKLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF49F80)

inline static constexpr unsigned int EFININCCKLD_TypeDefinitionIndex = 12557;

	class EFININCCKLD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EFININCCKLD")->GetStaticField(0x366B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EFININCCKLD")->GetStaticField(0x366B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CBOCALABMII*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CBOCALABMII*>**)UnitySDK::FromName("", "EFININCCKLD")->GetStaticField(0x366C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EFININCCKLD")->GetStaticField(0xBA30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EFININCCKLD")->GetStaticField(0xBA31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFININCCKLD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CBOCALABMII*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CBOCALABMII*>*(*)())((::PBYTE)hIl2Cpp + EFININCCKLD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EFININCCKLD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CBOCALABMII*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CBOCALABMII*>(*)())((::PBYTE)hIl2Cpp + EFININCCKLD_FPHGMAMDFHE_OFFSET))();
		}

		static ::CBOCALABMII* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::CBOCALABMII*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EFININCCKLD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EFININCCKLD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFININCCKLD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFININCCKLD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EFININCCKLD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFININCCKLD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EFININCCKLD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CBOCALABMII* a1)
		{
			return ((::System::Void(*)(::CBOCALABMII*))((::PBYTE)hIl2Cpp + EFININCCKLD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
