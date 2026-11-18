#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ShaderVariantCollection; }

#define OFEPJCHJCGK_DHGIAJJFBNE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12925810)
#define OFEPJCHJCGK_DHGIAJJFBNE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12926240)
#define OFEPJCHJCGK_DHGIAJJFBNE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x129262A0)
#define OFEPJCHJCGK_DHGIAJJFBNE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12926250)
#define OFEPJCHJCGK_DHGIAJJFBNE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12925800)
#define OFEPJCHJCGK_DHGIAJJFBNE__CTOR_OFFSET UNITYSDK_OFFSET(0x129257F0)

inline static constexpr unsigned int OFEPJCHJCGK_DHGIAJJFBNE_TypeDefinitionIndex = 70721;

class OFEPJCHJCGK_DHGIAJJFBNE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* LCFIGCPKBGN; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* NLBLIFMHAKK; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* AFPFIINAHLG; // 0x28
	::System::Collections::Generic::List_1<::System::Boolean>* AHMILNMLPIC; // 0x30
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x38
	::System::String* GDLOCGDAJGL; // 0x40
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x48
	::UnityEngine::ShaderVariantCollection* HMGOMKMKBPD; // 0x50
	::Foundation::AssetRequestHandle CCIEFDDEOAF; // 0x58
	::System::Single FNGGJOBOFOE; // 0x78
	::System::Int32 PEHPLONGKBK; // 0x7C
	::System::Int32 MDPILDGFNHN; // 0x80
	::System::Single DMFECKMPDDJ; // 0x84
	::System::Int32 DIBFFOBLAIP; // 0x88
	::System::Int32 BMPHDDHCKIO; // 0x8C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_DHGIAJJFBNE__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_DHGIAJJFBNE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_DHGIAJJFBNE_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_DHGIAJJFBNE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_DHGIAJJFBNE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_DHGIAJJFBNE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
