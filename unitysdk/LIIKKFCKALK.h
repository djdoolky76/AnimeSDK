#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonUnitDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIIKKFCKALK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F9400)
#define LIIKKFCKALK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F9F50)
#define LIIKKFCKALK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F97A0)
#define LIIKKFCKALK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F9440)
#define LIIKKFCKALK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F9C90)
#define LIIKKFCKALK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F9840)
#define LIIKKFCKALK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F9890)
#define LIIKKFCKALK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F9670)
#define LIIKKFCKALK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F9C30)
#define LIIKKFCKALK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F9E00)
#define LIIKKFCKALK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F9700)
#define LIIKKFCKALK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F9BB0)

inline static constexpr unsigned int LIIKKFCKALK_TypeDefinitionIndex = 15208;

	class LIIKKFCKALK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIIKKFCKALK")->GetStaticField(0x3E160);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SummonUnitDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SummonUnitDataRow*>**)UnitySDK::FromName("", "LIIKKFCKALK")->GetStaticField(0x3E168);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LIIKKFCKALK")->GetStaticField(0x3E170);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIIKKFCKALK")->GetStaticField(0xD4A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIIKKFCKALK")->GetStaticField(0xD4A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIIKKFCKALK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIIKKFCKALK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIIKKFCKALK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIIKKFCKALK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIIKKFCKALK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIIKKFCKALK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIIKKFCKALK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SummonUnitDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SummonUnitDataRow*))((::PBYTE)hIl2Cpp + LIIKKFCKALK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SummonUnitDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SummonUnitDataRow*>*(*)())((::PBYTE)hIl2Cpp + LIIKKFCKALK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIIKKFCKALK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SummonUnitDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SummonUnitDataRow*>(*)())((::PBYTE)hIl2Cpp + LIIKKFCKALK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SummonUnitDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SummonUnitDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LIIKKFCKALK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
