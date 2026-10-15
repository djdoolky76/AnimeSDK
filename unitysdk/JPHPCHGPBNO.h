#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIDJMCKOHEK.h"
namespace System { class Object; }

#define JPHPCHGPBNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2BA260)
#define JPHPCHGPBNO_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0xB2BA210)

inline static constexpr unsigned int JPHPCHGPBNO_TypeDefinitionIndex = 71753;

	class JPHPCHGPBNO : public ::EIDJMCKOHEK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHPCHGPBNO_CTOR_OFFSET))(this);
		}

		::System::Void JMBFOHAMFGI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPHPCHGPBNO_JMBFOHAMFGI_OFFSET))(this, a1);
		}

	};
