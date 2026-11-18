#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GameObjectPositionData; }
namespace System { class String; }

#define MOLEMOLE_CINEMANPCOFFSETSO_CIBBABIOMBJ_NNFNNJDPPCA_OFFSET UNITYSDK_OFFSET(0x131C58E0)
#define MOLEMOLE_CINEMANPCOFFSETSO_CIBBABIOMBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x131C58D0)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaNpcOffsetSo_CIBBABIOMBJ_TypeDefinitionIndex = 72052;

	class CinemaNpcOffsetSo_CIBBABIOMBJ : public ::System::Object
	{
	public:
		::System::String* IFIKDGDNHFO; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_CIBBABIOMBJ__CTOR_OFFSET))(this);
		}

		::System::Boolean NNFNNJDPPCA(::MoleMole::GameObjectPositionData* HEAJMIGHEHG)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameObjectPositionData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_CIBBABIOMBJ_NNFNNJDPPCA_OFFSET))(this, HEAJMIGHEHG);
		}
	};
}
