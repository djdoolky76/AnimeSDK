#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define DKAKFNNKIIE_KDCKPFMLIIN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x183462E0)
#define DKAKFNNKIIE_KDCKPFMLIIN_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x183463B0)
#define DKAKFNNKIIE_KDCKPFMLIIN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18346410)
#define DKAKFNNKIIE_KDCKPFMLIIN_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x183463C0)
#define DKAKFNNKIIE_KDCKPFMLIIN_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183462D0)
#define DKAKFNNKIIE_KDCKPFMLIIN__CTOR_OFFSET UNITYSDK_OFFSET(0x183462C0)

inline static constexpr unsigned int DKAKFNNKIIE_KDCKPFMLIIN_TypeDefinitionIndex = 43875;

class DKAKFNNKIIE_KDCKPFMLIIN : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20
	::System::Single HBFKHANEEND; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_KDCKPFMLIIN__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_KDCKPFMLIIN_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_KDCKPFMLIIN_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_KDCKPFMLIIN_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_KDCKPFMLIIN_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_KDCKPFMLIIN_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
