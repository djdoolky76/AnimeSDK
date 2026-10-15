#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/System/Nullable_1.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;

#define JPDKAJCEOAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B4680)
#define JPDKAJCEOAJ_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB2B45E0)

inline static constexpr unsigned int JPDKAJCEOAJ_TypeDefinitionIndex = 77686;

	class JPDKAJCEOAJ : public ::HBLDGJCDJPF
	{
	public:
		::System::Nullable_1<::System::Int32> MCLLALGABAB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDKAJCEOAJ_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + JPDKAJCEOAJ_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
