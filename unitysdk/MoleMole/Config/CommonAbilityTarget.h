#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_AOKAAJHMMJM_OFFSET UNITYSDK_OFFSET(0x1BA24770)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_APEBGBNLBIJ_OFFSET UNITYSDK_OFFSET(0x1BA24EA0)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_BKKPLGJLKLE_OFFSET UNITYSDK_OFFSET(0x1BA25090)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_EAINKOAGLOD_OFFSET UNITYSDK_OFFSET(0x1BA24620)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_IFPMGFOLIKP_OFFSET UNITYSDK_OFFSET(0x1BA248E0)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_KIEFPNDJOGM_OFFSET UNITYSDK_OFFSET(0x1BA251D0)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET_LDDPPFIFGAN_OFFSET UNITYSDK_OFFSET(0x1BA25230)
#define MOLEMOLE_CONFIG_COMMONABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA251C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CommonAbilityTarget_TypeDefinitionIndex = 67175;

	class CommonAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Int32 searchCount; // 0x40
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* resultList; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* selectList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MGHNAPKHBOG>* EAINKOAGLOD(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::System::Collections::Generic::List_1<::MGHNAPKHBOG>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_EAINKOAGLOD_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GDIJDKDIAAD, ILBDDBLKCOO);
		}

		::System::Boolean BKKPLGJLKLE(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GDIJDKDIAAD, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& HBPANNDINGD)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_BKKPLGJLKLE_OFFSET))(this, GDIJDKDIAAD, HBPANNDINGD);
		}

		::System::Void IFPMGFOLIKP(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Battle::Entity* GPBLCMONBOI, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HBPANNDINGD, ::System::UInt32 ILBDDBLKCOO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_IFPMGFOLIKP_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GPBLCMONBOI, HBPANNDINGD, ILBDDBLKCOO);
		}

		::System::Boolean KIEFPNDJOGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_KIEFPNDJOGM_OFFSET))(this);
		}

		::System::Collections::IEnumerable* LDDPPFIFGAN()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_LDDPPFIFGAN_OFFSET))(this);
		}

		::System::Boolean AOKAAJHMMJM(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::MoleMole::Battle::Entity*& GPBLCMONBOI, ::UnityEngine::Vector3& FOGIFFAGMGH)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_AOKAAJHMMJM_OFFSET))(this, OMPHGGCEIBD, HODAIDNDKHD, NGODDCIOJDP, LIBPKNHDIGP, GPBLCMONBOI, FOGIFFAGMGH);
		}

		::System::Boolean APEBGBNLBIJ(::UnityEngine::Vector3& FOGIFFAGMGH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONABILITYTARGET_APEBGBNLBIJ_OFFSET))(this, FOGIFFAGMGH);
		}
	};
}
