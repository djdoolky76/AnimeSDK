#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define AD6576CA1EB408F4_B4D270C3BA7C818E_OFFSET UNITYSDK_OFFSET(0x1F2A920)
#define AD6576CA1EB408F4_E23DD07E692D56DE_1_OFFSET UNITYSDK_OFFSET(0x3BEB7D0)
#define AD6576CA1EB408F4_E23DD07E692D56DE_2_OFFSET UNITYSDK_OFFSET(0x3BEB760)
#define AD6576CA1EB408F4_E23DD07E692D56DE_OFFSET UNITYSDK_OFFSET(0x1F2A920)
#define AD6576CA1EB408F4_F271F47822932EED_1_OFFSET UNITYSDK_OFFSET(0x3BEB6F0)
#define AD6576CA1EB408F4_F271F47822932EED_2_OFFSET UNITYSDK_OFFSET(0x3BEB670)
#define AD6576CA1EB408F4_F271F47822932EED_OFFSET UNITYSDK_OFFSET(0x3BEB5E0)

inline static constexpr unsigned int AD6576CA1EB408F4_TypeDefinitionIndex = 11263;

class AD6576CA1EB408F4 : public ::System::Object
{
public:
	static ::System::String* E23DD07E692D56DE(::System::String* F79B4D487F303AB2)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AD6576CA1EB408F4_E23DD07E692D56DE_OFFSET))(F79B4D487F303AB2);
	}

	static ::System::String* F271F47822932EED(::System::String* A4804899BB9E2E63, ::System::Object* ED6BA5E2880F301C, ::System::Object* AB470184008E3FF1, ::System::Object* F65D7F6F841641BE)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + AD6576CA1EB408F4_F271F47822932EED_OFFSET))(A4804899BB9E2E63, ED6BA5E2880F301C, AB470184008E3FF1, F65D7F6F841641BE);
	}

	static ::System::String* E23DD07E692D56DE_1(::System::Globalization::CultureInfo* B639ACA4E77C2506, ::System::String* F79B4D487F303AB2, ::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA)
	{
		return ((::System::String*(*)(::System::Globalization::CultureInfo*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + AD6576CA1EB408F4_E23DD07E692D56DE_1_OFFSET))(B639ACA4E77C2506, F79B4D487F303AB2, F0D3F87128A7C4CA);
	}

	static ::System::String* F271F47822932EED_1(::System::String* A4804899BB9E2E63, ::System::Object* ED6BA5E2880F301C)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + AD6576CA1EB408F4_F271F47822932EED_1_OFFSET))(A4804899BB9E2E63, ED6BA5E2880F301C);
	}

	static ::System::String* F271F47822932EED_2(::System::String* A4804899BB9E2E63, ::System::Object* ED6BA5E2880F301C, ::System::Object* AB470184008E3FF1)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + AD6576CA1EB408F4_F271F47822932EED_2_OFFSET))(A4804899BB9E2E63, ED6BA5E2880F301C, AB470184008E3FF1);
	}

	static ::System::String* B4D270C3BA7C818E(::System::String* BB83557721B5F386)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AD6576CA1EB408F4_B4D270C3BA7C818E_OFFSET))(BB83557721B5F386);
	}

	static ::System::String* E23DD07E692D56DE_2(::System::String* F79B4D487F303AB2, ::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + AD6576CA1EB408F4_E23DD07E692D56DE_2_OFFSET))(F79B4D487F303AB2, F0D3F87128A7C4CA);
	}
};
