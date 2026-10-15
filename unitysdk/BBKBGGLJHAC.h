#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JFDPLMMJDJD;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBKBGGLJHAC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF5A60)
#define BBKBGGLJHAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF6030)
#define BBKBGGLJHAC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF5BD0)
#define BBKBGGLJHAC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF54D0)
#define BBKBGGLJHAC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF5760)
#define BBKBGGLJHAC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF5C70)
#define BBKBGGLJHAC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF5CC0)
#define BBKBGGLJHAC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF5AA0)
#define BBKBGGLJHAC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF5700)
#define BBKBGGLJHAC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF58D0)
#define BBKBGGLJHAC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF5B30)
#define BBKBGGLJHAC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF5450)

inline static constexpr unsigned int BBKBGGLJHAC_TypeDefinitionIndex = 12019;

	class BBKBGGLJHAC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BBKBGGLJHAC")->GetStaticField(0x3D9E0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BBKBGGLJHAC")->GetStaticField(0x3D9E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JFDPLMMJDJD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JFDPLMMJDJD*>**)UnitySDK::FromName("", "BBKBGGLJHAC")->GetStaticField(0x3D9F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BBKBGGLJHAC")->GetStaticField(0xD340);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BBKBGGLJHAC")->GetStaticField(0xD341);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKBGGLJHAC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JFDPLMMJDJD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JFDPLMMJDJD*>*(*)())((::PBYTE)hIl2Cpp + BBKBGGLJHAC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBKBGGLJHAC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JFDPLMMJDJD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JFDPLMMJDJD*>(*)())((::PBYTE)hIl2Cpp + BBKBGGLJHAC_FPHGMAMDFHE_OFFSET))();
		}

		static ::JFDPLMMJDJD* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JFDPLMMJDJD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BBKBGGLJHAC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBKBGGLJHAC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKBGGLJHAC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKBGGLJHAC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BBKBGGLJHAC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBKBGGLJHAC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BBKBGGLJHAC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JFDPLMMJDJD* a1)
		{
			return ((::System::Void(*)(::JFDPLMMJDJD*))((::PBYTE)hIl2Cpp + BBKBGGLJHAC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
