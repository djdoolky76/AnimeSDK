#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define OOCCBMLAELL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC86E6B0)
#define OOCCBMLAELL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC86E6F0)
#define OOCCBMLAELL___C___ONFIRSTTIMESETUPDRAWPILE_B__96_0_OFFSET UNITYSDK_OFFSET(0xC86E700)

inline static constexpr unsigned int OOCCBMLAELL___c_TypeDefinitionIndex = 57196;

	class OOCCBMLAELL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58FC0);
		}

		static ::System::Comparison_1<::BJHMBGLPOLB*>** StaticGet___9__96_0()
		{
			return (::System::Comparison_1<::BJHMBGLPOLB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58FC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCCBMLAELL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __OnFirstTimeSetupDrawPile_b__96_0(::BJHMBGLPOLB* a1, ::BJHMBGLPOLB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::BJHMBGLPOLB*, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + OOCCBMLAELL___C___ONFIRSTTIMESETUPDRAWPILE_B__96_0_OFFSET))(this, a1, a2);
		}

	};
