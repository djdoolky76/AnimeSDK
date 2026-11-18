#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PGHBMNLLINE.h"
#include "unitysdk/System/Object.h"

class LMACINPPDLH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ONBOHEHNDCO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CD03100)
#define ONBOHEHNDCO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CD02EC0)
#define ONBOHEHNDCO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CD03040)
#define ONBOHEHNDCO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CD031E0)
#define ONBOHEHNDCO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CD02ED0)
#define ONBOHEHNDCO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1CD03530)
#define ONBOHEHNDCO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CD03360)
#define ONBOHEHNDCO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CD02B10)
#define ONBOHEHNDCO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CD03760)
#define ONBOHEHNDCO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CD02AF0)
#define ONBOHEHNDCO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CD02DD0)
#define ONBOHEHNDCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD03310)

inline static constexpr unsigned int ONBOHEHNDCO_TypeDefinitionIndex = 15312;

class ONBOHEHNDCO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::PGHBMNLLINE DHDJDGFNBOA; // 0x28
	::Il2CppArray<::LMACINPPDLH*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBOHEHNDCO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::LMACINPPDLH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LMACINPPDLH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBOHEHNDCO_CHLEALKAOJO_OFFSET))(this);
	}
};
