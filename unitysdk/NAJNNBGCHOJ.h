#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfferingUIPageConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAJNNBGCHOJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1E7D90)
#define NAJNNBGCHOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E8360)
#define NAJNNBGCHOJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1E7F00)
#define NAJNNBGCHOJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E7800)
#define NAJNNBGCHOJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1E7A90)
#define NAJNNBGCHOJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1E7FA0)
#define NAJNNBGCHOJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1E7FF0)
#define NAJNNBGCHOJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1E7DD0)
#define NAJNNBGCHOJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1E7A30)
#define NAJNNBGCHOJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1E7C00)
#define NAJNNBGCHOJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1E7E60)
#define NAJNNBGCHOJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1E7780)

inline static constexpr unsigned int NAJNNBGCHOJ_TypeDefinitionIndex = 14298;

	class NAJNNBGCHOJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NAJNNBGCHOJ")->GetStaticField(0x2C150);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NAJNNBGCHOJ")->GetStaticField(0x2C158);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingUIPageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingUIPageConfigRow*>**)UnitySDK::FromName("", "NAJNNBGCHOJ")->GetStaticField(0x2C160);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NAJNNBGCHOJ")->GetStaticField(0x8A30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NAJNNBGCHOJ")->GetStaticField(0x8A31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingUIPageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingUIPageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingUIPageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OfferingUIPageConfigRow*>(*)())((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::OfferingUIPageConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::OfferingUIPageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::OfferingUIPageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::OfferingUIPageConfigRow*))((::PBYTE)hIl2Cpp + NAJNNBGCHOJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
