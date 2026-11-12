#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"

#define GDCBKFDNOCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4CDB0)

inline static constexpr unsigned int GDCBKFDNOCL_TypeDefinitionIndex = 44762;

	class GDCBKFDNOCL : public ::System::Object
	{
	public:
		::System::Int32 LGPNENCNDFB; // 0x10
		::RPG::GameCore::IngredientKind DNBGBDKMJGM; // 0x14
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::Boolean ECOLOMAGPBP; // 0x1C
		::System::Boolean JCFBHIFFDGM; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 DCFLOKLNANJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCBKFDNOCL_CTOR_OFFSET))(this);
		}

	};
