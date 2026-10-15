#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InclinationTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGKDPMHMNLO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D244480)
#define OGKDPMHMNLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D244A50)
#define OGKDPMHMNLO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2445F0)
#define OGKDPMHMNLO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D243EF0)
#define OGKDPMHMNLO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D244180)
#define OGKDPMHMNLO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D244690)
#define OGKDPMHMNLO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2446E0)
#define OGKDPMHMNLO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2444C0)
#define OGKDPMHMNLO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D244120)
#define OGKDPMHMNLO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2442F0)
#define OGKDPMHMNLO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D244550)
#define OGKDPMHMNLO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D243E70)

inline static constexpr unsigned int OGKDPMHMNLO_TypeDefinitionIndex = 13808;

	class OGKDPMHMNLO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OGKDPMHMNLO")->GetStaticField(0x45DF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTypeRow*>**)UnitySDK::FromName("", "OGKDPMHMNLO")->GetStaticField(0x45DF8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OGKDPMHMNLO")->GetStaticField(0x45E00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OGKDPMHMNLO")->GetStaticField(0x10730);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OGKDPMHMNLO")->GetStaticField(0x10731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGKDPMHMNLO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTypeRow*>*(*)())((::PBYTE)hIl2Cpp + OGKDPMHMNLO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGKDPMHMNLO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTypeRow*>(*)())((::PBYTE)hIl2Cpp + OGKDPMHMNLO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::InclinationTypeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::InclinationTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OGKDPMHMNLO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OGKDPMHMNLO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGKDPMHMNLO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGKDPMHMNLO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OGKDPMHMNLO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGKDPMHMNLO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OGKDPMHMNLO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::InclinationTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::InclinationTypeRow*))((::PBYTE)hIl2Cpp + OGKDPMHMNLO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
