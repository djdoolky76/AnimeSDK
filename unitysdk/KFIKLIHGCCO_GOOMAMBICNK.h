#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundsInt.h"
#include "unitysdk/KFIKLIHGCCO_NDMPIHNDBLO.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFIKLIHGCCO_GOOMAMBICNK_CTOR_OFFSET UNITYSDK_OFFSET(0x176EDAE0)
#define KFIKLIHGCCO_GOOMAMBICNK_DPEDNIOFHAJ_OFFSET UNITYSDK_OFFSET(0x176F6DB0)
#define KFIKLIHGCCO_GOOMAMBICNK_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x176F0090)
#define KFIKLIHGCCO_GOOMAMBICNK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x176EDB40)
#define KFIKLIHGCCO_GOOMAMBICNK_MDKBHAOAGMH_OFFSET UNITYSDK_OFFSET(0x176EDC20)

inline static constexpr unsigned int KFIKLIHGCCO_GOOMAMBICNK_TypeDefinitionIndex = 52854;

	class KFIKLIHGCCO_GOOMAMBICNK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* PJCEPNKEDJO; // 0x10
		::System::Single JKFKEJHIPFM; // 0x18
		::System::Int32 DHHNPMOMLIF; // 0x1C
		::System::Single MFDEGPMABFJ; // 0x20
		::UnityEngine::BoundsInt IKNEGODHDGO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_GOOMAMBICNK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_GOOMAMBICNK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void MDKBHAOAGMH(::KFIKLIHGCCO_NDMPIHNDBLO a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::KFIKLIHGCCO_NDMPIHNDBLO, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_GOOMAMBICNK_MDKBHAOAGMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KKKIONIDKFA(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_GOOMAMBICNK_KKKIONIDKFA_OFFSET))(this, a1, a2, a3);
		}

		::System::Single DPEDNIOFHAJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_GOOMAMBICNK_DPEDNIOFHAJ_OFFSET))(this);
		}

	};
