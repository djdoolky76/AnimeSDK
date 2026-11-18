#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class CCDFJCPDCLB;
class KEALLHIKKLA;
namespace System { class Object; }

#define KEALLHIKKLA_JPAGCBDGONB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7AB4F0)
#define KEALLHIKKLA_JPAGCBDGONB_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x7AB490)
#define KEALLHIKKLA_JPAGCBDGONB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AB470)
#define KEALLHIKKLA_JPAGCBDGONB_RESET_OFFSET UNITYSDK_OFFSET(0x7AB480)
#define KEALLHIKKLA_JPAGCBDGONB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x7AB4A0)
#define KEALLHIKKLA_JPAGCBDGONB__CTOR_OFFSET UNITYSDK_OFFSET(0x7AB440)

inline static constexpr unsigned int KEALLHIKKLA_JPAGCBDGONB_TypeDefinitionIndex = 55580;

struct alignas(8) KEALLHIKKLA_JPAGCBDGONB
{
	::System::Int32 GDIDPEIICMF; // 0x10
	::System::Byte _padding0[0x4];
	::KEALLHIKKLA* LGPKMNJCJHC; // 0x18
	::System::Int32 LFIBMHMKOBJ; // 0x20
	::System::Byte _padding1[0x4];
	::CCDFJCPDCLB* JDHAFGDONFN; // 0x28

	::System::Void _ctor(::KEALLHIKKLA* MECOFDHMKEB)
	{
		return ((::System::Void(*)(::PVOID, ::KEALLHIKKLA*))((::PBYTE)hIl2Cpp + KEALLHIKKLA_JPAGCBDGONB__CTOR_OFFSET))(this, MECOFDHMKEB);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_JPAGCBDGONB_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_JPAGCBDGONB_RESET_OFFSET))(this);
	}

	::CCDFJCPDCLB* get_Current()
	{
		return ((::CCDFJCPDCLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_JPAGCBDGONB_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_JPAGCBDGONB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_JPAGCBDGONB_DISPOSE_OFFSET))(this);
	}
};
