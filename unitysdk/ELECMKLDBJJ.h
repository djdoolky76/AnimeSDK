#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"

class GODLLLCHCHF;
namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }

#define ELECMKLDBJJ_AALJBKPGKOL_OFFSET UNITYSDK_OFFSET(0x6AE1C0)
#define ELECMKLDBJJ_BOBJBPEFLND_OFFSET UNITYSDK_OFFSET(0x11A9C800)
#define ELECMKLDBJJ_DLNIAHNJGEA_OFFSET UNITYSDK_OFFSET(0x11A9C790)
#define ELECMKLDBJJ_EMEPDMJDHEM_OFFSET UNITYSDK_OFFSET(0x6AE200)
#define ELECMKLDBJJ_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x6AE150)
#define ELECMKLDBJJ_MCAEFJKLPLH_OFFSET UNITYSDK_OFFSET(0x6AE160)
#define ELECMKLDBJJ_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x6AE1A0)
#define ELECMKLDBJJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A9C2F0)
#define ELECMKLDBJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x6AE140)

inline static constexpr unsigned int ELECMKLDBJJ_TypeDefinitionIndex = 65966;

struct alignas(8) ELECMKLDBJJ
{
	static ::ELECMKLDBJJ* StaticGet_FGBLILBNEHG()
	{
		return (::ELECMKLDBJJ*)Il2CppClass::FromTypeDefinitionIndex(ELECMKLDBJJ_TypeDefinitionIndex)->GetStaticField(0xD2C0);
	}
	::Foundation::ReadOnlyNativeVariable_1<::System::Double> BJMBOABGKOK; // 0x10
	::System::Byte _padding0[0x8];
	::Foundation::ReadOnlyNativeVariable_1<::System::Double> KJHHMLJPDJO; // 0x20
	::System::Byte _padding1[0x8];
	::Foundation::ReadOnlyNativeVariable_1<::System::Int32> MALLIFNIPCL; // 0x30

	::System::Void _ctor(::Foundation::NativeMemory* HOMNNKAIOHF, ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>* KNPCPBKPPPA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemory*, ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>*))((::PBYTE)hIl2Cpp + ELECMKLDBJJ__CTOR_OFFSET))(this, HOMNNKAIOHF, KNPCPBKPPPA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELECMKLDBJJ__CCTOR_OFFSET))();
	}

	::System::Void JMDEKPONKMF(::GODLLLCHCHF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::GODLLLCHCHF*))((::PBYTE)hIl2Cpp + ELECMKLDBJJ_JMDEKPONKMF_OFFSET))(this, AAOCANGHBDG);
	}

	/*
	static ::ELECMKLDBJJ DLNIAHNJGEA(::Foundation::NativeMemory* HOMNNKAIOHF, ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>* KNPCPBKPPPA)
	{
		return ((::ELECMKLDBJJ(*)(::Foundation::NativeMemory*, ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>*))((::PBYTE)hIl2Cpp + ELECMKLDBJJ_DLNIAHNJGEA_OFFSET))(HOMNNKAIOHF, KNPCPBKPPPA);
	}
	*/

	::System::Double MCAEFJKLPLH()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ELECMKLDBJJ_MCAEFJKLPLH_OFFSET))(this);
	}

	static ::Il2CppArray<::Foundation::NativeMemoryRequestHandle>* BOBJBPEFLND(::Foundation::NativeMemoryBuilder* GENNIFDPOAM)
	{
		return ((::Il2CppArray<::Foundation::NativeMemoryRequestHandle>*(*)(::Foundation::NativeMemoryBuilder*))((::PBYTE)hIl2Cpp + ELECMKLDBJJ_BOBJBPEFLND_OFFSET))(GENNIFDPOAM);
	}

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELECMKLDBJJ_NKDCADABLCL_OFFSET))(this);
	}

	::System::Double AALJBKPGKOL()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ELECMKLDBJJ_AALJBKPGKOL_OFFSET))(this);
	}

	::System::Int32 EMEPDMJDHEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELECMKLDBJJ_EMEPDMJDHEM_OFFSET))(this);
	}
};
