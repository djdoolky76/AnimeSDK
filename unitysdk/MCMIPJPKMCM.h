#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class KDBJEKOLPDE;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCMIPJPKMCM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D13F230)
#define MCMIPJPKMCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D13F800)
#define MCMIPJPKMCM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D13F3A0)
#define MCMIPJPKMCM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D13ECA0)
#define MCMIPJPKMCM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D13EF30)
#define MCMIPJPKMCM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D13F440)
#define MCMIPJPKMCM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D13F490)
#define MCMIPJPKMCM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D13F270)
#define MCMIPJPKMCM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D13EED0)
#define MCMIPJPKMCM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D13F0A0)
#define MCMIPJPKMCM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D13F300)
#define MCMIPJPKMCM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D13EC20)

inline static constexpr unsigned int MCMIPJPKMCM_TypeDefinitionIndex = 11524;

	class MCMIPJPKMCM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MCMIPJPKMCM")->GetStaticField(0x47F10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MCMIPJPKMCM")->GetStaticField(0x47F18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KDBJEKOLPDE*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KDBJEKOLPDE*>**)UnitySDK::FromName("", "MCMIPJPKMCM")->GetStaticField(0x47F20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MCMIPJPKMCM")->GetStaticField(0x110F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MCMIPJPKMCM")->GetStaticField(0x110F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCMIPJPKMCM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KDBJEKOLPDE*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KDBJEKOLPDE*>*(*)())((::PBYTE)hIl2Cpp + MCMIPJPKMCM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCMIPJPKMCM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KDBJEKOLPDE*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KDBJEKOLPDE*>(*)())((::PBYTE)hIl2Cpp + MCMIPJPKMCM_FPHGMAMDFHE_OFFSET))();
		}

		static ::KDBJEKOLPDE* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KDBJEKOLPDE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MCMIPJPKMCM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCMIPJPKMCM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCMIPJPKMCM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCMIPJPKMCM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MCMIPJPKMCM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCMIPJPKMCM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MCMIPJPKMCM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KDBJEKOLPDE* a1)
		{
			return ((::System::Void(*)(::KDBJEKOLPDE*))((::PBYTE)hIl2Cpp + MCMIPJPKMCM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
