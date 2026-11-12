#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECLKNNECNFK;
namespace RPG::Client { class GridFightAugment; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA66A50)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS12_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xDA66D90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo___c__DisplayClass12_0_TypeDefinitionIndex = 65827;

	class GridFightAugmentInfo___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::ECLKNNECNFK* augmentUpdate; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__0(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS12_0__UPDATE_B__0_OFFSET))(this, a1);
		}

	};
}
