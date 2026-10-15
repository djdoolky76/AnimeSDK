#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JBLFDPLFIFH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEOJGADAMNG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CFF3570)
#define JEOJGADAMNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFF3B40)
#define JEOJGADAMNG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CFF36E0)
#define JEOJGADAMNG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CFF2FE0)
#define JEOJGADAMNG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CFF3270)
#define JEOJGADAMNG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CFF3780)
#define JEOJGADAMNG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CFF37D0)
#define JEOJGADAMNG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFF35B0)
#define JEOJGADAMNG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CFF3210)
#define JEOJGADAMNG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CFF33E0)
#define JEOJGADAMNG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CFF3640)
#define JEOJGADAMNG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CFF2F60)

inline static constexpr unsigned int JEOJGADAMNG_TypeDefinitionIndex = 11501;

	class JEOJGADAMNG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JEOJGADAMNG")->GetStaticField(0x2D530);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JEOJGADAMNG")->GetStaticField(0x2D538);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JBLFDPLFIFH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JBLFDPLFIFH*>**)UnitySDK::FromName("", "JEOJGADAMNG")->GetStaticField(0x2D540);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JEOJGADAMNG")->GetStaticField(0x9740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JEOJGADAMNG")->GetStaticField(0x9741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEOJGADAMNG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JBLFDPLFIFH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JBLFDPLFIFH*>*(*)())((::PBYTE)hIl2Cpp + JEOJGADAMNG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEOJGADAMNG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JBLFDPLFIFH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JBLFDPLFIFH*>(*)())((::PBYTE)hIl2Cpp + JEOJGADAMNG_FPHGMAMDFHE_OFFSET))();
		}

		static ::JBLFDPLFIFH* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JBLFDPLFIFH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JEOJGADAMNG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEOJGADAMNG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEOJGADAMNG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEOJGADAMNG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JEOJGADAMNG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEOJGADAMNG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JEOJGADAMNG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JBLFDPLFIFH* a1)
		{
			return ((::System::Void(*)(::JBLFDPLFIFH*))((::PBYTE)hIl2Cpp + JEOJGADAMNG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
