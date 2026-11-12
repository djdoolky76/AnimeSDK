#pragma once
#include "unitysdk/unitysdk.h"
class DLGOFLDEIOF;
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define NBICKLKPADP_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC34A440)
#define NBICKLKPADP_CTOR_OFFSET UNITYSDK_OFFSET(0xC34AC90)
#define NBICKLKPADP_DPDGNOEHNLE_OFFSET UNITYSDK_OFFSET(0xC34A190)
#define NBICKLKPADP_EKLBGCGDIFN_OFFSET UNITYSDK_OFFSET(0xC34A3D0)
#define NBICKLKPADP_HLJFBDALMCJ_OFFSET UNITYSDK_OFFSET(0xC34A1A0)
#define NBICKLKPADP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC34A8A0)
#define NBICKLKPADP_LOADINMIPJF_OFFSET UNITYSDK_OFFSET(0xC34A510)
#define NBICKLKPADP_NHKBLPDELOM_OFFSET UNITYSDK_OFFSET(0xC34A180)
#define NBICKLKPADP_PBJOFIOPKJA_OFFSET UNITYSDK_OFFSET(0xC34A560)

inline static constexpr unsigned int NBICKLKPADP_TypeDefinitionIndex = 50495;

	class NBICKLKPADP
	{
	public:
		::System::Collections::Generic::LinkedList_1<::DLGOFLDEIOF*>* CEFMIAHFCJJ; // 0x10
		::System::Single KLBFFEFFJID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBICKLKPADP_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::DLGOFLDEIOF*>* NHKBLPDELOM()
		{
			return ((::System::Collections::Generic::LinkedList_1<::DLGOFLDEIOF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBICKLKPADP_NHKBLPDELOM_OFFSET))(this);
		}

		::System::Single DPDGNOEHNLE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBICKLKPADP_DPDGNOEHNLE_OFFSET))(this);
		}

		::System::Void HLJFBDALMCJ(::DLGOFLDEIOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLGOFLDEIOF*))((::PBYTE)hIl2Cpp + NBICKLKPADP_HLJFBDALMCJ_OFFSET))(this, a1);
		}

		::System::Void EKLBGCGDIFN(::DLGOFLDEIOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLGOFLDEIOF*))((::PBYTE)hIl2Cpp + NBICKLKPADP_EKLBGCGDIFN_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBICKLKPADP_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Int32 LOADINMIPJF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBICKLKPADP_LOADINMIPJF_OFFSET))(this);
		}

		::System::Void PBJOFIOPKJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBICKLKPADP_PBJOFIOPKJA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBICKLKPADP_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
