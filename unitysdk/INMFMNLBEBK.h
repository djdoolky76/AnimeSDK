#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RidusGotBooSkillEx; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INMFMNLBEBK__CTOR_OFFSET UNITYSDK_OFFSET(0x19438FF0)

inline static constexpr unsigned int INMFMNLBEBK_TypeDefinitionIndex = 80657;

class INMFMNLBEBK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::RidusGotBooSkillEx*>* NDIFFNMFHOH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMFMNLBEBK__CTOR_OFFSET))(this);
	}
};
