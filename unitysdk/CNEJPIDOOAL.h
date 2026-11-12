#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/DGMNKINFKFH.h"
#include "unitysdk/LMNEKOLMGEM.h"
class BALLHPKKDDH;
class CFIHNPKOEMD;
class NOBCAKJMGPH;
namespace RPG::GameCore { class IAvatarCommonRowWrap; }

#define CNEJPIDOOAL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE5E2BC0)
#define CNEJPIDOOAL_CTOR_OFFSET UNITYSDK_OFFSET(0xE5E4320)
#define CNEJPIDOOAL_GET_DAMAGETYPEFACTORY_OFFSET UNITYSDK_OFFSET(0xE5E2BA0)
#define CNEJPIDOOAL_GET_PATHFACTORY_OFFSET UNITYSDK_OFFSET(0xE5E2B80)
#define CNEJPIDOOAL_JPJDMBEMNAD_OFFSET UNITYSDK_OFFSET(0xE5E3E70)
#define CNEJPIDOOAL_PIGDMCHOKKI_OFFSET UNITYSDK_OFFSET(0xE5E3D40)
#define CNEJPIDOOAL_SET_DAMAGETYPEFACTORY_OFFSET UNITYSDK_OFFSET(0xE5E2BB0)
#define CNEJPIDOOAL_SET_PATHFACTORY_OFFSET UNITYSDK_OFFSET(0xE5E2B90)

inline static constexpr unsigned int CNEJPIDOOAL_TypeDefinitionIndex = 64029;

	class CNEJPIDOOAL : public ::System::Object
	{
	public:
		::NOBCAKJMGPH* _PathFactory_k__BackingField; // 0x10
		::CFIHNPKOEMD* _DamageTypeFactory_k__BackingField; // 0x18
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

		::LMNEKOLMGEM PIGDMCHOKKI(::RPG::GameCore::IAvatarCommonRowWrap* a1)
		{
			return ((::LMNEKOLMGEM(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + CNEJPIDOOAL_PIGDMCHOKKI_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::DGMNKINFKFH>* JPJDMBEMNAD(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::DGMNKINFKFH>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CNEJPIDOOAL_JPJDMBEMNAD_OFFSET))(a1);
		}

	};
