#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MADHNHEMBOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC0AC990)
#define MADHNHEMBOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC0AC9D0)
#define MADHNHEMBOJ___C__ADDHIGHLIGHTENTITY_B__148_0_OFFSET UNITYSDK_OFFSET(0xC0AC9E0)

inline static constexpr unsigned int MADHNHEMBOJ___c_TypeDefinitionIndex = 73187;

	class MADHNHEMBOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D230);
		}

		static ::System::Comparison_1<::System::UInt32>** StaticGet___9__148_0()
		{
			return (::System::Comparison_1<::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _AddHighlightEntity_b__148_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C__ADDHIGHLIGHTENTITY_B__148_0_OFFSET))(this, a1, a2);
		}

	};
