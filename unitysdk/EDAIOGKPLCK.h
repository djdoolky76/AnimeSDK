#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class GAMAMJKNNFK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDAIOGKPLCK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9B87A0)
#define EDAIOGKPLCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B8D70)
#define EDAIOGKPLCK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9B8910)
#define EDAIOGKPLCK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9B8210)
#define EDAIOGKPLCK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9B84A0)
#define EDAIOGKPLCK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9B89B0)
#define EDAIOGKPLCK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9B8A00)
#define EDAIOGKPLCK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E9B87E0)
#define EDAIOGKPLCK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9B8440)
#define EDAIOGKPLCK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9B8610)
#define EDAIOGKPLCK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9B8870)
#define EDAIOGKPLCK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9B8190)

inline static constexpr unsigned int EDAIOGKPLCK_TypeDefinitionIndex = 11362;

	class EDAIOGKPLCK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GAMAMJKNNFK*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GAMAMJKNNFK*>**)UnitySDK::FromName("", "EDAIOGKPLCK")->GetStaticField(0x43F40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EDAIOGKPLCK")->GetStaticField(0x43F48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EDAIOGKPLCK")->GetStaticField(0x43F50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EDAIOGKPLCK")->GetStaticField(0xD9C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EDAIOGKPLCK")->GetStaticField(0xD9C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDAIOGKPLCK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GAMAMJKNNFK*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GAMAMJKNNFK*>*(*)())((::PBYTE)hIl2Cpp + EDAIOGKPLCK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDAIOGKPLCK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GAMAMJKNNFK*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GAMAMJKNNFK*>(*)())((::PBYTE)hIl2Cpp + EDAIOGKPLCK_FPHGMAMDFHE_OFFSET))();
		}

		static ::GAMAMJKNNFK* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::GAMAMJKNNFK*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EDAIOGKPLCK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDAIOGKPLCK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDAIOGKPLCK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDAIOGKPLCK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EDAIOGKPLCK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EDAIOGKPLCK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EDAIOGKPLCK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::GAMAMJKNNFK* a1)
		{
			return ((::System::Void(*)(::GAMAMJKNNFK*))((::PBYTE)hIl2Cpp + EDAIOGKPLCK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
