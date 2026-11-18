#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJPJMKIHBG.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IPDBFGGDHIF___C_CIMNONGJLMD_OFFSET UNITYSDK_OFFSET(0x197E6BD0)
#define IPDBFGGDHIF___C_GNIPLJEEGBE_OFFSET UNITYSDK_OFFSET(0x197E6C70)
#define IPDBFGGDHIF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197E6B80)
#define IPDBFGGDHIF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197E6BC0)

inline static constexpr unsigned int IPDBFGGDHIF___c_TypeDefinitionIndex = 92733;

class IPDBFGGDHIF___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__16_1()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IPDBFGGDHIF___c_TypeDefinitionIndex)->GetStaticField(0x4BC10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IPDBFGGDHIF___c_TypeDefinitionIndex)->GetStaticField(0x4BC18);
	}
	static ::System::Func_2<::FHJPJMKIHBG, ::System::String*>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::FHJPJMKIHBG, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IPDBFGGDHIF___c_TypeDefinitionIndex)->GetStaticField(0x4BC20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPDBFGGDHIF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPDBFGGDHIF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean CIMNONGJLMD(::System::String* FDDEMMPCGAC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IPDBFGGDHIF___C_CIMNONGJLMD_OFFSET))(this, FDDEMMPCGAC);
	}

	::System::String* GNIPLJEEGBE(::FHJPJMKIHBG CDIJFCCAHNE)
	{
		return ((::System::String*(*)(::PVOID, ::FHJPJMKIHBG))((::PBYTE)hIl2Cpp + IPDBFGGDHIF___C_GNIPLJEEGBE_OFFSET))(this, CDIJFCCAHNE);
	}
};
