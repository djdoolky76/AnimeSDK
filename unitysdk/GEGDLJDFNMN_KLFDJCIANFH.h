#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Object.h"

class GEGDLJDFNMN_IFCOGBODCBI;
class PFEOJDIJIBM;
namespace MoleMole::Battle { class Entity; }

#define GEGDLJDFNMN_KLFDJCIANFH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x116E6B40)
#define GEGDLJDFNMN_KLFDJCIANFH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x116E7980)
#define GEGDLJDFNMN_KLFDJCIANFH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x116E79E0)
#define GEGDLJDFNMN_KLFDJCIANFH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x116E7990)
#define GEGDLJDFNMN_KLFDJCIANFH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116E6B30)
#define GEGDLJDFNMN_KLFDJCIANFH__CTOR_OFFSET UNITYSDK_OFFSET(0x116E6B20)

inline static constexpr unsigned int GEGDLJDFNMN_KLFDJCIANFH_TypeDefinitionIndex = 81655;

class GEGDLJDFNMN_KLFDJCIANFH : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle ACFLPHBNBHH; // 0x10
	::MoleMole::Battle::Entity* AECDDHGBOAO; // 0x30
	::GEGDLJDFNMN_IFCOGBODCBI* NLADMPALHAD; // 0x38
	::LGCNEDCMPKM BKBGPKNGNMF; // 0x40
	::PFEOJDIJIBM* GCCPOJNFEOJ; // 0x68
	::System::Single IDBEJJEKGDI; // 0x70
	::System::Int32 JCBCHAIHAOJ; // 0x74
	::System::Int32 OMECNDKIPHB; // 0x78
	::System::Int32 MDPILDGFNHN; // 0x7C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEGDLJDFNMN_KLFDJCIANFH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGDLJDFNMN_KLFDJCIANFH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGDLJDFNMN_KLFDJCIANFH_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGDLJDFNMN_KLFDJCIANFH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGDLJDFNMN_KLFDJCIANFH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGDLJDFNMN_KLFDJCIANFH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
