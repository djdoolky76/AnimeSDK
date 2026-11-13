#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAOPBKPKCEK.h"
class LCLDLFLOOMB;
namespace System { class String; }

#define LCLDLFLOOMB_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1AC70970)
#define LCLDLFLOOMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC708C0)
#define LCLDLFLOOMB_KKCLALPABKI_OFFSET UNITYSDK_OFFSET(0x1AC70A60)
#define LCLDLFLOOMB_OPBHAHBPLFM_OFFSET UNITYSDK_OFFSET(0x1AC70A20)
#define LCLDLFLOOMB_PPJHDCDKFLE_OFFSET UNITYSDK_OFFSET(0x1AC70920)
#define LCLDLFLOOMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC70AA0)

inline static constexpr unsigned int LCLDLFLOOMB_TypeDefinitionIndex = 63435;

	class LCLDLFLOOMB : public ::MAOPBKPKCEK
	{
	public:
		::System::UInt32 DOPFFDDBOMO; // 0x18
		::System::UInt32 LHEKOMHBMGA; // 0x1C
		::System::Int32 LKJGKJIJBPB; // 0x20
		::System::Boolean OJHOFOJPBLG; // 0x24
		::System::Boolean CLHBIOOINHB; // 0x25
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
