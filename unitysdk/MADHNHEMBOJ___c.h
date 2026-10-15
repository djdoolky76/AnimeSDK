#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MADHNHEMBOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB844B20)
#define MADHNHEMBOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB844B60)
#define MADHNHEMBOJ___C__ADDHIGHLIGHTENTITY_B__143_0_OFFSET UNITYSDK_OFFSET(0xB844B70)

inline static constexpr unsigned int MADHNHEMBOJ___c_TypeDefinitionIndex = 71204;

	class MADHNHEMBOJ___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::UInt32>** StaticGet___9__143_0()
		{
			return (::System::Comparison_1<::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AE00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AE08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _AddHighlightEntity_b__143_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MADHNHEMBOJ___C__ADDHIGHLIGHTENTITY_B__143_0_OFFSET))(this, a1, a2);
		}

	};
