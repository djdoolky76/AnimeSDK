#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNKMEFBKE;
class OHIAJFJDKAO;
class PLAJONHLDJN;

#define LAALMAHICIC_AOLCLCPFLHD_OFFSET UNITYSDK_OFFSET(0x1D8A0310)
#define LAALMAHICIC_BHEDNMIOAFE_OFFSET UNITYSDK_OFFSET(0x1D89FBE0)
#define LAALMAHICIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89F3E0)
#define LAALMAHICIC_GCCHKJOKGFK_OFFSET UNITYSDK_OFFSET(0x1D8A05F0)
#define LAALMAHICIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D89FF20)
#define LAALMAHICIC_KAHGJPPLJHN_OFFSET UNITYSDK_OFFSET(0x1D89F3F0)
#define LAALMAHICIC_KDHBMHFMHCO_OFFSET UNITYSDK_OFFSET(0x1D8A0770)
#define LAALMAHICIC_LNOGPPKLBBC_OFFSET UNITYSDK_OFFSET(0x1D89FF70)

inline static constexpr unsigned int LAALMAHICIC_TypeDefinitionIndex = 37458;

	class LAALMAHICIC : public ::System::Object
	{
	public:
		::PLAJONHLDJN* IBGLIGGOIEK; // 0x10
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + LAALMAHICIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KAHGJPPLJHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALMAHICIC_KAHGJPPLJHN_OFFSET))(this);
		}

		::Il2CppArray<::OHIAJFJDKAO*>* BHEDNMIOAFE()
		{
			return ((::Il2CppArray<::OHIAJFJDKAO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALMAHICIC_BHEDNMIOAFE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALMAHICIC_INITIALIZE_OFFSET))(this);
		}

		::System::Single LNOGPPKLBBC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALMAHICIC_LNOGPPKLBBC_OFFSET))(this);
		}

		::System::Single AOLCLCPFLHD(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAALMAHICIC_AOLCLCPFLHD_OFFSET))(this, a1);
		}

		::System::Void GCCHKJOKGFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALMAHICIC_GCCHKJOKGFK_OFFSET))(this);
		}

		::System::Void KDHBMHFMHCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAALMAHICIC_KDHBMHFMHCO_OFFSET))(this);
		}

	};
