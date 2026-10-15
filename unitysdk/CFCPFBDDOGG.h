#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDLIJBAOHKC;
class OOADCLKADJC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFCPFBDDOGG_CTOR_OFFSET UNITYSDK_OFFSET(0xCA0A530)
#define CFCPFBDDOGG_GET_FUNS_OFFSET UNITYSDK_OFFSET(0xCA0A520)
#define CFCPFBDDOGG_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0xCA0A5B0)

inline static constexpr unsigned int CFCPFBDDOGG_TypeDefinitionIndex = 63925;

	class CFCPFBDDOGG : public ::System::Object
	{
	public:
		::FDLIJBAOHKC* JKOCLNODAJD; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OOADCLKADJC*>* _Funs_k__BackingField; // 0x18
		::System::Void _ctor(::FDLIJBAOHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLIJBAOHKC*))((::PBYTE)hIl2Cpp + CFCPFBDDOGG_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OOADCLKADJC*>* get_Funs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OOADCLKADJC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCPFBDDOGG_GET_FUNS_OFFSET))(this);
		}

		::OOADCLKADJC* GKKDODPDBLA(::System::UInt32 a1)
		{
			return ((::OOADCLKADJC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFCPFBDDOGG_GKKDODPDBLA_OFFSET))(this, a1);
		}

	};
