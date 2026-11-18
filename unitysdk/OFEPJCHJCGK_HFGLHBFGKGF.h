#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFEPJCHJCGK_HFGLHBFGKGF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFB83B40)
#define OFEPJCHJCGK_HFGLHBFGKGF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFB84400)
#define OFEPJCHJCGK_HFGLHBFGKGF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFB84460)
#define OFEPJCHJCGK_HFGLHBFGKGF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFB84410)
#define OFEPJCHJCGK_HFGLHBFGKGF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFB83B30)
#define OFEPJCHJCGK_HFGLHBFGKGF__CTOR_OFFSET UNITYSDK_OFFSET(0xFB83B20)

inline static constexpr unsigned int OFEPJCHJCGK_HFGLHBFGKGF_TypeDefinitionIndex = 70720;

class OFEPJCHJCGK_HFGLHBFGKGF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* LCFIGCPKBGN; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* NLBLIFMHAKK; // 0x18
	::System::Collections::Generic::List_1<::System::Boolean>* AHMILNMLPIC; // 0x20
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x28
	::Foundation::AssetRequestHandle DKOINHHABKI; // 0x30
	::System::Object* IDBEJJEKGDI; // 0x50
	::System::String* GDLOCGDAJGL; // 0x58
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x60
	::System::Int32 DIBFFOBLAIP; // 0x68
	::System::Single FNGGJOBOFOE; // 0x6C
	::System::Int32 MDPILDGFNHN; // 0x70
	::System::Single DMFECKMPDDJ; // 0x74
	::System::Int32 PEHPLONGKBK; // 0x78

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HFGLHBFGKGF__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HFGLHBFGKGF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HFGLHBFGKGF_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HFGLHBFGKGF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HFGLHBFGKGF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_HFGLHBFGKGF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
