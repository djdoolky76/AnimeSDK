#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LPKKPJLEOLN;
namespace System { template <typename T> class Action_1; }

#define AHIODBHNEOE___C_KNPCEGLCNEM_OFFSET UNITYSDK_OFFSET(0x16FEC1F0)
#define AHIODBHNEOE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FEC1A0)
#define AHIODBHNEOE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEC1E0)

inline static constexpr unsigned int AHIODBHNEOE___c_TypeDefinitionIndex = 85643;

class AHIODBHNEOE___c : public ::System::Object
{
public:
	static ::System::Action_1<::LPKKPJLEOLN*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::LPKKPJLEOLN*>**)Il2CppClass::FromTypeDefinitionIndex(AHIODBHNEOE___c_TypeDefinitionIndex)->GetStaticField(0x3D330);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AHIODBHNEOE___c_TypeDefinitionIndex)->GetStaticField(0x3D338);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHIODBHNEOE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIODBHNEOE___C__CTOR_OFFSET))(this);
	}

	::System::Void KNPCEGLCNEM(::LPKKPJLEOLN* PAENPLICFHC)
	{
		return ((::System::Void(*)(::PVOID, ::LPKKPJLEOLN*))((::PBYTE)hIl2Cpp + AHIODBHNEOE___C_KNPCEGLCNEM_OFFSET))(this, PAENPLICFHC);
	}
};
