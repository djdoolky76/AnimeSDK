#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK;
class OFEPJCHJCGK_CCDCJKAOJAP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ShaderVariantCollection; }

#define OFEPJCHJCGK_FOENDCDNIFE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x129262D0)
#define OFEPJCHJCGK_FOENDCDNIFE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12926EB0)
#define OFEPJCHJCGK_FOENDCDNIFE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12926F10)
#define OFEPJCHJCGK_FOENDCDNIFE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12926EC0)
#define OFEPJCHJCGK_FOENDCDNIFE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129262C0)
#define OFEPJCHJCGK_FOENDCDNIFE__CTOR_OFFSET UNITYSDK_OFFSET(0x129262B0)

inline static constexpr unsigned int OFEPJCHJCGK_FOENDCDNIFE_TypeDefinitionIndex = 70726;

class OFEPJCHJCGK_FOENDCDNIFE : public ::System::Object
{
public:
	::UnityEngine::ShaderVariantCollection* MNCNLKHNLOK; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::Foundation::AssetRequestHandle LCBHCNAPFPA; // 0x20
	::OFEPJCHJCGK_CCDCJKAOJAP* PGDOJBDJBOL; // 0x40
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x48
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* LCFIGCPKBGN; // 0x58
	::System::Int32 MGHFJBAAABI; // 0x60
	::System::Single JAIDFABABEN; // 0x64
	::System::Boolean DBAPJKHDEOF; // 0x68
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x6C
	::System::Int32 IMMACHMBMBP; // 0x70
	::System::Int32 CNFJHJMICPB; // 0x74
	::System::Single DMFECKMPDDJ; // 0x78

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FOENDCDNIFE__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FOENDCDNIFE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FOENDCDNIFE_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FOENDCDNIFE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FOENDCDNIFE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FOENDCDNIFE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
