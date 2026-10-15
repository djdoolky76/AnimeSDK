#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class OALEENCGNEC;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBEEMCPNDPN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1EE8E0)
#define NBEEMCPNDPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1EEEB0)
#define NBEEMCPNDPN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1EEA50)
#define NBEEMCPNDPN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1EE350)
#define NBEEMCPNDPN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1EE5E0)
#define NBEEMCPNDPN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1EEAF0)
#define NBEEMCPNDPN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1EEB40)
#define NBEEMCPNDPN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1EE920)
#define NBEEMCPNDPN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1EE580)
#define NBEEMCPNDPN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1EE750)
#define NBEEMCPNDPN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1EE9B0)
#define NBEEMCPNDPN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1EE2D0)

inline static constexpr unsigned int NBEEMCPNDPN_TypeDefinitionIndex = 11512;

	class NBEEMCPNDPN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NBEEMCPNDPN")->GetStaticField(0x2C8F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OALEENCGNEC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OALEENCGNEC*>**)UnitySDK::FromName("", "NBEEMCPNDPN")->GetStaticField(0x2C8F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NBEEMCPNDPN")->GetStaticField(0x2C900);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NBEEMCPNDPN")->GetStaticField(0x8C70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NBEEMCPNDPN")->GetStaticField(0x8C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBEEMCPNDPN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OALEENCGNEC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OALEENCGNEC*>*(*)())((::PBYTE)hIl2Cpp + NBEEMCPNDPN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBEEMCPNDPN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OALEENCGNEC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OALEENCGNEC*>(*)())((::PBYTE)hIl2Cpp + NBEEMCPNDPN_FPHGMAMDFHE_OFFSET))();
		}

		static ::OALEENCGNEC* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::OALEENCGNEC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NBEEMCPNDPN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NBEEMCPNDPN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBEEMCPNDPN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBEEMCPNDPN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NBEEMCPNDPN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBEEMCPNDPN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NBEEMCPNDPN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::OALEENCGNEC* a1)
		{
			return ((::System::Void(*)(::OALEENCGNEC*))((::PBYTE)hIl2Cpp + NBEEMCPNDPN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
