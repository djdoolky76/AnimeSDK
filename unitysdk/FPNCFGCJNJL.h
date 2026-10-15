#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPNCFGCJNJL_ProcessorType.h"
#include "unitysdk/System/Object.h"
class FPNCFGCJNJL_EEGAKEAECHN;
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPNCFGCJNJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15916430)
#define FPNCFGCJNJL_GHIMCEMDDOA_OFFSET UNITYSDK_OFFSET(0x15915EC0)
#define FPNCFGCJNJL_JLBHBIPIDCO_1_OFFSET UNITYSDK_OFFSET(0x159165A0)
#define FPNCFGCJNJL_JLBHBIPIDCO_OFFSET UNITYSDK_OFFSET(0x15916540)
#define FPNCFGCJNJL_NPLMOGNCNLD_OFFSET UNITYSDK_OFFSET(0x15915DE0)

inline static constexpr unsigned int FPNCFGCJNJL_TypeDefinitionIndex = 49082;

	class FPNCFGCJNJL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* JFEMAJLJHNG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* AIIKOFMNHII; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNCFGCJNJL_CTOR_OFFSET))(this);
		}

		::System::Object* NPLMOGNCNLD()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNCFGCJNJL_NPLMOGNCNLD_OFFSET))(this);
		}

		::System::Void GHIMCEMDDOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNCFGCJNJL_GHIMCEMDDOA_OFFSET))(this);
		}

		::FPNCFGCJNJL_EEGAKEAECHN* JLBHBIPIDCO(::FPNCFGCJNJL_ProcessorType a1)
		{
			return ((::FPNCFGCJNJL_EEGAKEAECHN*(*)(::PVOID, ::FPNCFGCJNJL_ProcessorType))((::PBYTE)hIl2Cpp + FPNCFGCJNJL_JLBHBIPIDCO_OFFSET))(this, a1);
		}

		::FPNCFGCJNJL_EEGAKEAECHN* JLBHBIPIDCO_1(::System::Type* a1)
		{
			return ((::FPNCFGCJNJL_EEGAKEAECHN*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FPNCFGCJNJL_JLBHBIPIDCO_1_OFFSET))(this, a1);
		}

	};
