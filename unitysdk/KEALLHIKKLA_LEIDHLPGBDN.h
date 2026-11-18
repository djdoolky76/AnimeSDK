#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class CCDFJCPDCLB;
class KEALLHIKKLA;
namespace System { class Object; }

#define KEALLHIKKLA_LEIDHLPGBDN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x767FA0)
#define KEALLHIKKLA_LEIDHLPGBDN_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x767F40)
#define KEALLHIKKLA_LEIDHLPGBDN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x767F20)
#define KEALLHIKKLA_LEIDHLPGBDN_RESET_OFFSET UNITYSDK_OFFSET(0x767F30)
#define KEALLHIKKLA_LEIDHLPGBDN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x767F50)
#define KEALLHIKKLA_LEIDHLPGBDN__CTOR_OFFSET UNITYSDK_OFFSET(0x767F10)

inline static constexpr unsigned int KEALLHIKKLA_LEIDHLPGBDN_TypeDefinitionIndex = 55579;

struct alignas(8) KEALLHIKKLA_LEIDHLPGBDN
{
	::System::Int32 GDIDPEIICMF; // 0x10
	::System::Byte _padding0[0x4];
	::KEALLHIKKLA* LGPKMNJCJHC; // 0x18
	::System::Int32 AADKCLIFFKM; // 0x20
	::System::Int32 GJHGMOGLFFH; // 0x24
	::System::Int32 LFIBMHMKOBJ; // 0x28
	::System::Byte _padding1[0x4];
	::CCDFJCPDCLB* JDHAFGDONFN; // 0x30

	::System::Void _ctor(::KEALLHIKKLA* MECOFDHMKEB, ::System::Int32 GMKIAPNGFFM)
	{
		return ((::System::Void(*)(::PVOID, ::KEALLHIKKLA*, ::System::Int32))((::PBYTE)hIl2Cpp + KEALLHIKKLA_LEIDHLPGBDN__CTOR_OFFSET))(this, MECOFDHMKEB, GMKIAPNGFFM);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_LEIDHLPGBDN_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_LEIDHLPGBDN_RESET_OFFSET))(this);
	}

	::CCDFJCPDCLB* get_Current()
	{
		return ((::CCDFJCPDCLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_LEIDHLPGBDN_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_LEIDHLPGBDN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEALLHIKKLA_LEIDHLPGBDN_DISPOSE_OFFSET))(this);
	}
};
