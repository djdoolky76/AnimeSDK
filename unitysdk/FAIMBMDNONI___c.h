#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIPEPMMGFDM;
namespace System { template <typename T1, typename T2> class Func_2; }

#define FAIMBMDNONI___C_HDOJEIKILFN_OFFSET UNITYSDK_OFFSET(0x1725E330)
#define FAIMBMDNONI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1725E2E0)
#define FAIMBMDNONI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1725E320)

inline static constexpr unsigned int FAIMBMDNONI___c_TypeDefinitionIndex = 54128;

class FAIMBMDNONI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FAIMBMDNONI___c_TypeDefinitionIndex)->GetStaticField(0x4E3C0);
	}
	static ::System::Func_2<::AIPEPMMGFDM*, ::System::Int32>** StaticGet___9__17_4()
	{
		return (::System::Func_2<::AIPEPMMGFDM*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FAIMBMDNONI___c_TypeDefinitionIndex)->GetStaticField(0x4E3C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAIMBMDNONI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIMBMDNONI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HDOJEIKILFN(::AIPEPMMGFDM* IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::AIPEPMMGFDM*))((::PBYTE)hIl2Cpp + FAIMBMDNONI___C_HDOJEIKILFN_OFFSET))(this, IPMMCGDMODG);
	}
};
