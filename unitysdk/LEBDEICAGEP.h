#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class GCNENGFLDHJ;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEBDEICAGEP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E950210)
#define LEBDEICAGEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E950D60)
#define LEBDEICAGEP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9505B0)
#define LEBDEICAGEP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E950250)
#define LEBDEICAGEP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E950AA0)
#define LEBDEICAGEP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E950650)
#define LEBDEICAGEP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9506A0)
#define LEBDEICAGEP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E950480)
#define LEBDEICAGEP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E950A40)
#define LEBDEICAGEP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E950C10)
#define LEBDEICAGEP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E950510)
#define LEBDEICAGEP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9509C0)

inline static constexpr unsigned int LEBDEICAGEP_TypeDefinitionIndex = 15568;

	class LEBDEICAGEP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LEBDEICAGEP")->GetStaticField(0x38FE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GCNENGFLDHJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GCNENGFLDHJ*>**)UnitySDK::FromName("", "LEBDEICAGEP")->GetStaticField(0x38FE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LEBDEICAGEP")->GetStaticField(0x38FF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LEBDEICAGEP")->GetStaticField(0xB450);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LEBDEICAGEP")->GetStaticField(0xB451);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEBDEICAGEP_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LEBDEICAGEP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEBDEICAGEP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEBDEICAGEP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LEBDEICAGEP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LEBDEICAGEP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LEBDEICAGEP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::GCNENGFLDHJ* a1)
		{
			return ((::System::Void(*)(::GCNENGFLDHJ*))((::PBYTE)hIl2Cpp + LEBDEICAGEP_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GCNENGFLDHJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::GCNENGFLDHJ*>*(*)())((::PBYTE)hIl2Cpp + LEBDEICAGEP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LEBDEICAGEP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GCNENGFLDHJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::GCNENGFLDHJ*>(*)())((::PBYTE)hIl2Cpp + LEBDEICAGEP_FPHGMAMDFHE_OFFSET))();
		}

		static ::GCNENGFLDHJ* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::GCNENGFLDHJ*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LEBDEICAGEP_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
