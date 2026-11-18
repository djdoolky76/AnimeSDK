#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define BCPOAKGDAJO_LEKAAIPANIC___C_EOOHDMMHELM_OFFSET UNITYSDK_OFFSET(0x169E4F10)
#define BCPOAKGDAJO_LEKAAIPANIC___C_IJENJHKKLKK_OFFSET UNITYSDK_OFFSET(0x169E4A30)
#define BCPOAKGDAJO_LEKAAIPANIC___C_MAOEJHLPDMO_OFFSET UNITYSDK_OFFSET(0x169E4580)
#define BCPOAKGDAJO_LEKAAIPANIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169E4530)
#define BCPOAKGDAJO_LEKAAIPANIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169E4570)

inline static constexpr unsigned int BCPOAKGDAJO_LEKAAIPANIC___c_TypeDefinitionIndex = 57523;

class BCPOAKGDAJO_LEKAAIPANIC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__13_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BCPOAKGDAJO_LEKAAIPANIC___c_TypeDefinitionIndex)->GetStaticField(0x496F0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__13_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BCPOAKGDAJO_LEKAAIPANIC___c_TypeDefinitionIndex)->GetStaticField(0x496F8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__13_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BCPOAKGDAJO_LEKAAIPANIC___c_TypeDefinitionIndex)->GetStaticField(0x49700);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BCPOAKGDAJO_LEKAAIPANIC___c_TypeDefinitionIndex)->GetStaticField(0x49708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCPOAKGDAJO_LEKAAIPANIC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_LEKAAIPANIC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean MAOEJHLPDMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_LEKAAIPANIC___C_MAOEJHLPDMO_OFFSET))(this);
	}

	::System::Boolean IJENJHKKLKK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_LEKAAIPANIC___C_IJENJHKKLKK_OFFSET))(this);
	}

	::System::Boolean EOOHDMMHELM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_LEKAAIPANIC___C_EOOHDMMHELM_OFFSET))(this);
	}
};
