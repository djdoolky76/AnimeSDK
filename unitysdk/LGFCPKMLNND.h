#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DMHBBIKICIB;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGFCPKMLNND_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0BF310)
#define LGFCPKMLNND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0BF8E0)
#define LGFCPKMLNND_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0BF480)
#define LGFCPKMLNND_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0BED80)
#define LGFCPKMLNND_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0BF010)
#define LGFCPKMLNND_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0BF520)
#define LGFCPKMLNND_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0BF570)
#define LGFCPKMLNND_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0BF350)
#define LGFCPKMLNND_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0BEFB0)
#define LGFCPKMLNND_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0BF180)
#define LGFCPKMLNND_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0BF3E0)
#define LGFCPKMLNND_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0BED00)

inline static constexpr unsigned int LGFCPKMLNND_TypeDefinitionIndex = 11506;

	class LGFCPKMLNND : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LGFCPKMLNND")->GetStaticField(0x3B0F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LGFCPKMLNND")->GetStaticField(0x3B0F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMHBBIKICIB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMHBBIKICIB*>**)UnitySDK::FromName("", "LGFCPKMLNND")->GetStaticField(0x3B100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LGFCPKMLNND")->GetStaticField(0xBE70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LGFCPKMLNND")->GetStaticField(0xBE71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFCPKMLNND_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMHBBIKICIB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DMHBBIKICIB*>*(*)())((::PBYTE)hIl2Cpp + LGFCPKMLNND_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGFCPKMLNND_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DMHBBIKICIB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DMHBBIKICIB*>(*)())((::PBYTE)hIl2Cpp + LGFCPKMLNND_FPHGMAMDFHE_OFFSET))();
		}

		static ::DMHBBIKICIB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::DMHBBIKICIB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LGFCPKMLNND_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGFCPKMLNND_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFCPKMLNND_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFCPKMLNND_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LGFCPKMLNND_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGFCPKMLNND_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LGFCPKMLNND_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DMHBBIKICIB* a1)
		{
			return ((::System::Void(*)(::DMHBBIKICIB*))((::PBYTE)hIl2Cpp + LGFCPKMLNND_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
