#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK;
class OFEPJCHJCGK_OPEAKBECGAA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OFEPJCHJCGK_NIGBGFMJJKL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11B25DB0)
#define OFEPJCHJCGK_NIGBGFMJJKL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B26550)
#define OFEPJCHJCGK_NIGBGFMJJKL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11B265B0)
#define OFEPJCHJCGK_NIGBGFMJJKL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11B26560)
#define OFEPJCHJCGK_NIGBGFMJJKL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B25DA0)
#define OFEPJCHJCGK_NIGBGFMJJKL__CTOR_OFFSET UNITYSDK_OFFSET(0x11B243C0)

inline static constexpr unsigned int OFEPJCHJCGK_NIGBGFMJJKL_TypeDefinitionIndex = 70725;

class OFEPJCHJCGK_NIGBGFMJJKL : public ::System::Object
{
public:
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x18
	::OFEPJCHJCGK_OPEAKBECGAA* PGDOJBDJBOL; // 0x20
	::System::String* GDLOCGDAJGL; // 0x28
	::System::Object* IDBEJJEKGDI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Single MPPDCAPDAHN; // 0x3C
	::System::Int32 OOGLHLBACBD; // 0x40
	::System::Int32 CNFJHJMICPB; // 0x44
	::System::Int32 MGHFJBAAABI; // 0x48
	::System::Single FNGGJOBOFOE; // 0x4C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NIGBGFMJJKL__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NIGBGFMJJKL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NIGBGFMJJKL_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NIGBGFMJJKL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NIGBGFMJJKL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_NIGBGFMJJKL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
