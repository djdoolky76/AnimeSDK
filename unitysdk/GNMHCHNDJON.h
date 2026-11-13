#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPKPCOFKFLC;
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define GNMHCHNDJON_CTOR_OFFSET UNITYSDK_OFFSET(0x1879F750)
#define GNMHCHNDJON_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1879F520)
#define GNMHCHNDJON_JDLFIFOEAFC_OFFSET UNITYSDK_OFFSET(0x1879F420)
#define GNMHCHNDJON_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1879F5D0)
#define GNMHCHNDJON_MMNOLLFJEAE_OFFSET UNITYSDK_OFFSET(0x1879F490)
#define GNMHCHNDJON_ONMKOKMPANB_OFFSET UNITYSDK_OFFSET(0x1879F2D0)

inline static constexpr unsigned int GNMHCHNDJON_TypeDefinitionIndex = 80552;

	class GNMHCHNDJON : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::BPKPCOFKFLC*>* JPNOKFBIHMB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMHCHNDJON_CTOR_OFFSET))(this);
		}

		::System::Void ONMKOKMPANB(::BPKPCOFKFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPKPCOFKFLC*))((::PBYTE)hIl2Cpp + GNMHCHNDJON_ONMKOKMPANB_OFFSET))(this, a1);
		}

		::System::Void MMNOLLFJEAE(::BPKPCOFKFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPKPCOFKFLC*))((::PBYTE)hIl2Cpp + GNMHCHNDJON_MMNOLLFJEAE_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMHCHNDJON_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNMHCHNDJON_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean JDLFIFOEAFC(::BPKPCOFKFLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPKPCOFKFLC*))((::PBYTE)hIl2Cpp + GNMHCHNDJON_JDLFIFOEAFC_OFFSET))(this, a1);
		}

	};
