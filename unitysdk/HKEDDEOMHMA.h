#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHDAFDOMINP.h"
class INHCJHBALFC;
namespace System { class String; }

#define HKEDDEOMHMA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D34150)
#define HKEDDEOMHMA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15D33F60)

inline static constexpr unsigned int HKEDDEOMHMA_TypeDefinitionIndex = 54263;

	class HKEDDEOMHMA : public ::BHDAFDOMINP
	{
	public:
		::System::String* CIDCEJCGOGB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEDDEOMHMA_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::INHCJHBALFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHCJHBALFC*))((::PBYTE)hIl2Cpp + HKEDDEOMHMA_EXECUTE_OFFSET))(this, a1);
		}

	};
