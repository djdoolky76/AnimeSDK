#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEAGFGMOICG;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEAGFGMOICG_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1C5531E0)
#define AEAGFGMOICG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C553240)

inline static constexpr unsigned int AEAGFGMOICG_TypeDefinitionIndex = 36198;

	class AEAGFGMOICG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::System::UInt32>* DLGGCFAGLAL; // 0x10
		::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* GEGKCAOLMOH; // 0x18
		::System::Int32 GACGNFFJOAH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAGFGMOICG_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::AEAGFGMOICG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEAGFGMOICG*))((::PBYTE)hIl2Cpp + AEAGFGMOICG_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
