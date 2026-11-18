#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class DKKCMLMECFA;
class FAICBDNOMIA;
class IFLPGOKHDJI;
class PEJCCBOKHCL;

#define PEJCCBOKHCL_DLPFJCGBBPJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14B977D0)
#define PEJCCBOKHCL_DLPFJCGBBPJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14B980A0)
#define PEJCCBOKHCL_DLPFJCGBBPJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14B98100)
#define PEJCCBOKHCL_DLPFJCGBBPJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14B980B0)
#define PEJCCBOKHCL_DLPFJCGBBPJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B977C0)
#define PEJCCBOKHCL_DLPFJCGBBPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14B977B0)

inline static constexpr unsigned int PEJCCBOKHCL_DLPFJCGBBPJ_TypeDefinitionIndex = 72583;

class PEJCCBOKHCL_DLPFJCGBBPJ : public ::System::Object
{
public:
	::PEJCCBOKHCL* KLHPEBKNIFB; // 0x10
	::Foundation::ViewObject::ViewObjectHandle OFHDEMMGLAF; // 0x18
	::IFLPGOKHDJI* MAOHJHMJHON; // 0x28
	::DKKCMLMECFA* ANFJGJAIPHP; // 0x30
	::FAICBDNOMIA* LCCEKDNIHBO; // 0x38
	::System::UInt32 LMOHNHBBDKH; // 0x40
	::System::Single IDBEJJEKGDI; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DLPFJCGBBPJ__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DLPFJCGBBPJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DLPFJCGBBPJ_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DLPFJCGBBPJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DLPFJCGBBPJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DLPFJCGBBPJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
