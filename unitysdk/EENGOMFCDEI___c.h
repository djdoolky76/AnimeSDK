#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EENGOMFCDEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5FC0C0)
#define EENGOMFCDEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FC100)
#define EENGOMFCDEI___C__CONVERTANDSETCATS_B__29_0_OFFSET UNITYSDK_OFFSET(0x1C5FC150)
#define EENGOMFCDEI___C__CONVERTANDSETEFFECTS_B__30_0_OFFSET UNITYSDK_OFFSET(0x1C5FC190)
#define EENGOMFCDEI___C__CONVERTANDSETSECTIONREGIONS_B__28_0_OFFSET UNITYSDK_OFFSET(0x1C5FC110)
#define EENGOMFCDEI___C__CONVERTANDSETSPARKLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1C5FC1D0)

inline static constexpr unsigned int EENGOMFCDEI___c_TypeDefinitionIndex = 37451;

	class EENGOMFCDEI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::UInt32>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::String*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C40);
		}

		static ::System::Func_2<::System::String*, ::System::UInt32>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::System::String*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C48);
		}

		static ::System::Func_2<::System::String*, ::System::UInt32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::String*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C50);
		}

		static ::System::Func_2<::System::String*, ::System::UInt32>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::System::String*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C58);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EENGOMFCDEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENGOMFCDEI___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _ConvertAndSetSectionRegions_b__28_0(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EENGOMFCDEI___C__CONVERTANDSETSECTIONREGIONS_B__28_0_OFFSET))(this, a1);
		}

		::System::UInt32 _ConvertAndSetCats_b__29_0(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EENGOMFCDEI___C__CONVERTANDSETCATS_B__29_0_OFFSET))(this, a1);
		}

		::System::UInt32 _ConvertAndSetEffects_b__30_0(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EENGOMFCDEI___C__CONVERTANDSETEFFECTS_B__30_0_OFFSET))(this, a1);
		}

		::System::UInt32 _ConvertAndSetSparkle_b__31_0(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EENGOMFCDEI___C__CONVERTANDSETSPARKLE_B__31_0_OFFSET))(this, a1);
		}

	};
