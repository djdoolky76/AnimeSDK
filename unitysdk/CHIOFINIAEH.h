#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHLIAIJFBJF.h"
class BGNDPIPJFCI;
class FCFKPLDONLO;

#define CHIOFINIAEH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF53EA0)
#define CHIOFINIAEH_DLLLCMBCCJO_OFFSET UNITYSDK_OFFSET(0xCF52FA0)
#define CHIOFINIAEH_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0xCF53A00)
#define CHIOFINIAEH_GNCIPBBNIIH_OFFSET UNITYSDK_OFFSET(0xCF52EF0)
#define CHIOFINIAEH_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0xCF53670)
#define CHIOFINIAEH_NOAOHILGEIB_OFFSET UNITYSDK_OFFSET(0xCF530B0)

	class CHIOFINIAEH : public ::CHLIAIJFBJF
	{
	public:
		::FCFKPLDONLO* OLHBFLLJKGD; // 0x100
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOFINIAEH_CTOR_OFFSET))(this);
		}

		::System::Void GNCIPBBNIIH(::BGNDPIPJFCI* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*, ::System::Int32))((::PBYTE)hIl2Cpp + CHIOFINIAEH_GNCIPBBNIIH_OFFSET))(this, a1, a2);
		}

		::System::Boolean DLLLCMBCCJO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHIOFINIAEH_DLLLCMBCCJO_OFFSET))(this, a1);
		}

		::System::Boolean NOAOHILGEIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIOFINIAEH_NOAOHILGEIB_OFFSET))(this);
		}

		::System::Void IGDIEBODAAH(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + CHIOFINIAEH_IGDIEBODAAH_OFFSET))(this, a1);
		}

		::System::Void EGKNKHEANAN(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + CHIOFINIAEH_EGKNKHEANAN_OFFSET))(this, a1);
		}

	};
