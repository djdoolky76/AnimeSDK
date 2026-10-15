#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonModuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANEONDIFKOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE23E0)
#define ANEONDIFKOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE29A0)
#define ANEONDIFKOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE2550)
#define ANEONDIFKOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE1E40)
#define ANEONDIFKOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE20D0)
#define ANEONDIFKOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE25F0)
#define ANEONDIFKOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE2640)
#define ANEONDIFKOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE2420)
#define ANEONDIFKOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE2070)
#define ANEONDIFKOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE2240)
#define ANEONDIFKOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE24B0)
#define ANEONDIFKOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE1DC0)

inline static constexpr unsigned int ANEONDIFKOM_TypeDefinitionIndex = 13591;

	class ANEONDIFKOM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ANEONDIFKOM")->GetStaticField(0x3C160);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ANEONDIFKOM")->GetStaticField(0x3C168);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>**)UnitySDK::FromName("", "ANEONDIFKOM")->GetStaticField(0x3C170);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ANEONDIFKOM")->GetStaticField(0xCD40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ANEONDIFKOM")->GetStaticField(0xCD41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANEONDIFKOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ANEONDIFKOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANEONDIFKOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + ANEONDIFKOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonModuleConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightSeasonModuleConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ANEONDIFKOM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANEONDIFKOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANEONDIFKOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANEONDIFKOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANEONDIFKOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANEONDIFKOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ANEONDIFKOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonModuleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonModuleConfigRow*))((::PBYTE)hIl2Cpp + ANEONDIFKOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
