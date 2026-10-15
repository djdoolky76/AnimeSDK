#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class COOONBGCCCM;
class JCGJEBAIBPL;
class JMECAFJNCOM;

#define PEEJLLENABM_COCPDAMMKEI_OFFSET UNITYSDK_OFFSET(0xC0344D0)
#define PEEJLLENABM_CTOR_OFFSET UNITYSDK_OFFSET(0xC034460)

inline static constexpr unsigned int PEEJLLENABM_TypeDefinitionIndex = 81108;

	class PEEJLLENABM : public ::System::Object
	{
	public:
		::JCGJEBAIBPL* FPMAGFFBEDJ; // 0x10
		::System::Void _ctor(::JCGJEBAIBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCGJEBAIBPL*))((::PBYTE)hIl2Cpp + PEEJLLENABM_CTOR_OFFSET))(this, a1);
		}

		::COOONBGCCCM* COCPDAMMKEI(::JMECAFJNCOM* a1, ::BJHMBGLPOLB* a2)
		{
			return ((::COOONBGCCCM*(*)(::PVOID, ::JMECAFJNCOM*, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + PEEJLLENABM_COCPDAMMKEI_OFFSET))(this, a1, a2);
		}

	};
