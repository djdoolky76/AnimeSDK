#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class PIIOAKOEACN;

#define EBGKBGGBCBG_FJEMDBOOCHJ_OFFSET UNITYSDK_OFFSET(0x1C54F400)

inline static constexpr unsigned int EBGKBGGBCBG_TypeDefinitionIndex = 41891;

	class EBGKBGGBCBG : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> FJEMDBOOCHJ(::PIIOAKOEACN* a1)
		{
			return ((::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>(*)(::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + EBGKBGGBCBG_FJEMDBOOCHJ_OFFSET))(a1);
		}

	};
