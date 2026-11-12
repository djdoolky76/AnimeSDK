#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IGridFightTutorialData; }

#define GDOIFDKDEFD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x168F7330)

inline static constexpr unsigned int GDOIFDKDEFD_TypeDefinitionIndex = 67423;

	class GDOIFDKDEFD : public ::System::Object
	{
	public:
		static ::RPG::Client::IGridFightTutorialData* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::IGridFightTutorialData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDOIFDKDEFD_BPLPBPMEODA_OFFSET))(a1);
		}

	};
