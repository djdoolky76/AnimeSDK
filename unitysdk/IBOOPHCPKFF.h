#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class World3DMapEntranceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBOOPHCPKFF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEB2330)
#define IBOOPHCPKFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB28F0)
#define IBOOPHCPKFF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEB24A0)
#define IBOOPHCPKFF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEB1DA0)
#define IBOOPHCPKFF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEB2030)
#define IBOOPHCPKFF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEB2540)
#define IBOOPHCPKFF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEB2590)
#define IBOOPHCPKFF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEB2370)
#define IBOOPHCPKFF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEB1FD0)
#define IBOOPHCPKFF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEB2160)
#define IBOOPHCPKFF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEB2400)
#define IBOOPHCPKFF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEB1D20)

inline static constexpr unsigned int IBOOPHCPKFF_TypeDefinitionIndex = 14025;

	class IBOOPHCPKFF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x1F4E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x1F4E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>**)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x1F4F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x71B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x71B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::World3DMapEntranceConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::World3DMapEntranceConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::World3DMapEntranceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::World3DMapEntranceConfigRow*))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
