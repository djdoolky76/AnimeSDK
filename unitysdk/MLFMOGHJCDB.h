#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBIMFJCHINA;

#define MLFMOGHJCDB_DGOAOLIHLNC_1_OFFSET UNITYSDK_OFFSET(0xB9AD960)
#define MLFMOGHJCDB_DGOAOLIHLNC_OFFSET UNITYSDK_OFFSET(0xB9AD8D0)
#define MLFMOGHJCDB_IAIFNLFGJIJ_1_OFFSET UNITYSDK_OFFSET(0xB9AD7D0)
#define MLFMOGHJCDB_IAIFNLFGJIJ_OFFSET UNITYSDK_OFFSET(0xB9AD790)
#define MLFMOGHJCDB_JGPBMCNHGLF_OFFSET UNITYSDK_OFFSET(0xB9ADA70)
#define MLFMOGHJCDB_JLHPEJJABMK_OFFSET UNITYSDK_OFFSET(0xB9ADB30)
#define MLFMOGHJCDB_NGPMNBPKNOE_OFFSET UNITYSDK_OFFSET(0xB9AD880)

inline static constexpr unsigned int MLFMOGHJCDB_TypeDefinitionIndex = 73389;

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
