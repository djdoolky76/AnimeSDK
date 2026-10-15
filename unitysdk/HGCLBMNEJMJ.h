#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class KHMBBIDMAOM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGCLBMNEJMJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE758D0)
#define HGCLBMNEJMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE75E50)
#define HGCLBMNEJMJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE75A40)
#define HGCLBMNEJMJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE75380)
#define HGCLBMNEJMJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE75610)
#define HGCLBMNEJMJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE75AE0)
#define HGCLBMNEJMJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE75B30)
#define HGCLBMNEJMJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE75910)
#define HGCLBMNEJMJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE755B0)
#define HGCLBMNEJMJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE75780)
#define HGCLBMNEJMJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE759A0)
#define HGCLBMNEJMJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE75300)

inline static constexpr unsigned int HGCLBMNEJMJ_TypeDefinitionIndex = 14976;

	class HGCLBMNEJMJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KHMBBIDMAOM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KHMBBIDMAOM*>**)UnitySDK::FromName("", "HGCLBMNEJMJ")->GetStaticField(0x1B520);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HGCLBMNEJMJ")->GetStaticField(0x1B528);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HGCLBMNEJMJ")->GetStaticField(0x1B530);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HGCLBMNEJMJ")->GetStaticField(0x5EA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HGCLBMNEJMJ")->GetStaticField(0x5EA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KHMBBIDMAOM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KHMBBIDMAOM*>*(*)())((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KHMBBIDMAOM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KHMBBIDMAOM*>(*)())((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::KHMBBIDMAOM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KHMBBIDMAOM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KHMBBIDMAOM* a1)
		{
			return ((::System::Void(*)(::KHMBBIDMAOM*))((::PBYTE)hIl2Cpp + HGCLBMNEJMJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
