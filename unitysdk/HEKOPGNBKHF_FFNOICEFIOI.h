#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEPFGCNCGKD.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ServerListInfo; }
namespace System { template <typename T> class Action_1; }

#define HEKOPGNBKHF_FFNOICEFIOI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17A40AB0)
#define HEKOPGNBKHF_FFNOICEFIOI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A40D00)
#define HEKOPGNBKHF_FFNOICEFIOI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A40D60)
#define HEKOPGNBKHF_FFNOICEFIOI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17A40D10)
#define HEKOPGNBKHF_FFNOICEFIOI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A40AA0)
#define HEKOPGNBKHF_FFNOICEFIOI__CTOR_OFFSET UNITYSDK_OFFSET(0x17A40150)

inline static constexpr unsigned int HEKOPGNBKHF_FFNOICEFIOI_TypeDefinitionIndex = 85180;

class HEKOPGNBKHF_FFNOICEFIOI : public ::System::Object
{
public:
	::MoleMole::ServerListInfo* GFEHDJEOEIA; // 0x10
	::System::Action_1<::OEPFGCNCGKD>* IGAAKDOIPNN; // 0x18
	::System::Object* IDBEJJEKGDI; // 0x20
	::OEPFGCNCGKD ANFCMDJEPEB; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Int32 DMLKNCPMMPB; // 0x44

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_FFNOICEFIOI__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_FFNOICEFIOI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_FFNOICEFIOI_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_FFNOICEFIOI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_FFNOICEFIOI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_FFNOICEFIOI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
