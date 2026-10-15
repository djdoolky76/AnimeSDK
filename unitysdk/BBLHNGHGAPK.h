#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBLHNGHGAPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C883910)
#define BBLHNGHGAPK_DKGIMAKIGML_OFFSET UNITYSDK_OFFSET(0x1C883570)
#define BBLHNGHGAPK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C882BF0)
#define BBLHNGHGAPK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C882DA0)

inline static constexpr unsigned int BBLHNGHGAPK_TypeDefinitionIndex = 42198;

	class BBLHNGHGAPK : public ::CKFDNGOHNPC
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GBOFILONLMO; // 0x18
		::System::Single CPMLBDPGJAK; // 0x20
		::System::Int32 BJPJNEHNIML; // 0x24
		::System::Single PGMIOKKLHIE; // 0x28
		::System::Int32 INAKMLFKHAM; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLHNGHGAPK_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLHNGHGAPK_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBLHNGHGAPK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DKGIMAKIGML(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBLHNGHGAPK_DKGIMAKIGML_OFFSET))(this, a1);
		}

	};
