#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CICKHELHHHO;
class CMHFBLDNPGB;
class JFCFNCPPFKI;
class LGFMGCDDBGM;
class PEFBGOANFHP;
namespace System { class Exception; }

#define CICKHELHHHO___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16E34310)
#define CICKHELHHHO___C__DISPLAYCLASS2_0__REQUESTSETTLEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x16E37370)
#define CICKHELHHHO___C__DISPLAYCLASS2_0__REQUESTSETTLEMENT_B__1_OFFSET UNITYSDK_OFFSET(0x16E373B0)
#define CICKHELHHHO___C__DISPLAYCLASS2_0__REQUESTSETTLEMENT_B__2_OFFSET UNITYSDK_OFFSET(0x16E373E0)
#define CICKHELHHHO___C__DISPLAYCLASS2_0__REQUESTSETTLEMENT_B__3_OFFSET UNITYSDK_OFFSET(0x16E37420)

inline static constexpr unsigned int CICKHELHHHO___c__DisplayClass2_0_TypeDefinitionIndex = 77138;

	class CICKHELHHHO___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::LGFMGCDDBGM* result; // 0x10
		::CICKHELHHHO* __4__this; // 0x18
		::JFCFNCPPFKI* session; // 0x20
		::System::Boolean skipSettlement; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestSettlement_b__0(::CMHFBLDNPGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMHFBLDNPGB*))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__DISPLAYCLASS2_0__REQUESTSETTLEMENT_B__0_OFFSET))(this, a1);
		}

		::System::Void _RequestSettlement_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__DISPLAYCLASS2_0__REQUESTSETTLEMENT_B__1_OFFSET))(this, a1);
		}

		::System::Void _RequestSettlement_b__2(::PEFBGOANFHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEFBGOANFHP*))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__DISPLAYCLASS2_0__REQUESTSETTLEMENT_B__2_OFFSET))(this, a1);
		}

		::System::Void _RequestSettlement_b__3(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CICKHELHHHO___C__DISPLAYCLASS2_0__REQUESTSETTLEMENT_B__3_OFFSET))(this, a1);
		}

	};
