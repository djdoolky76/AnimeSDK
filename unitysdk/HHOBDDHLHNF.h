#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class CIBFGDIDPJB;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHOBDDHLHNF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E81E720)
#define HHOBDDHLHNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81ED20)
#define HHOBDDHLHNF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E81E890)
#define HHOBDDHLHNF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E81E150)
#define HHOBDDHLHNF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E81E3E0)
#define HHOBDDHLHNF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E81E930)
#define HHOBDDHLHNF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E81E980)
#define HHOBDDHLHNF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E81E760)
#define HHOBDDHLHNF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E81E380)
#define HHOBDDHLHNF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E81E550)
#define HHOBDDHLHNF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E81E7F0)
#define HHOBDDHLHNF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E81E0D0)

inline static constexpr unsigned int HHOBDDHLHNF_TypeDefinitionIndex = 14569;

	class HHOBDDHLHNF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HHOBDDHLHNF")->GetStaticField(0x17290);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HHOBDDHLHNF")->GetStaticField(0x17298);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIBFGDIDPJB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIBFGDIDPJB*>**)UnitySDK::FromName("", "HHOBDDHLHNF")->GetStaticField(0x172A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HHOBDDHLHNF")->GetStaticField(0x5400);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HHOBDDHLHNF")->GetStaticField(0x5401);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHOBDDHLHNF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIBFGDIDPJB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIBFGDIDPJB*>*(*)())((::PBYTE)hIl2Cpp + HHOBDDHLHNF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHOBDDHLHNF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CIBFGDIDPJB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CIBFGDIDPJB*>(*)())((::PBYTE)hIl2Cpp + HHOBDDHLHNF_FPHGMAMDFHE_OFFSET))();
		}

		static ::CIBFGDIDPJB* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::CIBFGDIDPJB*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HHOBDDHLHNF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HHOBDDHLHNF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHOBDDHLHNF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHOBDDHLHNF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HHOBDDHLHNF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHOBDDHLHNF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HHOBDDHLHNF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CIBFGDIDPJB* a1)
		{
			return ((::System::Void(*)(::CIBFGDIDPJB*))((::PBYTE)hIl2Cpp + HHOBDDHLHNF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
