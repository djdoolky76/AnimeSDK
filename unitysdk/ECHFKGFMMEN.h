#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterBlackListConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECHFKGFMMEN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD6A150)
#define ECHFKGFMMEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD6A750)
#define ECHFKGFMMEN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD6A2C0)
#define ECHFKGFMMEN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD69B80)
#define ECHFKGFMMEN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD69E10)
#define ECHFKGFMMEN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD6A360)
#define ECHFKGFMMEN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD6A3B0)
#define ECHFKGFMMEN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD6A190)
#define ECHFKGFMMEN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD69DB0)
#define ECHFKGFMMEN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD69F80)
#define ECHFKGFMMEN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD6A220)
#define ECHFKGFMMEN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD69B00)

inline static constexpr unsigned int ECHFKGFMMEN_TypeDefinitionIndex = 12900;

	class ECHFKGFMMEN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ECHFKGFMMEN")->GetStaticField(0x534A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterBlackListConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterBlackListConfigRow*>**)UnitySDK::FromName("", "ECHFKGFMMEN")->GetStaticField(0x534A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ECHFKGFMMEN")->GetStaticField(0x534B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ECHFKGFMMEN")->GetStaticField(0x127D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ECHFKGFMMEN")->GetStaticField(0x127D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECHFKGFMMEN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterBlackListConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterBlackListConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ECHFKGFMMEN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECHFKGFMMEN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterBlackListConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterBlackListConfigRow*>(*)())((::PBYTE)hIl2Cpp + ECHFKGFMMEN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonsterBlackListConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MonsterBlackListConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ECHFKGFMMEN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECHFKGFMMEN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECHFKGFMMEN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECHFKGFMMEN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ECHFKGFMMEN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ECHFKGFMMEN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ECHFKGFMMEN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonsterBlackListConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterBlackListConfigRow*))((::PBYTE)hIl2Cpp + ECHFKGFMMEN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
