#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPHINJGCEAO.h"
class EEJNNOAEEFO;

#define OEJCFPPFKNE_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0xBE30420)
#define OEJCFPPFKNE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE30720)
#define OEJCFPPFKNE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBE30480)
#define OEJCFPPFKNE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xBE303E0)
#define OEJCFPPFKNE_GET_PREV_OFFSET UNITYSDK_OFFSET(0xBE303C0)
#define OEJCFPPFKNE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xBE30400)
#define OEJCFPPFKNE_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xBE303F0)
#define OEJCFPPFKNE_SET_PREV_OFFSET UNITYSDK_OFFSET(0xBE303D0)
#define OEJCFPPFKNE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xBE30410)

	class OEJCFPPFKNE
	{
	public:
		::EEJNNOAEEFO* _Prev_k__BackingField; // 0x28
		::EEJNNOAEEFO* _Next_k__BackingField; // 0x30
		::System::Int32 _Priority_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJCFPPFKNE_CTOR_OFFSET))(this);
		}

		::EEJNNOAEEFO* get_Prev()
		{
			return ((::EEJNNOAEEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJCFPPFKNE_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::EEJNNOAEEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEJNNOAEEFO*))((::PBYTE)hIl2Cpp + OEJCFPPFKNE_SET_PREV_OFFSET))(this, a1);
		}

		::EEJNNOAEEFO* get_Next()
		{
			return ((::EEJNNOAEEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJCFPPFKNE_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::EEJNNOAEEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEJNNOAEEFO*))((::PBYTE)hIl2Cpp + OEJCFPPFKNE_SET_NEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJCFPPFKNE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEJCFPPFKNE_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJCFPPFKNE_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Void Execute(::KPHINJGCEAO a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPHINJGCEAO))((::PBYTE)hIl2Cpp + OEJCFPPFKNE_EXECUTE_OFFSET))(this, a1);
		}

	};
