#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAOPBKPKCEK.h"
class LCLDLFLOOMB;
namespace System { class String; }

#define LCLDLFLOOMB_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB612090)
#define LCLDLFLOOMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB611FE0)
#define LCLDLFLOOMB_KKCLALPABKI_OFFSET UNITYSDK_OFFSET(0xB612180)
#define LCLDLFLOOMB_OPBHAHBPLFM_OFFSET UNITYSDK_OFFSET(0xB612140)
#define LCLDLFLOOMB_PPJHDCDKFLE_OFFSET UNITYSDK_OFFSET(0xB612040)
#define LCLDLFLOOMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB6121C0)

inline static constexpr unsigned int LCLDLFLOOMB_TypeDefinitionIndex = 62023;

	class LCLDLFLOOMB : public ::MAOPBKPKCEK
	{
	public:
		::System::UInt32 LHEKOMHBMGA; // 0x18
		::System::Boolean CLHBIOOINHB; // 0x1C
		::System::Boolean OJHOFOJPBLG; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Int32 LKJGKJIJBPB; // 0x20
		::System::UInt32 DOPFFDDBOMO; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + LCLDLFLOOMB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PPJHDCDKFLE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCLDLFLOOMB_PPJHDCDKFLE_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::LCLDLFLOOMB* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::LCLDLFLOOMB*))((::PBYTE)hIl2Cpp + LCLDLFLOOMB_COMPARETO_OFFSET))(this, a1);
		}

		::System::UInt32 OPBHAHBPLFM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCLDLFLOOMB_OPBHAHBPLFM_OFFSET))(this);
		}

		::System::Boolean KKCLALPABKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCLDLFLOOMB_KKCLALPABKI_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCLDLFLOOMB_TOSTRING_OFFSET))(this);
		}

	};
