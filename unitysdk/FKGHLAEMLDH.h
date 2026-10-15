#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JGEKCCIOHHO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKGHLAEMLDH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDFE990)
#define FKGHLAEMLDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDFEF10)
#define FKGHLAEMLDH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDFEB00)
#define FKGHLAEMLDH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDFE440)
#define FKGHLAEMLDH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDFE6D0)
#define FKGHLAEMLDH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDFEBA0)
#define FKGHLAEMLDH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDFEBF0)
#define FKGHLAEMLDH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDFE9D0)
#define FKGHLAEMLDH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDFE670)
#define FKGHLAEMLDH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDFE800)
#define FKGHLAEMLDH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDFEA60)
#define FKGHLAEMLDH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDFE3C0)

inline static constexpr unsigned int FKGHLAEMLDH_TypeDefinitionIndex = 11586;

	class FKGHLAEMLDH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JGEKCCIOHHO*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JGEKCCIOHHO*>**)UnitySDK::FromName("", "FKGHLAEMLDH")->GetStaticField(0x144C0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FKGHLAEMLDH")->GetStaticField(0x144C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FKGHLAEMLDH")->GetStaticField(0x144D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FKGHLAEMLDH")->GetStaticField(0x4D20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FKGHLAEMLDH")->GetStaticField(0x4D21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKGHLAEMLDH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JGEKCCIOHHO*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JGEKCCIOHHO*>*(*)())((::PBYTE)hIl2Cpp + FKGHLAEMLDH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKGHLAEMLDH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JGEKCCIOHHO*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JGEKCCIOHHO*>(*)())((::PBYTE)hIl2Cpp + FKGHLAEMLDH_FPHGMAMDFHE_OFFSET))();
		}

		static ::JGEKCCIOHHO* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JGEKCCIOHHO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FKGHLAEMLDH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKGHLAEMLDH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKGHLAEMLDH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKGHLAEMLDH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FKGHLAEMLDH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKGHLAEMLDH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FKGHLAEMLDH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JGEKCCIOHHO* a1)
		{
			return ((::System::Void(*)(::JGEKCCIOHHO*))((::PBYTE)hIl2Cpp + FKGHLAEMLDH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
