#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHOHPNEGHHN_KDNJACJEHIB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A2F0800)
#define KHOHPNEGHHN_KDNJACJEHIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F08F0)
#define KHOHPNEGHHN_KDNJACJEHIB_FDNKPDJKMAL_OFFSET UNITYSDK_OFFSET(0x1A2F02D0)
#define KHOHPNEGHHN_KDNJACJEHIB_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A2F07E0)
#define KHOHPNEGHHN_KDNJACJEHIB_HPKIIJEGDLP_OFFSET UNITYSDK_OFFSET(0x1A2F0160)
#define KHOHPNEGHHN_KDNJACJEHIB_NBLADDNNAGJ_OFFSET UNITYSDK_OFFSET(0x1A2F0540)
#define KHOHPNEGHHN_KDNJACJEHIB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A2F0850)
#define KHOHPNEGHHN_KDNJACJEHIB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A2F08B0)
#define KHOHPNEGHHN_KDNJACJEHIB_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A2F07F0)

inline static constexpr unsigned int KHOHPNEGHHN_KDNJACJEHIB_TypeDefinitionIndex = 44277;

	class KHOHPNEGHHN_KDNJACJEHIB : public ::System::Object
	{
	public:
		::System::Single _Value_k__BackingField; // 0x10
		::System::UInt32 KDHPKOFLNFM; // 0x14
		::System::Single ELKMJKNLJOD; // 0x18
		::System::Boolean KHFHONFDNMF; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single PGMIOKKLHIE; // 0x20
		::System::Single OJAHLJGABMJ; // 0x24
		::System::Single DEIMGIGLHLK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_KDNJACJEHIB_CTOR_OFFSET))(this);
		}

		::System::Boolean FDNKPDJKMAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_KDNJACJEHIB_FDNKPDJKMAL_OFFSET))(this);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_KDNJACJEHIB_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_KDNJACJEHIB_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_KDNJACJEHIB_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_KDNJACJEHIB_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_KDNJACJEHIB_ONRECYCLE_OFFSET))(this);
		}

		::System::Void HPKIIJEGDLP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_KDNJACJEHIB_HPKIIJEGDLP_OFFSET))(this, a1);
		}

		::System::Void NBLADDNNAGJ(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KHOHPNEGHHN_KDNJACJEHIB_NBLADDNNAGJ_OFFSET))(this, a1, a2, a3);
		}

	};
