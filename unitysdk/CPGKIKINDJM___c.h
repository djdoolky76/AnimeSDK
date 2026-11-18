#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CPGKIKINDJM___C_FMMHFJOFBBA_OFFSET UNITYSDK_OFFSET(0x18316580)
#define CPGKIKINDJM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18316530)
#define CPGKIKINDJM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18316570)

inline static constexpr unsigned int CPGKIKINDJM___c_TypeDefinitionIndex = 61846;

class CPGKIKINDJM___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__22_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CPGKIKINDJM___c_TypeDefinitionIndex)->GetStaticField(0x4B680);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CPGKIKINDJM___c_TypeDefinitionIndex)->GetStaticField(0x4B688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPGKIKINDJM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGKIKINDJM___C__CTOR_OFFSET))(this);
	}

	::System::String* FMMHFJOFBBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGKIKINDJM___C_FMMHFJOFBBA_OFFSET))(this);
	}
};
