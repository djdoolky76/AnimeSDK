#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PFEOJDIJIBM;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KPJADOIPOGJ_DBKHCEDCILB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17924540)
#define KPJADOIPOGJ_DBKHCEDCILB_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17924970)
#define KPJADOIPOGJ_DBKHCEDCILB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17924640)
#define KPJADOIPOGJ_DBKHCEDCILB_RESET_OFFSET UNITYSDK_OFFSET(0x17924860)
#define KPJADOIPOGJ_DBKHCEDCILB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17924A50)
#define KPJADOIPOGJ_DBKHCEDCILB__CTOR_OFFSET UNITYSDK_OFFSET(0x17924530)

inline static constexpr unsigned int KPJADOIPOGJ_DBKHCEDCILB_TypeDefinitionIndex = 65781;

class KPJADOIPOGJ_DBKHCEDCILB : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::System::Single>* HNHNKGLPHJE; // 0x10
	::PFEOJDIJIBM* FDGLDBOBFDJ; // 0x18
	::System::Int32 KFADOGCIMKJ; // 0x20

	::System::Void _ctor(::System::Collections::Generic::IEnumerator_1<::System::Single>* LMHNJIBCLJF, ::System::Int32 BNLHPGHLKDK, ::PFEOJDIJIBM* PAMCENHCPJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::System::Int32, ::PFEOJDIJIBM*))((::PBYTE)hIl2Cpp + KPJADOIPOGJ_DBKHCEDCILB__CTOR_OFFSET))(this, LMHNJIBCLJF, BNLHPGHLKDK, PAMCENHCPJL);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJADOIPOGJ_DBKHCEDCILB_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJADOIPOGJ_DBKHCEDCILB_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJADOIPOGJ_DBKHCEDCILB_RESET_OFFSET))(this);
	}

	::System::Single get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJADOIPOGJ_DBKHCEDCILB_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJADOIPOGJ_DBKHCEDCILB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
