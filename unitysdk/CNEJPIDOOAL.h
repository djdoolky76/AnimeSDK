#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
class BALLHPKKDDH;
class CFIHNPKOEMD;
class NOBCAKJMGPH;

#define CNEJPIDOOAL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDA43340)
#define CNEJPIDOOAL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA44580)
#define CNEJPIDOOAL_GET_DAMAGETYPEFACTORY_OFFSET UNITYSDK_OFFSET(0xDA43320)
#define CNEJPIDOOAL_GET_PATHFACTORY_OFFSET UNITYSDK_OFFSET(0xDA43300)
#define CNEJPIDOOAL_SET_DAMAGETYPEFACTORY_OFFSET UNITYSDK_OFFSET(0xDA43330)
#define CNEJPIDOOAL_SET_PATHFACTORY_OFFSET UNITYSDK_OFFSET(0xDA43310)

inline static constexpr unsigned int CNEJPIDOOAL_TypeDefinitionIndex = 62606;

	class CNEJPIDOOAL : public ::System::Object
	{
	public:
		::CFIHNPKOEMD* _DamageTypeFactory_k__BackingField; // 0x10
		::NOBCAKJMGPH* _PathFactory_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEJPIDOOAL_CTOR_OFFSET))(this);
		}

		::NOBCAKJMGPH* get_PathFactory()
		{
			return ((::NOBCAKJMGPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEJPIDOOAL_GET_PATHFACTORY_OFFSET))(this);
		}

		::System::Void set_PathFactory(::NOBCAKJMGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOBCAKJMGPH*))((::PBYTE)hIl2Cpp + CNEJPIDOOAL_SET_PATHFACTORY_OFFSET))(this, a1);
		}

		::CFIHNPKOEMD* get_DamageTypeFactory()
		{
			return ((::CFIHNPKOEMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEJPIDOOAL_GET_DAMAGETYPEFACTORY_OFFSET))(this);
		}

		::System::Void set_DamageTypeFactory(::CFIHNPKOEMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFIHNPKOEMD*))((::PBYTE)hIl2Cpp + CNEJPIDOOAL_SET_DAMAGETYPEFACTORY_OFFSET))(this, a1);
		}

		::BALLHPKKDDH* BPLPBPMEODA(::APCGKBOPGJL a1)
		{
			return ((::BALLHPKKDDH*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + CNEJPIDOOAL_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
