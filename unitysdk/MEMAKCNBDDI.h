#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOHDJPDEDEK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FBCKBBIOLHB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MEMAKCNBDDI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19576820)
#define MEMAKCNBDDI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195765E0)
#define MEMAKCNBDDI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19576760)
#define MEMAKCNBDDI_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19576E10)
#define MEMAKCNBDDI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19576900)
#define MEMAKCNBDDI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195765F0)
#define MEMAKCNBDDI_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19576A40)
#define MEMAKCNBDDI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19576C40)
#define MEMAKCNBDDI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19576230)
#define MEMAKCNBDDI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19576C20)
#define MEMAKCNBDDI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19576210)
#define MEMAKCNBDDI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195764F0)
#define MEMAKCNBDDI__CTOR_OFFSET UNITYSDK_OFFSET(0x19576A30)

inline static constexpr unsigned int MEMAKCNBDDI_TypeDefinitionIndex = 11425;

class MEMAKCNBDDI : public ::System::Object
{
public:
	::Il2CppArray<::FBCKBBIOLHB*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::HOHDJPDEDEK DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAKCNBDDI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_CHLEALKAOJO_OFFSET))(this);
	}

	::FBCKBBIOLHB* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::FBCKBBIOLHB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FBCKBBIOLHB*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FBCKBBIOLHB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMAKCNBDDI_NAMKJOJBAOA_OFFSET))(this);
	}
};
