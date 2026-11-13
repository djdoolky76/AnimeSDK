#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightAugment; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C72AA80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS8_0__GETAUGMENTBYID_B__0_OFFSET UNITYSDK_OFFSET(0x1C72BCE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo___c__DisplayClass8_0_TypeDefinitionIndex = 65829;

	class GridFightAugmentInfo___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAugmentByID_b__0(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS8_0__GETAUGMENTBYID_B__0_OFFSET))(this, a1);
		}

	};
}
