#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NDFJCBDCHGP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLKKMLLALCH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC23BC0)
#define CLKKMLLALCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC24190)
#define CLKKMLLALCH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC23D30)
#define CLKKMLLALCH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC23630)
#define CLKKMLLALCH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC238C0)
#define CLKKMLLALCH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC23DD0)
#define CLKKMLLALCH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC23E20)
#define CLKKMLLALCH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC23C00)
#define CLKKMLLALCH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC23860)
#define CLKKMLLALCH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC23A30)
#define CLKKMLLALCH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC23C90)
#define CLKKMLLALCH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC235B0)

inline static constexpr unsigned int CLKKMLLALCH_TypeDefinitionIndex = 11648;

	class CLKKMLLALCH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CLKKMLLALCH")->GetStaticField(0x43330);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDFJCBDCHGP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDFJCBDCHGP*>**)UnitySDK::FromName("", "CLKKMLLALCH")->GetStaticField(0x43338);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CLKKMLLALCH")->GetStaticField(0x43340);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CLKKMLLALCH")->GetStaticField(0x10320);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CLKKMLLALCH")->GetStaticField(0x10321);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLKKMLLALCH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDFJCBDCHGP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDFJCBDCHGP*>*(*)())((::PBYTE)hIl2Cpp + CLKKMLLALCH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLKKMLLALCH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NDFJCBDCHGP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NDFJCBDCHGP*>(*)())((::PBYTE)hIl2Cpp + CLKKMLLALCH_FPHGMAMDFHE_OFFSET))();
		}

		static ::NDFJCBDCHGP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NDFJCBDCHGP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLKKMLLALCH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLKKMLLALCH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLKKMLLALCH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLKKMLLALCH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLKKMLLALCH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLKKMLLALCH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CLKKMLLALCH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NDFJCBDCHGP* a1)
		{
			return ((::System::Void(*)(::NDFJCBDCHGP*))((::PBYTE)hIl2Cpp + CLKKMLLALCH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
