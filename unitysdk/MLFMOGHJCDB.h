#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBIMFJCHINA;

#define MLFMOGHJCDB_DGOAOLIHLNC_1_OFFSET UNITYSDK_OFFSET(0x1B91D160)
#define MLFMOGHJCDB_DGOAOLIHLNC_OFFSET UNITYSDK_OFFSET(0x1B91D0D0)
#define MLFMOGHJCDB_IAIFNLFGJIJ_1_OFFSET UNITYSDK_OFFSET(0x1B91CFD0)
#define MLFMOGHJCDB_IAIFNLFGJIJ_OFFSET UNITYSDK_OFFSET(0x1B91CF90)
#define MLFMOGHJCDB_JGPBMCNHGLF_OFFSET UNITYSDK_OFFSET(0x1B91D270)
#define MLFMOGHJCDB_JLHPEJJABMK_OFFSET UNITYSDK_OFFSET(0x1B91D330)
#define MLFMOGHJCDB_NGPMNBPKNOE_OFFSET UNITYSDK_OFFSET(0x1B91D080)

inline static constexpr unsigned int MLFMOGHJCDB_TypeDefinitionIndex = 75508;

	class MLFMOGHJCDB : public ::System::Object
	{
	public:
		static ::MBIMFJCHINA* IAIFNLFGJIJ()
		{
			return ((::MBIMFJCHINA*(*)())((::PBYTE)hIl2Cpp + MLFMOGHJCDB_IAIFNLFGJIJ_OFFSET))();
		}

		static ::MBIMFJCHINA* IAIFNLFGJIJ_1(::System::Boolean a1)
		{
			return ((::MBIMFJCHINA*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MLFMOGHJCDB_IAIFNLFGJIJ_1_OFFSET))(a1);
		}

		static ::MBIMFJCHINA* DGOAOLIHLNC(::System::Int32 a1)
		{
			return ((::MBIMFJCHINA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MLFMOGHJCDB_DGOAOLIHLNC_OFFSET))(a1);
		}

		static ::MBIMFJCHINA* DGOAOLIHLNC_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::MBIMFJCHINA*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MLFMOGHJCDB_DGOAOLIHLNC_1_OFFSET))(a1, a2);
		}

		static ::MBIMFJCHINA* NGPMNBPKNOE(::System::Int32 a1)
		{
			return ((::MBIMFJCHINA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MLFMOGHJCDB_NGPMNBPKNOE_OFFSET))(a1);
		}

		static ::MBIMFJCHINA* JGPBMCNHGLF(::System::Int32 a1)
		{
			return ((::MBIMFJCHINA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MLFMOGHJCDB_JGPBMCNHGLF_OFFSET))(a1);
		}

		static ::MBIMFJCHINA* JLHPEJJABMK(::System::Int32 a1)
		{
			return ((::MBIMFJCHINA*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MLFMOGHJCDB_JLHPEJJABMK_OFFSET))(a1);
		}

	};
