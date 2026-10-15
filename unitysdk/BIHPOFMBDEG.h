#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournNPCRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIHPOFMBDEG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D7D9E30)
#define BIHPOFMBDEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7DA3B0)
#define BIHPOFMBDEG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D7D9FA0)
#define BIHPOFMBDEG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D7D98E0)
#define BIHPOFMBDEG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D7D9B70)
#define BIHPOFMBDEG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D7DA040)
#define BIHPOFMBDEG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D7DA090)
#define BIHPOFMBDEG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D7D9E70)
#define BIHPOFMBDEG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D7D9B10)
#define BIHPOFMBDEG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D7D9CE0)
#define BIHPOFMBDEG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D7D9F00)
#define BIHPOFMBDEG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D7D9860)

inline static constexpr unsigned int BIHPOFMBDEG_TypeDefinitionIndex = 15038;

	class BIHPOFMBDEG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BIHPOFMBDEG")->GetStaticField(0x42000);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BIHPOFMBDEG")->GetStaticField(0x42008);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>**)UnitySDK::FromName("", "BIHPOFMBDEG")->GetStaticField(0x42010);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BIHPOFMBDEG")->GetStaticField(0xFB10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BIHPOFMBDEG")->GetStaticField(0xFB11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIHPOFMBDEG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>*(*)())((::PBYTE)hIl2Cpp + BIHPOFMBDEG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BIHPOFMBDEG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>(*)())((::PBYTE)hIl2Cpp + BIHPOFMBDEG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournNPCRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournNPCRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BIHPOFMBDEG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BIHPOFMBDEG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIHPOFMBDEG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIHPOFMBDEG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BIHPOFMBDEG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIHPOFMBDEG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BIHPOFMBDEG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournNPCRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournNPCRow*))((::PBYTE)hIl2Cpp + BIHPOFMBDEG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
