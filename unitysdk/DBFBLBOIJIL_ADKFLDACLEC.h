#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DBFBLBOIJIL_ADKFLDACLEC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x19D51CC0)
#define DBFBLBOIJIL_ADKFLDACLEC__CTOR_OFFSET UNITYSDK_OFFSET(0x19D51CB0)

inline static constexpr unsigned int DBFBLBOIJIL_ADKFLDACLEC_TypeDefinitionIndex = 75806;

class DBFBLBOIJIL_ADKFLDACLEC : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFBLBOIJIL_ADKFLDACLEC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFBLBOIJIL_ADKFLDACLEC_PNGOHNLELDJ_OFFSET))(this);
	}
};
