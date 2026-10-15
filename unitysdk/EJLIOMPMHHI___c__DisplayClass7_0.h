#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class KGPCBBIOGLB;
namespace System { class Object; }

#define EJLIOMPMHHI___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x154D8700)
#define EJLIOMPMHHI___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x154DEDA0)
#define EJLIOMPMHHI___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x154DEE70)
#define EJLIOMPMHHI___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x154DEEE0)

inline static constexpr unsigned int EJLIOMPMHHI___c__DisplayClass7_0_TypeDefinitionIndex = 59568;

	class EJLIOMPMHHI___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::EJLIOMPMHHI* __4__this; // 0x10
		::System::Int64 timeStart; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _AddMultiDownload_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET))(this, a1);
		}

		::System::Void _AddMultiDownload_b__1(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _AddMultiDownload_b__2(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET))(this, a1);
		}

	};
