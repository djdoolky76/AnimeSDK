#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DFJBJEENEBN;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define JMOOIPPEEFK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D04BF30)
#define JMOOIPPEEFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D04C560)
#define JMOOIPPEEFK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D04C0A0)
#define JMOOIPPEEFK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D04B670)
#define JMOOIPPEEFK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D04B900)
#define JMOOIPPEEFK_HAOCNEAGFIH_OFFSET UNITYSDK_OFFSET(0x1D04BC80)
#define JMOOIPPEEFK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D04C140)
#define JMOOIPPEEFK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D04C190)
#define JMOOIPPEEFK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D04BF70)
#define JMOOIPPEEFK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D04B8A0)
#define JMOOIPPEEFK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D04BA70)
#define JMOOIPPEEFK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D04C000)
#define JMOOIPPEEFK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D04B5F0)

inline static constexpr unsigned int JMOOIPPEEFK_TypeDefinitionIndex = 12893;

	class JMOOIPPEEFK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DFJBJEENEBN*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DFJBJEENEBN*>**)UnitySDK::FromName("", "JMOOIPPEEFK")->GetStaticField(0x2F8E0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JMOOIPPEEFK")->GetStaticField(0x2F8E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JMOOIPPEEFK")->GetStaticField(0x2F8F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JMOOIPPEEFK")->GetStaticField(0xA0C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JMOOIPPEEFK")->GetStaticField(0xA0C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMOOIPPEEFK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DFJBJEENEBN*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DFJBJEENEBN*>*(*)())((::PBYTE)hIl2Cpp + JMOOIPPEEFK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMOOIPPEEFK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DFJBJEENEBN*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DFJBJEENEBN*>(*)())((::PBYTE)hIl2Cpp + JMOOIPPEEFK_FPHGMAMDFHE_OFFSET))();
		}

		static ::DFJBJEENEBN* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::DFJBJEENEBN*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JMOOIPPEEFK_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IList_1<::DFJBJEENEBN*>* HAOCNEAGFIH(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::DFJBJEENEBN*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JMOOIPPEEFK_HAOCNEAGFIH_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMOOIPPEEFK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMOOIPPEEFK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMOOIPPEEFK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JMOOIPPEEFK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JMOOIPPEEFK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JMOOIPPEEFK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DFJBJEENEBN* a1)
		{
			return ((::System::Void(*)(::DFJBJEENEBN*))((::PBYTE)hIl2Cpp + JMOOIPPEEFK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
