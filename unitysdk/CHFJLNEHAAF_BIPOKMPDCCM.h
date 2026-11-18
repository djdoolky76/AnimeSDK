#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_DJAHDCBGDNK;
class CHFJLNEHAAF_LNKGCGDKHHA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CHFJLNEHAAF_BIPOKMPDCCM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19A04650)
#define CHFJLNEHAAF_BIPOKMPDCCM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19A04AE0)
#define CHFJLNEHAAF_BIPOKMPDCCM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19A04B40)
#define CHFJLNEHAAF_BIPOKMPDCCM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19A04AF0)
#define CHFJLNEHAAF_BIPOKMPDCCM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A04640)
#define CHFJLNEHAAF_BIPOKMPDCCM__CTOR_OFFSET UNITYSDK_OFFSET(0x19A04630)

inline static constexpr unsigned int CHFJLNEHAAF_BIPOKMPDCCM_TypeDefinitionIndex = 87338;

class CHFJLNEHAAF_BIPOKMPDCCM : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* CLBAEECMNJL; // 0x10
	::CHFJLNEHAAF_DJAHDCBGDNK* LFHDDAMANBF; // 0x18
	::System::String* FIOEBCECJDA; // 0x20
	::System::String* JCHOIDIAJCO; // 0x28
	::CHFJLNEHAAF_LNKGCGDKHHA* NNAPHFAPOOP; // 0x30
	::System::Object* IDBEJJEKGDI; // 0x38
	::System::Boolean HOFNECHLPLH; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 LHBHBGMBKLF; // 0x44
	::System::Single GNGNOPJNIDO; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Single FLEMLKPCBJO; // 0x50
	::System::Int32 LCCCIMFPGLB; // 0x54
	::System::Single FCMLAEMCOCF; // 0x58

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_BIPOKMPDCCM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_BIPOKMPDCCM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_BIPOKMPDCCM_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_BIPOKMPDCCM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_BIPOKMPDCCM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_BIPOKMPDCCM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
