#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGachaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMIPMOADCDF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D20A2D0)
#define NMIPMOADCDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20A850)
#define NMIPMOADCDF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D20A440)
#define NMIPMOADCDF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D209DC0)
#define NMIPMOADCDF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D20A050)
#define NMIPMOADCDF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D20A4E0)
#define NMIPMOADCDF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D20A530)
#define NMIPMOADCDF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D20A310)
#define NMIPMOADCDF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D209FF0)
#define NMIPMOADCDF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D20A180)
#define NMIPMOADCDF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D20A3A0)
#define NMIPMOADCDF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D209D40)

inline static constexpr unsigned int NMIPMOADCDF_TypeDefinitionIndex = 11773;

	class NMIPMOADCDF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NMIPMOADCDF")->GetStaticField(0x41C10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NMIPMOADCDF")->GetStaticField(0x41C18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaRow*>**)UnitySDK::FromName("", "NMIPMOADCDF")->GetStaticField(0x41C20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NMIPMOADCDF")->GetStaticField(0xFA20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NMIPMOADCDF")->GetStaticField(0xFA21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMIPMOADCDF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaRow*>*(*)())((::PBYTE)hIl2Cpp + NMIPMOADCDF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMIPMOADCDF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaRow*>(*)())((::PBYTE)hIl2Cpp + NMIPMOADCDF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveGachaRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveGachaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NMIPMOADCDF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMIPMOADCDF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMIPMOADCDF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMIPMOADCDF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NMIPMOADCDF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NMIPMOADCDF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NMIPMOADCDF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveGachaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveGachaRow*))((::PBYTE)hIl2Cpp + NMIPMOADCDF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
