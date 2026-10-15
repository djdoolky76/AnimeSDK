#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingExamRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGJMJGGMHHH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D139940)
#define MGJMJGGMHHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D139F10)
#define MGJMJGGMHHH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D139AB0)
#define MGJMJGGMHHH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1393B0)
#define MGJMJGGMHHH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D139640)
#define MGJMJGGMHHH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D139B50)
#define MGJMJGGMHHH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D139BA0)
#define MGJMJGGMHHH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D139980)
#define MGJMJGGMHHH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1395E0)
#define MGJMJGGMHHH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1397B0)
#define MGJMJGGMHHH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D139A10)
#define MGJMJGGMHHH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D139330)

inline static constexpr unsigned int MGJMJGGMHHH_TypeDefinitionIndex = 12450;

	class MGJMJGGMHHH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MGJMJGGMHHH")->GetStaticField(0x44620);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MGJMJGGMHHH")->GetStaticField(0x44628);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>**)UnitySDK::FromName("", "MGJMJGGMHHH")->GetStaticField(0x44630);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGJMJGGMHHH")->GetStaticField(0x102B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MGJMJGGMHHH")->GetStaticField(0x102B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGJMJGGMHHH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>*(*)())((::PBYTE)hIl2Cpp + MGJMJGGMHHH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGJMJGGMHHH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>(*)())((::PBYTE)hIl2Cpp + MGJMJGGMHHH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingExamRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingExamRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MGJMJGGMHHH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGJMJGGMHHH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGJMJGGMHHH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGJMJGGMHHH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MGJMJGGMHHH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJMJGGMHHH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MGJMJGGMHHH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingExamRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingExamRow*))((::PBYTE)hIl2Cpp + MGJMJGGMHHH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
