#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System { class Action; }

#define EBIMENNAEIE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CFB9D0)
#define EBIMENNAEIE_GKMOGNNFNKO_OFFSET UNITYSDK_OFFSET(0x12CFBAA0)
#define EBIMENNAEIE_JJJBJEDNNOG_OFFSET UNITYSDK_OFFSET(0x12CFB9E0)

inline static constexpr unsigned int EBIMENNAEIE_TypeDefinitionIndex = 67113;

	class EBIMENNAEIE : public ::System::Object
	{
	public:
		::System::Action* CGFIKAICAAC; // 0x10
		::NHHMEPILLHL BPKKKMOCFIP; // 0x18
		::System::Void _ctor(::NHHMEPILLHL a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL))((::PBYTE)hIl2Cpp + EBIMENNAEIE_CTOR_OFFSET))(this, a1);
		}

		::System::Void JJJBJEDNNOG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EBIMENNAEIE_JJJBJEDNNOG_OFFSET))(this, a1);
		}

		::System::Void GKMOGNNFNKO(::AOBICCEGAMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOBICCEGAMM*))((::PBYTE)hIl2Cpp + EBIMENNAEIE_GKMOGNNFNKO_OFFSET))(this, a1);
		}

	};
