#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RandomEventChoiceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDGDAGFNEJC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1FA480)
#define NDGDAGFNEJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1FAA50)
#define NDGDAGFNEJC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1FA5F0)
#define NDGDAGFNEJC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1F9EF0)
#define NDGDAGFNEJC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1FA180)
#define NDGDAGFNEJC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1FA690)
#define NDGDAGFNEJC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1FA6E0)
#define NDGDAGFNEJC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1FA4C0)
#define NDGDAGFNEJC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1FA120)
#define NDGDAGFNEJC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1FA2F0)
#define NDGDAGFNEJC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1FA550)
#define NDGDAGFNEJC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1F9E70)

inline static constexpr unsigned int NDGDAGFNEJC_TypeDefinitionIndex = 14249;

	class NDGDAGFNEJC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>**)UnitySDK::FromName("", "NDGDAGFNEJC")->GetStaticField(0x2DA70);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NDGDAGFNEJC")->GetStaticField(0x2DA78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NDGDAGFNEJC")->GetStaticField(0x2DA80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NDGDAGFNEJC")->GetStaticField(0x9520);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NDGDAGFNEJC")->GetStaticField(0x9521);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDGDAGFNEJC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>*(*)())((::PBYTE)hIl2Cpp + NDGDAGFNEJC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDGDAGFNEJC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>(*)())((::PBYTE)hIl2Cpp + NDGDAGFNEJC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RandomEventChoiceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RandomEventChoiceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NDGDAGFNEJC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NDGDAGFNEJC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDGDAGFNEJC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDGDAGFNEJC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NDGDAGFNEJC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NDGDAGFNEJC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NDGDAGFNEJC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RandomEventChoiceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RandomEventChoiceRow*))((::PBYTE)hIl2Cpp + NDGDAGFNEJC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
