#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FIJHLNNBMGL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCLFGHEKFCJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0AB4B0)
#define LCLFGHEKFCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0ABA80)
#define LCLFGHEKFCJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0AB620)
#define LCLFGHEKFCJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0AAF20)
#define LCLFGHEKFCJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0AB1B0)
#define LCLFGHEKFCJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0AB6C0)
#define LCLFGHEKFCJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0AB710)
#define LCLFGHEKFCJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0AB4F0)
#define LCLFGHEKFCJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0AB150)
#define LCLFGHEKFCJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0AB320)
#define LCLFGHEKFCJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0AB580)
#define LCLFGHEKFCJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0AAEA0)

inline static constexpr unsigned int LCLFGHEKFCJ_TypeDefinitionIndex = 13906;

	class LCLFGHEKFCJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LCLFGHEKFCJ")->GetStaticField(0x39EF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FIJHLNNBMGL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FIJHLNNBMGL*>**)UnitySDK::FromName("", "LCLFGHEKFCJ")->GetStaticField(0x39EF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LCLFGHEKFCJ")->GetStaticField(0x39F00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LCLFGHEKFCJ")->GetStaticField(0xBB80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LCLFGHEKFCJ")->GetStaticField(0xBB81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FIJHLNNBMGL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FIJHLNNBMGL*>*(*)())((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FIJHLNNBMGL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FIJHLNNBMGL*>(*)())((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::FIJHLNNBMGL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::FIJHLNNBMGL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::FIJHLNNBMGL* a1)
		{
			return ((::System::Void(*)(::FIJHLNNBMGL*))((::PBYTE)hIl2Cpp + LCLFGHEKFCJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
