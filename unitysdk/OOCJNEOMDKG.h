#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireEventOptionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOCJNEOMDKG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E4B13C0)
#define OOCJNEOMDKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B19C0)
#define OOCJNEOMDKG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4B1530)
#define OOCJNEOMDKG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E4B0DF0)
#define OOCJNEOMDKG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E4B1080)
#define OOCJNEOMDKG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E4B15D0)
#define OOCJNEOMDKG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E4B1620)
#define OOCJNEOMDKG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E4B1400)
#define OOCJNEOMDKG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4B1020)
#define OOCJNEOMDKG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4B11F0)
#define OOCJNEOMDKG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E4B1490)
#define OOCJNEOMDKG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E4B0D70)

inline static constexpr unsigned int OOCJNEOMDKG_TypeDefinitionIndex = 13573;

	class OOCJNEOMDKG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OOCJNEOMDKG")->GetStaticField(0x32F60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventOptionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventOptionConfigRow*>**)UnitySDK::FromName("", "OOCJNEOMDKG")->GetStaticField(0x32F68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OOCJNEOMDKG")->GetStaticField(0x32F70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OOCJNEOMDKG")->GetStaticField(0xACC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OOCJNEOMDKG")->GetStaticField(0xACC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCJNEOMDKG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventOptionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventOptionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OOCJNEOMDKG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOCJNEOMDKG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventOptionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventOptionConfigRow*>(*)())((::PBYTE)hIl2Cpp + OOCJNEOMDKG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBonfireEventOptionConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightBonfireEventOptionConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCJNEOMDKG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OOCJNEOMDKG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCJNEOMDKG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCJNEOMDKG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OOCJNEOMDKG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCJNEOMDKG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OOCJNEOMDKG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBonfireEventOptionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBonfireEventOptionConfigRow*))((::PBYTE)hIl2Cpp + OOCJNEOMDKG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
