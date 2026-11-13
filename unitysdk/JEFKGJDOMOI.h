#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyCellResourceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEFKGJDOMOI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0xCA9C9F0)
#define JEFKGJDOMOI_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA9CF30)
#define JEFKGJDOMOI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0xCA9CAD0)
#define JEFKGJDOMOI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0xC9C9CB0)
#define JEFKGJDOMOI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0xCA9C6F0)
#define JEFKGJDOMOI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0xCA9CB70)
#define JEFKGJDOMOI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0xCA9CBC0)
#define JEFKGJDOMOI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0xCA539D0)
#define JEFKGJDOMOI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0xCA9C690)
#define JEFKGJDOMOI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xCA9C860)
#define JEFKGJDOMOI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0xCA9CA30)
#define JEFKGJDOMOI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0xCA9C610)

inline static constexpr unsigned int JEFKGJDOMOI_TypeDefinitionIndex = 12143;

	class JEFKGJDOMOI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellResourceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellResourceRow*>**)UnitySDK::FromName("", "JEFKGJDOMOI")->GetStaticField(0x30970);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JEFKGJDOMOI")->GetStaticField(0x30978);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JEFKGJDOMOI")->GetStaticField(0x30980);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JEFKGJDOMOI")->GetStaticField(0x98E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JEFKGJDOMOI")->GetStaticField(0x98E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEFKGJDOMOI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellResourceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellResourceRow*>*(*)())((::PBYTE)hIl2Cpp + JEFKGJDOMOI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEFKGJDOMOI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellResourceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellResourceRow*>(*)())((::PBYTE)hIl2Cpp + JEFKGJDOMOI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyCellResourceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyCellResourceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JEFKGJDOMOI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEFKGJDOMOI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEFKGJDOMOI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEFKGJDOMOI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JEFKGJDOMOI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEFKGJDOMOI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JEFKGJDOMOI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyCellResourceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyCellResourceRow*))((::PBYTE)hIl2Cpp + JEFKGJDOMOI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
