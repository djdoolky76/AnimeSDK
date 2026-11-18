#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHCEGPHDOID;
namespace System { template <typename T> class Action_1; }

#define DJGEADKNJME___C_IJEIOENOFOI_OFFSET UNITYSDK_OFFSET(0x1A1E60A0)
#define DJGEADKNJME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E6050)
#define DJGEADKNJME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E6090)

inline static constexpr unsigned int DJGEADKNJME___c_TypeDefinitionIndex = 48485;

class DJGEADKNJME___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DJGEADKNJME___c_TypeDefinitionIndex)->GetStaticField(0x3D8B0);
	}
	static ::System::Action_1<::MHCEGPHDOID*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::MHCEGPHDOID*>**)Il2CppClass::FromTypeDefinitionIndex(DJGEADKNJME___c_TypeDefinitionIndex)->GetStaticField(0x3D8B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJGEADKNJME___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGEADKNJME___C__CTOR_OFFSET))(this);
	}

	::System::Void IJEIOENOFOI(::MHCEGPHDOID* INGDOFPJCCK)
	{
		return ((::System::Void(*)(::PVOID, ::MHCEGPHDOID*))((::PBYTE)hIl2Cpp + DJGEADKNJME___C_IJEIOENOFOI_OFFSET))(this, INGDOFPJCCK);
	}
};
