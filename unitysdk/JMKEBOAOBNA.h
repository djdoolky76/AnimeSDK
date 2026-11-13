#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"
class CLFIGBPHLHI;
class JMKEBOAOBNA;

#define JMKEBOAOBNA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A0B1DD0)
#define JMKEBOAOBNA_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0B1F30)
#define JMKEBOAOBNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B1E50)
#define JMKEBOAOBNA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1A0B1FF0)
#define JMKEBOAOBNA_REVERSE_OFFSET UNITYSDK_OFFSET(0x1A0B1E70)

inline static constexpr unsigned int JMKEBOAOBNA_TypeDefinitionIndex = 75623;

	class JMKEBOAOBNA : public ::LLJAOGKDNFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKEBOAOBNA_CTOR_OFFSET))(this);
		}

		static ::JMKEBOAOBNA* BPLPBPMEODA()
		{
			return ((::JMKEBOAOBNA*(*)())((::PBYTE)hIl2Cpp + JMKEBOAOBNA_BPLPBPMEODA_OFFSET))();
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKEBOAOBNA_REVERSE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKEBOAOBNA_CLONE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMKEBOAOBNA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
