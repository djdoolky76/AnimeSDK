#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System { template <typename T> class Action_1; }

#define EBIMENNAEIE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CF6C50)
#define EBIMENNAEIE_GKMOGNNFNKO_OFFSET UNITYSDK_OFFSET(0x12CF6D20)
#define EBIMENNAEIE_JJJBJEDNNOG_OFFSET UNITYSDK_OFFSET(0x12CF6C60)

inline static constexpr unsigned int EBIMENNAEIE_TypeDefinitionIndex = 67113;

	class EBIMENNAEIE : public ::System::Object
	{
	public:
		::System::Action_1<::AOBICCEGAMM*>* CGFIKAICAAC; // 0x10
		::NHHMEPILLHL BPKKKMOCFIP; // 0x18
		::System::Void _ctor(::NHHMEPILLHL a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL))((::PBYTE)hIl2Cpp + EBIMENNAEIE_CTOR_OFFSET))(this, a1);
		}

		::System::Void JJJBJEDNNOG(::System::Action_1<::AOBICCEGAMM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::AOBICCEGAMM*>*))((::PBYTE)hIl2Cpp + EBIMENNAEIE_JJJBJEDNNOG_OFFSET))(this, a1);
		}

		::System::Void GKMOGNNFNKO(::AOBICCEGAMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOBICCEGAMM*))((::PBYTE)hIl2Cpp + EBIMENNAEIE_GKMOGNNFNKO_OFFSET))(this, a1);
		}

	};
