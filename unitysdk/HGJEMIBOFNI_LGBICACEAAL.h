#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGJEMIBOFNI;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HGJEMIBOFNI_LGBICACEAAL_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x140A62C0)
#define HGJEMIBOFNI_LGBICACEAAL_LDMKNICFFNB_OFFSET UNITYSDK_OFFSET(0x140A6350)
#define HGJEMIBOFNI_LGBICACEAAL_NBGJLEHHFMA_OFFSET UNITYSDK_OFFSET(0x140A6250)
#define HGJEMIBOFNI_LGBICACEAAL__CTOR_OFFSET UNITYSDK_OFFSET(0x140A6240)

inline static constexpr unsigned int HGJEMIBOFNI_LGBICACEAAL_TypeDefinitionIndex = 73671;

class HGJEMIBOFNI_LGBICACEAAL : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10
	::System::Action_1<::MoleMole::IVideoPlayer*>* JNCGLPCKKFL; // 0x18
	::HGJEMIBOFNI* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_LGBICACEAAL__CTOR_OFFSET))(this);
	}

	::System::Void NBGJLEHHFMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_LGBICACEAAL_NBGJLEHHFMA_OFFSET))(this);
	}

	::System::Void AACLKPHGMLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_LGBICACEAAL_AACLKPHGMLM_OFFSET))(this);
	}

	::System::Void LDMKNICFFNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_LGBICACEAAL_LDMKNICFFNB_OFFSET))(this);
	}
};
