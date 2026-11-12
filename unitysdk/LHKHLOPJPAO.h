#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;

#define LHKHLOPJPAO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4E930)
#define LHKHLOPJPAO_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xBF4E8B0)

inline static constexpr unsigned int LHKHLOPJPAO_TypeDefinitionIndex = 80437;

	class LHKHLOPJPAO : public ::HBLDGJCDJPF
	{
	public:
		::System::Single BGCCFFPEALM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKHLOPJPAO_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + LHKHLOPJPAO_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
