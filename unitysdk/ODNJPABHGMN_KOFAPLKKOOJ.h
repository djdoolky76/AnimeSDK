#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class KHOLLIGHNLK;
class ODNJPABHGMN;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define ODNJPABHGMN_KOFAPLKKOOJ_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1DAD2550)
#define ODNJPABHGMN_KOFAPLKKOOJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DAD2560)
#define ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_STRINGNAME_MOLEMOLE_ARCADE_BALLPIT_BALLPITHFSMFACTORYBASEFACTORY_SYSTEM_INT32INSTANCEID___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DAD27C0)
#define ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_STRINGNAME_MOLEMOLE_ARCADE_BALLPIT_BALLPITHFSMFACTORYBASEFACTORY_SYSTEM_INT32INSTANCEID___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DAD2700)
#define ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DAD2840)
#define ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DAD2770)
#define ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DAD2720)
#define ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DAD2530)
#define ODNJPABHGMN_KOFAPLKKOOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD2510)

inline static constexpr unsigned int ODNJPABHGMN_KOFAPLKKOOJ_TypeDefinitionIndex = 94302;

class ODNJPABHGMN_KOFAPLKKOOJ : public ::System::Object
{
public:
	::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32> IDBEJJEKGDI; // 0x10
	::System::Byte _padding0[0x10];
	::ODNJPABHGMN* KLHPEBKNIFB; // 0x28
	::System::Object* GHANCJDIDBC; // 0x30
	::System::Byte _padding1[0x28];
	::System::Int32 FPDDAGHMOJB; // 0x60
	::System::Int32 MDPILDGFNHN; // 0x64

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KOFAPLKKOOJ__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KOFAPLKKOOJ_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32> System_Collections_Generic_IEnumerator__System_StringName_MoleMole_Arcade_BallPit_BallPitHfsmFactoryBaseFactory_System_Int32InstanceId___get_Current()
	{
		return ((::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_STRINGNAME_MOLEMOLE_ARCADE_BALLPIT_BALLPITHFSMFACTORYBASEFACTORY_SYSTEM_INT32INSTANCEID___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>>* System_Collections_Generic_IEnumerable__System_StringName_MoleMole_Arcade_BallPit_BallPitHfsmFactoryBaseFactory_System_Int32InstanceId___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_STRINGNAME_MOLEMOLE_ARCADE_BALLPIT_BALLPITHFSMFACTORYBASEFACTORY_SYSTEM_INT32INSTANCEID___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KOFAPLKKOOJ_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KOFAPLKKOOJ_JPCPBBAMDGJ_OFFSET))(this);
	}
};
