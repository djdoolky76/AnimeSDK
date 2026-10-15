#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectType.h"
#include "unitysdk/System/Object.h"
class IFPOBJGHJME;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMEFEGGEMIJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB785E0)
#define IMEFEGGEMIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB788E0)
#define IMEFEGGEMIJ_DNPIDGKLHOB_OFFSET UNITYSDK_OFFSET(0x1CB78670)
#define IMEFEGGEMIJ_LDCGNGDPGAM_OFFSET UNITYSDK_OFFSET(0x1CB787D0)

inline static constexpr unsigned int IMEFEGGEMIJ_TypeDefinitionIndex = 42079;

	class IMEFEGGEMIJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IFPOBJGHJME*>* JJJNPLOLJGE; // 0x10
		::System::Int32 OOFOCLJKNCM; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::RPG::GameCore::LittleGameSmartObjectType GMPGDEINODK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFEGGEMIJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFEGGEMIJ_CLEAR_OFFSET))(this);
		}

		::System::Void DNPIDGKLHOB(::RPG::GameCore::LittleGameEntityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + IMEFEGGEMIJ_DNPIDGKLHOB_OFFSET))(this, a1);
		}

		::System::Void LDCGNGDPGAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFEGGEMIJ_LDCGNGDPGAM_OFFSET))(this);
		}

	};
