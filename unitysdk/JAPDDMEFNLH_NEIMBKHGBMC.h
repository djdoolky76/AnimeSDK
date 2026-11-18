#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }

#define JAPDDMEFNLH_NEIMBKHGBMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x198989D0)
#define JAPDDMEFNLH_NEIMBKHGBMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19898D90)
#define JAPDDMEFNLH_NEIMBKHGBMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19898EF0)
#define JAPDDMEFNLH_NEIMBKHGBMC__CTOR_OFFSET UNITYSDK_OFFSET(0x19898ED0)

inline static constexpr unsigned int JAPDDMEFNLH_NEIMBKHGBMC_TypeDefinitionIndex = 67261;

class JAPDDMEFNLH_NEIMBKHGBMC
{
public:
	static ::JAPDDMEFNLH_NEIMBKHGBMC** StaticGet_DDGNFJDLOKA()
	{
		return (::JAPDDMEFNLH_NEIMBKHGBMC**)Il2CppClass::FromTypeDefinitionIndex(JAPDDMEFNLH_NEIMBKHGBMC_TypeDefinitionIndex)->GetStaticField(0x48180);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_NEIMBKHGBMC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAPDDMEFNLH_NEIMBKHGBMC__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::System::Nullable_1<::System::Object*> HAAEBCOBKFF, ::System::Nullable_1<::System::Object*> BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Object*>, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_NEIMBKHGBMC_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::System::Nullable_1<::System::Object*> EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + JAPDDMEFNLH_NEIMBKHGBMC_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
