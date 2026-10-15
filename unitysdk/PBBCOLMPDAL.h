#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MMPHMHBBGJK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBBCOLMPDAL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C3BD0)
#define PBBCOLMPDAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C41A0)
#define PBBCOLMPDAL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C3D40)
#define PBBCOLMPDAL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C3640)
#define PBBCOLMPDAL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C38D0)
#define PBBCOLMPDAL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C3DE0)
#define PBBCOLMPDAL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C3E30)
#define PBBCOLMPDAL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C3C10)
#define PBBCOLMPDAL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C3870)
#define PBBCOLMPDAL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C3A40)
#define PBBCOLMPDAL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C3CA0)
#define PBBCOLMPDAL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C35C0)

inline static constexpr unsigned int PBBCOLMPDAL_TypeDefinitionIndex = 11526;

	class PBBCOLMPDAL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PBBCOLMPDAL")->GetStaticField(0x3DE20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMPHMHBBGJK*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMPHMHBBGJK*>**)UnitySDK::FromName("", "PBBCOLMPDAL")->GetStaticField(0x3DE28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PBBCOLMPDAL")->GetStaticField(0x3DE30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PBBCOLMPDAL")->GetStaticField(0xD3D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PBBCOLMPDAL")->GetStaticField(0xD3D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBBCOLMPDAL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMPHMHBBGJK*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMPHMHBBGJK*>*(*)())((::PBYTE)hIl2Cpp + PBBCOLMPDAL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBBCOLMPDAL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMPHMHBBGJK*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMPHMHBBGJK*>(*)())((::PBYTE)hIl2Cpp + PBBCOLMPDAL_FPHGMAMDFHE_OFFSET))();
		}

		static ::MMPHMHBBGJK* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MMPHMHBBGJK*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PBBCOLMPDAL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBBCOLMPDAL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBBCOLMPDAL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBBCOLMPDAL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PBBCOLMPDAL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBBCOLMPDAL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PBBCOLMPDAL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MMPHMHBBGJK* a1)
		{
			return ((::System::Void(*)(::MMPHMHBBGJK*))((::PBYTE)hIl2Cpp + PBBCOLMPDAL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
