#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleBuffConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEGIIDNNCDL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E60A8F0)
#define OEGIIDNNCDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60AEC0)
#define OEGIIDNNCDL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E60AA60)
#define OEGIIDNNCDL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E60A360)
#define OEGIIDNNCDL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E60A5F0)
#define OEGIIDNNCDL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E60AB00)
#define OEGIIDNNCDL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E60AB50)
#define OEGIIDNNCDL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E60A930)
#define OEGIIDNNCDL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E60A590)
#define OEGIIDNNCDL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E60A760)
#define OEGIIDNNCDL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E60A9C0)
#define OEGIIDNNCDL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E60A2E0)

inline static constexpr unsigned int OEGIIDNNCDL_TypeDefinitionIndex = 11942;

	class OEGIIDNNCDL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>**)UnitySDK::FromName("", "OEGIIDNNCDL")->GetStaticField(0x56140);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OEGIIDNNCDL")->GetStaticField(0x56148);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEGIIDNNCDL")->GetStaticField(0x56150);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OEGIIDNNCDL")->GetStaticField(0x125C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OEGIIDNNCDL")->GetStaticField(0x125C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGIIDNNCDL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>*(*)())((::PBYTE)hIl2Cpp + OEGIIDNNCDL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEGIIDNNCDL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>(*)())((::PBYTE)hIl2Cpp + OEGIIDNNCDL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleBuffConditionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleBuffConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OEGIIDNNCDL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEGIIDNNCDL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGIIDNNCDL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGIIDNNCDL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OEGIIDNNCDL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEGIIDNNCDL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OEGIIDNNCDL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleBuffConditionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleBuffConditionRow*))((::PBYTE)hIl2Cpp + OEGIIDNNCDL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
