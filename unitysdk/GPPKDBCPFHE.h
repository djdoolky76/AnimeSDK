#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LNMKBIJDEJK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPPKDBCPFHE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E056C80)
#define GPPKDBCPFHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E057250)
#define GPPKDBCPFHE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E056DF0)
#define GPPKDBCPFHE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0566F0)
#define GPPKDBCPFHE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E056980)
#define GPPKDBCPFHE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E056E90)
#define GPPKDBCPFHE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E056EE0)
#define GPPKDBCPFHE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E056CC0)
#define GPPKDBCPFHE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E056920)
#define GPPKDBCPFHE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E056AF0)
#define GPPKDBCPFHE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E056D50)
#define GPPKDBCPFHE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E056670)

inline static constexpr unsigned int GPPKDBCPFHE_TypeDefinitionIndex = 14065;

	class GPPKDBCPFHE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LNMKBIJDEJK*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LNMKBIJDEJK*>**)UnitySDK::FromName("", "GPPKDBCPFHE")->GetStaticField(0x12AF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GPPKDBCPFHE")->GetStaticField(0x12AF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GPPKDBCPFHE")->GetStaticField(0x12B00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GPPKDBCPFHE")->GetStaticField(0x3C70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GPPKDBCPFHE")->GetStaticField(0x3C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPPKDBCPFHE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LNMKBIJDEJK*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LNMKBIJDEJK*>*(*)())((::PBYTE)hIl2Cpp + GPPKDBCPFHE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPPKDBCPFHE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LNMKBIJDEJK*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LNMKBIJDEJK*>(*)())((::PBYTE)hIl2Cpp + GPPKDBCPFHE_FPHGMAMDFHE_OFFSET))();
		}

		static ::LNMKBIJDEJK* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LNMKBIJDEJK*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GPPKDBCPFHE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPPKDBCPFHE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPPKDBCPFHE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPPKDBCPFHE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GPPKDBCPFHE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPPKDBCPFHE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GPPKDBCPFHE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LNMKBIJDEJK* a1)
		{
			return ((::System::Void(*)(::LNMKBIJDEJK*))((::PBYTE)hIl2Cpp + GPPKDBCPFHE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
