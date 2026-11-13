#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLPHDFJIHKL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCOOHBIOCEA_CTOR_OFFSET UNITYSDK_OFFSET(0x19D87440)
#define BCOOHBIOCEA_MFJKLNNFGEA_OFFSET UNITYSDK_OFFSET(0x19D87320)
#define BCOOHBIOCEA_PEFODKCFNFG_OFFSET UNITYSDK_OFFSET(0x19D86E90)
#define BCOOHBIOCEA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x19D86E30)

inline static constexpr unsigned int BCOOHBIOCEA_TypeDefinitionIndex = 62743;

	class BCOOHBIOCEA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* MNHHBHHMJLF; // 0x10
		::System::UInt32 MNMHMECGDAK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOOHBIOCEA_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOOHBIOCEA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void PEFODKCFNFG(::HLPHDFJIHKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLPHDFJIHKL*))((::PBYTE)hIl2Cpp + BCOOHBIOCEA_PEFODKCFNFG_OFFSET))(this, a1);
		}

		::System::Boolean MFJKLNNFGEA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BCOOHBIOCEA_MFJKLNNFGEA_OFFSET))(this, a1, a2);
		}

	};
