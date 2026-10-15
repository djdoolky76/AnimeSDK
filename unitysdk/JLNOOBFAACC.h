#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/SIMFoodState.h"
#include "unitysdk/System/Object.h"
class IMEFEGGEMIJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLNOOBFAACC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB74FD0)
#define JLNOOBFAACC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB75020)
#define JLNOOBFAACC_DFDDDDBAHOC_OFFSET UNITYSDK_OFFSET(0x1CB74F70)

inline static constexpr unsigned int JLNOOBFAACC_TypeDefinitionIndex = 42111;

	class JLNOOBFAACC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* LEABPMKPDKP; // 0x10
		::IMEFEGGEMIJ* EDIMGKLHMBG; // 0x18
		::System::Int32 BEFKNFBNBGJ; // 0x20
		::RPG::Client::LittleGame::ElfRestaurant::SIMFoodState MEPFOEEGBEA; // 0x24
		::System::Boolean BOPGCHFNIPK; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 PHFMCACHFIJ; // 0x2C
		::System::UInt32 AAGKEBFHLMC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNOOBFAACC_CTOR_OFFSET))(this);
		}

		::System::Boolean DFDDDDBAHOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNOOBFAACC_DFDDDDBAHOC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNOOBFAACC_CLEAR_OFFSET))(this);
		}

	};
