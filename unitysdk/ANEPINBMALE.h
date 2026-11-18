#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCBJMENFKAJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OAGJFBNJHOD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ANEPINBMALE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A165550)
#define ANEPINBMALE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A165400)
#define ANEPINBMALE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A165490)
#define ANEPINBMALE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A165630)
#define ANEPINBMALE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A165410)
#define ANEPINBMALE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A1657B0)
#define ANEPINBMALE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A165050)
#define ANEPINBMALE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A165030)
#define ANEPINBMALE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A165310)
#define ANEPINBMALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A165760)

inline static constexpr unsigned int ANEPINBMALE_TypeDefinitionIndex = 14697;

class ANEPINBMALE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::OAGJFBNJHOD*>* OJMBOGGMIKO; // 0x20
	::CCBJMENFKAJ DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEPINBMALE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEPINBMALE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEPINBMALE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ANEPINBMALE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ANEPINBMALE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEPINBMALE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEPINBMALE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEPINBMALE_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ANEPINBMALE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEPINBMALE_CHLEALKAOJO_OFFSET))(this);
	}
};
