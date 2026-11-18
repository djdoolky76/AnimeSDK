#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XftWeapon { class XWeaponTrail; }

#define XFTWEAPON_XWEAPONTRAILJOBMGR_ADDCOM_OFFSET UNITYSDK_OFFSET(0x1EC7F0D0)
#define XFTWEAPON_XWEAPONTRAILJOBMGR_GETINNERLOOPBATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1EC82210)
#define XFTWEAPON_XWEAPONTRAILJOBMGR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1EC7EFE0)
#define XFTWEAPON_XWEAPONTRAILJOBMGR_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC82250)
#define XFTWEAPON_XWEAPONTRAILJOBMGR_REMOVECOM_OFFSET UNITYSDK_OFFSET(0x1EC7F220)
#define XFTWEAPON_XWEAPONTRAILJOBMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC82190)

namespace XftWeapon
{
	inline static constexpr unsigned int XWeaponTrailJobMgr_TypeDefinitionIndex = 37977;

	class XWeaponTrailJobMgr : public ::System::Object
	{
	public:
		static ::XftWeapon::XWeaponTrailJobMgr** StaticGet_m_pInstance()
		{
			return (::XftWeapon::XWeaponTrailJobMgr**)Il2CppClass::FromTypeDefinitionIndex(XWeaponTrailJobMgr_TypeDefinitionIndex)->GetStaticField(0x2DB60);
		}
		::System::Collections::Generic::List_1<::XftWeapon::XWeaponTrail*>* m_arrComs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAILJOBMGR__CTOR_OFFSET))(this);
		}

		static ::XftWeapon::XWeaponTrailJobMgr* get_Instance()
		{
			return ((::XftWeapon::XWeaponTrailJobMgr*(*)())((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAILJOBMGR_GET_INSTANCE_OFFSET))();
		}

		::System::Void AddCom(::XftWeapon::XWeaponTrail* com)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail*))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAILJOBMGR_ADDCOM_OFFSET))(this, com);
		}

		::System::Void RemoveCom(::XftWeapon::XWeaponTrail* com)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail*))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAILJOBMGR_REMOVECOM_OFFSET))(this, com);
		}

		::System::Int32 GetInnerLoopBatchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAILJOBMGR_GETINNERLOOPBATCHCOUNT_OFFSET))(this);
		}

		::System::Void PostSimulationUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XFTWEAPON_XWEAPONTRAILJOBMGR_POSTSIMULATIONUPDATE_OFFSET))(this, dt);
		}
	};
}
