#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AKCLHMNONOD.h"
#include "unitysdk/LHNBPHNHNBI.h"
class LECHNIOHAEF;
class NKLAJLPIJCF;
namespace RPG::GameCore { class ComicDessertDishRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GFIPNADIDOP_ABMDJMAPFAF_OFFSET UNITYSDK_OFFSET(0x16934780)
#define GFIPNADIDOP_BEJFOFMLGJB_OFFSET UNITYSDK_OFFSET(0x16934630)
#define GFIPNADIDOP_CMDKBLLNMIB_OFFSET UNITYSDK_OFFSET(0x16934A20)
#define GFIPNADIDOP_CTOR_OFFSET UNITYSDK_OFFSET(0x16934C20)
#define GFIPNADIDOP_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0x169343A0)
#define GFIPNADIDOP_MMPOEIPOJNC_OFFSET UNITYSDK_OFFSET(0x169342E0)
#define GFIPNADIDOP_OPJJDLHLLJC_OFFSET UNITYSDK_OFFSET(0x16934B10)

inline static constexpr unsigned int GFIPNADIDOP_TypeDefinitionIndex = 77154;

	class GFIPNADIDOP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NKLAJLPIJCF*>* BDBOGJHLEIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIPNADIDOP_CTOR_OFFSET))(this);
		}

		::NKLAJLPIJCF* MMPOEIPOJNC(::AKCLHMNONOD a1)
		{
			return ((::NKLAJLPIJCF*(*)(::PVOID, ::AKCLHMNONOD))((::PBYTE)hIl2Cpp + GFIPNADIDOP_MMPOEIPOJNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::NKLAJLPIJCF*>* BEJFOFMLGJB()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::NKLAJLPIJCF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIPNADIDOP_BEJFOFMLGJB_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::NKLAJLPIJCF*>* ABMDJMAPFAF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::NKLAJLPIJCF*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFIPNADIDOP_ABMDJMAPFAF_OFFSET))(this, a1);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFIPNADIDOP_HHNFFFMBIKD_OFFSET))(this);
		}

		::NKLAJLPIJCF* CMDKBLLNMIB(::RPG::GameCore::ComicDessertDishRow* a1)
		{
			return ((::NKLAJLPIJCF*(*)(::PVOID, ::RPG::GameCore::ComicDessertDishRow*))((::PBYTE)hIl2Cpp + GFIPNADIDOP_CMDKBLLNMIB_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>* OPJJDLHLLJC(::Il2CppArray<::LECHNIOHAEF*>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::LHNBPHNHNBI>*(*)(::Il2CppArray<::LECHNIOHAEF*>*))((::PBYTE)hIl2Cpp + GFIPNADIDOP_OPJJDLHLLJC_OFFSET))(a1);
		}

	};
