#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EA410179077D0623_AECC6F3341D832EF_OFFSET UNITYSDK_OFFSET(0x2960F50)
#define EA410179077D0623_B1E2C02DDE8FE68E_OFFSET UNITYSDK_OFFSET(0x2960A80)
#define EA410179077D0623_E279BF28598A2022_OFFSET UNITYSDK_OFFSET(0x2960B40)
#define EA410179077D0623__CCTOR_OFFSET UNITYSDK_OFFSET(0x29610E0)
#define EA410179077D0623__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EA410179077D0623_TypeDefinitionIndex = 15493;

class EA410179077D0623 : public ::System::Object
{
public:
	static ::EA410179077D0623** StaticGet_EE999965A1D2099B()
	{
		return (::EA410179077D0623**)Il2CppClass::FromTypeDefinitionIndex(EA410179077D0623_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Boolean B1E2C02DDE8FE68E(::System::String* FDE622F10FC038DF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EA410179077D0623_B1E2C02DDE8FE68E_OFFSET))(this, FDE622F10FC038DF);
	}

	::System::String* E279BF28598A2022()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EA410179077D0623_E279BF28598A2022_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EA410179077D0623__CCTOR_OFFSET))();
	}

	::System::Void AECC6F3341D832EF(::System::String* FEF7E5EDEA9C5C04)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EA410179077D0623_AECC6F3341D832EF_OFFSET))(this, FEF7E5EDEA9C5C04);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA410179077D0623__CTOR_OFFSET))(this);
	}
};
