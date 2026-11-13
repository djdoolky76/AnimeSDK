#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"

#define GDCBKFDNOCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C225730)

inline static constexpr unsigned int GDCBKFDNOCL_TypeDefinitionIndex = 44762;

	class GDCBKFDNOCL : public ::System::Object
	{
	public:
		::System::Boolean ECOLOMAGPBP; // 0x10
		::System::Boolean JCFBHIFFDGM; // 0x11
		::System::Byte _padding0[0x2];
		::System::UInt32 PHFMCACHFIJ; // 0x14
		::RPG::GameCore::IngredientKind DNBGBDKMJGM; // 0x18
		::System::Int32 LGPNENCNDFB; // 0x1C
		::System::UInt32 DCFLOKLNANJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCBKFDNOCL_CTOR_OFFSET))(this);
		}

	};
