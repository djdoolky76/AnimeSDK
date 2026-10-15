#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class HCLPKMIIANI;

#define LINOOHMGAHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB6DB1A0)
#define LINOOHMGAHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6DB130)
#define LINOOHMGAHE_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB6DB180)
#define LINOOHMGAHE_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB6DB0E0)
#define LINOOHMGAHE_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB6DB190)

inline static constexpr unsigned int LINOOHMGAHE_TypeDefinitionIndex = 57302;

	class LINOOHMGAHE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::HCLPKMIIANI* _LittleGameInstance_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINOOHMGAHE_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::HCLPKMIIANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCLPKMIIANI*))((::PBYTE)hIl2Cpp + LINOOHMGAHE_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINOOHMGAHE_DISPOSE_OFFSET))(this);
		}

		::HCLPKMIIANI* get_LittleGameInstance()
		{
			return ((::HCLPKMIIANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LINOOHMGAHE_GET_LITTLEGAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_LittleGameInstance(::HCLPKMIIANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCLPKMIIANI*))((::PBYTE)hIl2Cpp + LINOOHMGAHE_SET_LITTLEGAMEINSTANCE_OFFSET))(this, a1);
		}

	};
