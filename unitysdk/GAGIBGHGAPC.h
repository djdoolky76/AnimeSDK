#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLPEFKGCAH.h"
class BAJENICFMMH;

#define GAGIBGHGAPC_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0x1593AF70)
#define GAGIBGHGAPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1593B2C0)
#define GAGIBGHGAPC_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1593AF30)
#define GAGIBGHGAPC_GET_PREV_OFFSET UNITYSDK_OFFSET(0x1593AF10)
#define GAGIBGHGAPC_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1593AF50)
#define GAGIBGHGAPC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1593AFF0)
#define GAGIBGHGAPC_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x1593AF40)
#define GAGIBGHGAPC_SET_PREV_OFFSET UNITYSDK_OFFSET(0x1593AF20)
#define GAGIBGHGAPC_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1593AF60)

	class GAGIBGHGAPC
	{
	public:
		::BAJENICFMMH* _Next_k__BackingField; // 0x28
		::BAJENICFMMH* _Prev_k__BackingField; // 0x30
		::System::Int32 _Priority_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGIBGHGAPC_CTOR_OFFSET))(this);
		}

		::BAJENICFMMH* get_Prev()
		{
			return ((::BAJENICFMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGIBGHGAPC_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::BAJENICFMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJENICFMMH*))((::PBYTE)hIl2Cpp + GAGIBGHGAPC_SET_PREV_OFFSET))(this, a1);
		}

		::BAJENICFMMH* get_Next()
		{
			return ((::BAJENICFMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGIBGHGAPC_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::BAJENICFMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJENICFMMH*))((::PBYTE)hIl2Cpp + GAGIBGHGAPC_SET_NEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGIBGHGAPC_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAGIBGHGAPC_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGIBGHGAPC_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::JMLPEFKGCAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMLPEFKGCAH))((::PBYTE)hIl2Cpp + GAGIBGHGAPC_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
