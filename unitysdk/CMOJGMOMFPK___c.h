#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendRewardType.h"
#include "unitysdk/System/Object.h"
class FHDJBLEGAHH;
namespace RPG::Client { class ActivityLocalLegendRewardGroup; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMOJGMOMFPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA415C0)
#define CMOJGMOMFPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA41600)
#define CMOJGMOMFPK___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0xDA41610)
#define CMOJGMOMFPK___C__CREATE_B__0_1_OFFSET UNITYSDK_OFFSET(0xDA41620)
#define CMOJGMOMFPK___C__CREATE_B__0_2_OFFSET UNITYSDK_OFFSET(0xDA41A70)
#define CMOJGMOMFPK___C__CREATE_B__0_3_OFFSET UNITYSDK_OFFSET(0xDA41A90)
#define CMOJGMOMFPK___C__CREATE_B__0_4_OFFSET UNITYSDK_OFFSET(0xDA41AB0)

inline static constexpr unsigned int CMOJGMOMFPK___c_TypeDefinitionIndex = 61569;

	class CMOJGMOMFPK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FHDJBLEGAHH*, ::System::UInt32>** StaticGet___9__0_3()
		{
			return (::System::Func_2<::FHDJBLEGAHH*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C20);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::GameCore::ActivityLocalLegendRewardType>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::GameCore::ActivityLocalLegendRewardType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C28);
		}

		static ::System::Func_2<::FHDJBLEGAHH*, ::System::UInt32>** StaticGet___9__0_4()
		{
			return (::System::Func_2<::FHDJBLEGAHH*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C38);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::ActivityLocalLegendRewardGroup*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::ActivityLocalLegendRewardGroup*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C40);
		}

		static ::System::Func_2<::FHDJBLEGAHH*, ::System::Int32>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::FHDJBLEGAHH*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMOJGMOMFPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOJGMOMFPK___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivityLocalLegendRewardType _Create_b__0_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::RPG::GameCore::ActivityLocalLegendRewardType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + CMOJGMOMFPK___C__CREATE_B__0_0_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityLocalLegendRewardGroup* _Create_b__0_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::RPG::Client::ActivityLocalLegendRewardGroup*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + CMOJGMOMFPK___C__CREATE_B__0_1_OFFSET))(this, a1);
		}

		::System::Int32 _Create_b__0_2(::FHDJBLEGAHH* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FHDJBLEGAHH*))((::PBYTE)hIl2Cpp + CMOJGMOMFPK___C__CREATE_B__0_2_OFFSET))(this, a1);
		}

		::System::UInt32 _Create_b__0_3(::FHDJBLEGAHH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::FHDJBLEGAHH*))((::PBYTE)hIl2Cpp + CMOJGMOMFPK___C__CREATE_B__0_3_OFFSET))(this, a1);
		}

		::System::UInt32 _Create_b__0_4(::FHDJBLEGAHH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::FHDJBLEGAHH*))((::PBYTE)hIl2Cpp + CMOJGMOMFPK___C__CREATE_B__0_4_OFFSET))(this, a1);
		}

	};
