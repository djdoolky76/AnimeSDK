#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class ONPADMPFEDI;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBDGMADPDDC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCA17B0)
#define DBDGMADPDDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1D80)
#define DBDGMADPDDC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCA1920)
#define DBDGMADPDDC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCA1220)
#define DBDGMADPDDC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCA14B0)
#define DBDGMADPDDC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCA19C0)
#define DBDGMADPDDC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCA1A10)
#define DBDGMADPDDC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCA17F0)
#define DBDGMADPDDC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCA1450)
#define DBDGMADPDDC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCA1620)
#define DBDGMADPDDC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCA1880)
#define DBDGMADPDDC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCA11A0)

inline static constexpr unsigned int DBDGMADPDDC_TypeDefinitionIndex = 11254;

	class DBDGMADPDDC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ONPADMPFEDI*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ONPADMPFEDI*>**)UnitySDK::FromName("", "DBDGMADPDDC")->GetStaticField(0x40EB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DBDGMADPDDC")->GetStaticField(0x40EB8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DBDGMADPDDC")->GetStaticField(0x40EC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DBDGMADPDDC")->GetStaticField(0xF7C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DBDGMADPDDC")->GetStaticField(0xF7C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBDGMADPDDC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ONPADMPFEDI*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ONPADMPFEDI*>*(*)())((::PBYTE)hIl2Cpp + DBDGMADPDDC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DBDGMADPDDC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ONPADMPFEDI*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ONPADMPFEDI*>(*)())((::PBYTE)hIl2Cpp + DBDGMADPDDC_FPHGMAMDFHE_OFFSET))();
		}

		static ::ONPADMPFEDI* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::ONPADMPFEDI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DBDGMADPDDC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DBDGMADPDDC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBDGMADPDDC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBDGMADPDDC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DBDGMADPDDC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DBDGMADPDDC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DBDGMADPDDC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::ONPADMPFEDI* a1)
		{
			return ((::System::Void(*)(::ONPADMPFEDI*))((::PBYTE)hIl2Cpp + DBDGMADPDDC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
