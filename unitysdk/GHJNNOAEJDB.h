#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LHPDHOLNNCC;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHJNNOAEJDB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE1C3F0)
#define GHJNNOAEJDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE1C9C0)
#define GHJNNOAEJDB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE1C560)
#define GHJNNOAEJDB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE1BE60)
#define GHJNNOAEJDB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE1C0F0)
#define GHJNNOAEJDB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE1C600)
#define GHJNNOAEJDB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE1C650)
#define GHJNNOAEJDB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE1C430)
#define GHJNNOAEJDB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE1C090)
#define GHJNNOAEJDB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE1C260)
#define GHJNNOAEJDB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE1C4C0)
#define GHJNNOAEJDB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE1BDE0)

inline static constexpr unsigned int GHJNNOAEJDB_TypeDefinitionIndex = 12896;

	class GHJNNOAEJDB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LHPDHOLNNCC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LHPDHOLNNCC*>**)UnitySDK::FromName("", "GHJNNOAEJDB")->GetStaticField(0x15820);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GHJNNOAEJDB")->GetStaticField(0x15828);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GHJNNOAEJDB")->GetStaticField(0x15830);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GHJNNOAEJDB")->GetStaticField(0x4990);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GHJNNOAEJDB")->GetStaticField(0x4991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJNNOAEJDB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LHPDHOLNNCC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LHPDHOLNNCC*>*(*)())((::PBYTE)hIl2Cpp + GHJNNOAEJDB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHJNNOAEJDB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LHPDHOLNNCC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LHPDHOLNNCC*>(*)())((::PBYTE)hIl2Cpp + GHJNNOAEJDB_FPHGMAMDFHE_OFFSET))();
		}

		static ::LHPDHOLNNCC* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LHPDHOLNNCC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GHJNNOAEJDB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHJNNOAEJDB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJNNOAEJDB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJNNOAEJDB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GHJNNOAEJDB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJNNOAEJDB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GHJNNOAEJDB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LHPDHOLNNCC* a1)
		{
			return ((::System::Void(*)(::LHPDHOLNNCC*))((::PBYTE)hIl2Cpp + GHJNNOAEJDB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
