#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JFILEJFAMPN;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKHINIIBOBN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF1B3B0)
#define IKHINIIBOBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF1B930)
#define IKHINIIBOBN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF1B520)
#define IKHINIIBOBN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF1AEA0)
#define IKHINIIBOBN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF1B130)
#define IKHINIIBOBN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF1B5C0)
#define IKHINIIBOBN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF1B610)
#define IKHINIIBOBN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF1B3F0)
#define IKHINIIBOBN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF1B0D0)
#define IKHINIIBOBN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF1B260)
#define IKHINIIBOBN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF1B480)
#define IKHINIIBOBN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF1AE20)

inline static constexpr unsigned int IKHINIIBOBN_TypeDefinitionIndex = 13921;

	class IKHINIIBOBN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IKHINIIBOBN")->GetStaticField(0x23D10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IKHINIIBOBN")->GetStaticField(0x23D18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JFILEJFAMPN*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JFILEJFAMPN*>**)UnitySDK::FromName("", "IKHINIIBOBN")->GetStaticField(0x23D20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IKHINIIBOBN")->GetStaticField(0x7ED0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IKHINIIBOBN")->GetStaticField(0x7ED1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHINIIBOBN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JFILEJFAMPN*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JFILEJFAMPN*>*(*)())((::PBYTE)hIl2Cpp + IKHINIIBOBN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKHINIIBOBN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JFILEJFAMPN*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JFILEJFAMPN*>(*)())((::PBYTE)hIl2Cpp + IKHINIIBOBN_FPHGMAMDFHE_OFFSET))();
		}

		static ::JFILEJFAMPN* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JFILEJFAMPN*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IKHINIIBOBN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IKHINIIBOBN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHINIIBOBN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHINIIBOBN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IKHINIIBOBN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKHINIIBOBN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IKHINIIBOBN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JFILEJFAMPN* a1)
		{
			return ((::System::Void(*)(::JFILEJFAMPN*))((::PBYTE)hIl2Cpp + IKHINIIBOBN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
