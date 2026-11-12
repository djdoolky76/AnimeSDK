#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/System/Object.h"
class HBFFFHHBMAB;
namespace RPG::GameCore { class ComicDessertCycleRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGBDBIFDKLD_CMDKBLLNMIB_OFFSET UNITYSDK_OFFSET(0xF414130)
#define DGBDBIFDKLD_CTOR_OFFSET UNITYSDK_OFFSET(0xF414310)
#define DGBDBIFDKLD_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0xF413B80)
#define DGBDBIFDKLD_MBDIBBNPPJL_OFFSET UNITYSDK_OFFSET(0xF413E10)
#define DGBDBIFDKLD_OFFCNODLKGO_OFFSET UNITYSDK_OFFSET(0xF413A70)
#define DGBDBIFDKLD_OMKAIKFHCCJ_OFFSET UNITYSDK_OFFSET(0xF413FC0)

inline static constexpr unsigned int DGBDBIFDKLD_TypeDefinitionIndex = 77152;

	class DGBDBIFDKLD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::BAMIOFOKCEB, ::HBFFFHHBMAB*>* BDBOGJHLEIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBDBIFDKLD_CTOR_OFFSET))(this);
		}

		::HBFFFHHBMAB* OFFCNODLKGO(::BAMIOFOKCEB a1)
		{
			return ((::HBFFFHHBMAB*(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + DGBDBIFDKLD_OFFCNODLKGO_OFFSET))(this, a1);
		}

		::HBFFFHHBMAB* MBDIBBNPPJL(::BAMIOFOKCEB a1)
		{
			return ((::HBFFFHHBMAB*(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + DGBDBIFDKLD_MBDIBBNPPJL_OFFSET))(this, a1);
		}

		::HBFFFHHBMAB* OMKAIKFHCCJ()
		{
			return ((::HBFFFHHBMAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBDBIFDKLD_OMKAIKFHCCJ_OFFSET))(this);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBDBIFDKLD_HHNFFFMBIKD_OFFSET))(this);
		}

		static ::HBFFFHHBMAB* CMDKBLLNMIB(::RPG::GameCore::ComicDessertCycleRow* a1)
		{
			return ((::HBFFFHHBMAB*(*)(::RPG::GameCore::ComicDessertCycleRow*))((::PBYTE)hIl2Cpp + DGBDBIFDKLD_CMDKBLLNMIB_OFFSET))(a1);
		}

	};
