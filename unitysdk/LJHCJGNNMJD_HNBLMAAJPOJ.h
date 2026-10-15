#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAELLFLPIPF;
class GGBEEJNPPOP;
class LJHCJGNNMJD;
class PJPPGJEDCOG;

#define LJHCJGNNMJD_HNBLMAAJPOJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C540890)
#define LJHCJGNNMJD_HNBLMAAJPOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C540880)

inline static constexpr unsigned int LJHCJGNNMJD_HNBLMAAJPOJ_TypeDefinitionIndex = 41812;

	class LJHCJGNNMJD_HNBLMAAJPOJ : public ::System::Object
	{
	public:
		::BAELLFLPIPF* EIFAMFJPMCE; // 0x10
		::GGBEEJNPPOP* KHLEHDEPMGJ; // 0x18
		::System::Void _ctor(::GGBEEJNPPOP* a1, ::BAELLFLPIPF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGBEEJNPPOP*, ::BAELLFLPIPF*))((::PBYTE)hIl2Cpp + LJHCJGNNMJD_HNBLMAAJPOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::LJHCJGNNMJD* BPLPBPMEODA(::PJPPGJEDCOG* a1)
		{
			return ((::LJHCJGNNMJD*(*)(::PVOID, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + LJHCJGNNMJD_HNBLMAAJPOJ_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
