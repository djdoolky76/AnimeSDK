#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHMHDMKDHBC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD83530)
#define EHMHDMKDHBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD83B00)
#define EHMHDMKDHBC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD836A0)
#define EHMHDMKDHBC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD82FA0)
#define EHMHDMKDHBC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD83230)
#define EHMHDMKDHBC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD83740)
#define EHMHDMKDHBC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD83790)
#define EHMHDMKDHBC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD83570)
#define EHMHDMKDHBC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD831D0)
#define EHMHDMKDHBC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD833A0)
#define EHMHDMKDHBC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD83600)
#define EHMHDMKDHBC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD82F20)

inline static constexpr unsigned int EHMHDMKDHBC_TypeDefinitionIndex = 12232;

	class EHMHDMKDHBC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUnlockRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUnlockRow*>**)UnitySDK::FromName("", "EHMHDMKDHBC")->GetStaticField(0x53F90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EHMHDMKDHBC")->GetStaticField(0x53F98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EHMHDMKDHBC")->GetStaticField(0x53FA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EHMHDMKDHBC")->GetStaticField(0x12A40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EHMHDMKDHBC")->GetStaticField(0x12A41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHMHDMKDHBC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUnlockRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + EHMHDMKDHBC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHMHDMKDHBC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUnlockRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesUnlockRow*>(*)())((::PBYTE)hIl2Cpp + EHMHDMKDHBC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesUnlockRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EHMHDMKDHBC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHMHDMKDHBC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHMHDMKDHBC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHMHDMKDHBC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EHMHDMKDHBC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EHMHDMKDHBC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EHMHDMKDHBC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesUnlockRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesUnlockRow*))((::PBYTE)hIl2Cpp + EHMHDMKDHBC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
