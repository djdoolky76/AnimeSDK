#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOIEOAPGENC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C3720)
#define BOIEOAPGENC_DKGIMAKIGML_OFFSET UNITYSDK_OFFSET(0x1C8C4270)
#define BOIEOAPGENC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C8C3790)
#define BOIEOAPGENC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C8C3B00)

	class BOIEOAPGENC : public ::CKFDNGOHNPC
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GBOFILONLMO; // 0x18
		::Il2CppArray<::System::UInt32>* MGJDAFEGBIL; // 0x20
		::System::Int32 BJPJNEHNIML; // 0x28
		::System::Single CPMLBDPGJAK; // 0x2C
		::System::Int32 INAKMLFKHAM; // 0x30
		::System::Single PGMIOKKLHIE; // 0x34
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BOIEOAPGENC_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIEOAPGENC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOIEOAPGENC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DKGIMAKIGML(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOIEOAPGENC_DKGIMAKIGML_OFFSET))(this, a1);
		}

	};
