#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GameObjectPositionData; }
namespace System { class String; }

#define MOLEMOLE_CINEMANPCOFFSETSO_GIBCFFNDMNA_OINGIOBOPEL_OFFSET UNITYSDK_OFFSET(0x19224240)
#define MOLEMOLE_CINEMANPCOFFSETSO_GIBCFFNDMNA__CTOR_OFFSET UNITYSDK_OFFSET(0x19224230)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaNpcOffsetSo_GIBCFFNDMNA_TypeDefinitionIndex = 72053;

	class CinemaNpcOffsetSo_GIBCFFNDMNA : public ::System::Object
	{
	public:
		::System::String* IFIKDGDNHFO; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_GIBCFFNDMNA__CTOR_OFFSET))(this);
		}

		::System::Boolean OINGIOBOPEL(::MoleMole::GameObjectPositionData* HEAJMIGHEHG)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameObjectPositionData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_GIBCFFNDMNA_OINGIOBOPEL_OFFSET))(this, HEAJMIGHEHG);
		}
	};
}
