#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIILHCFHPC_CIEELAHFKGM_OFFSET UNITYSDK_OFFSET(0x16E87920)
#define IFIILHCFHPC_CMMPEBJNGOO_OFFSET UNITYSDK_OFFSET(0x16E87810)
#define IFIILHCFHPC_CTOR_OFFSET UNITYSDK_OFFSET(0x16E87690)
#define IFIILHCFHPC_GET_OBJECTID_OFFSET UNITYSDK_OFFSET(0x16E87880)
#define IFIILHCFHPC_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x16E87980)
#define IFIILHCFHPC_NGHPPMKHNFM_OFFSET UNITYSDK_OFFSET(0x16E878E0)
#define IFIILHCFHPC_NIJMCBCKIPO_OFFSET UNITYSDK_OFFSET(0x16E87890)
#define IFIILHCFHPC_OLCEPHJOGHE_OFFSET UNITYSDK_OFFSET(0x16E87AA0)
#define IFIILHCFHPC_PKGCCAPDFBL_OFFSET UNITYSDK_OFFSET(0x16E877B0)
#define IFIILHCFHPC_SET_OBJECTID_OFFSET UNITYSDK_OFFSET(0x16E87870)

inline static constexpr unsigned int IFIILHCFHPC_TypeDefinitionIndex = 68671;

	class IFIILHCFHPC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CDLOJLOPKMB; // 0x10
		::System::UInt32 _ObjectID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFIILHCFHPC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean PKGCCAPDFBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIILHCFHPC_PKGCCAPDFBL_OFFSET))(this);
		}

		::System::Boolean CMMPEBJNGOO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFIILHCFHPC_CMMPEBJNGOO_OFFSET))(this, a1);
		}

		::System::Void set_ObjectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFIILHCFHPC_SET_OBJECTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ObjectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIILHCFHPC_GET_OBJECTID_OFFSET))(this);
		}

		::System::Int32 NIJMCBCKIPO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIILHCFHPC_NIJMCBCKIPO_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* NGHPPMKHNFM()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIILHCFHPC_NGHPPMKHNFM_OFFSET))(this);
		}

		::System::Boolean CIEELAHFKGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIILHCFHPC_CIEELAHFKGM_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIILHCFHPC_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Boolean OLCEPHJOGHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIILHCFHPC_OLCEPHJOGHE_OFFSET))(this);
		}

	};
