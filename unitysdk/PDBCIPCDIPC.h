#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
class IOJNOCLDBAK;
class NKNEGBCMFBE;

#define PDBCIPCDIPC_CAGMLGHDBML_OFFSET UNITYSDK_OFFSET(0x1C977430)
#define PDBCIPCDIPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C977540)
#define PDBCIPCDIPC_FGJMGJDDLOK_OFFSET UNITYSDK_OFFSET(0x1C9773E0)
#define PDBCIPCDIPC_HOJKFGDICHF_OFFSET UNITYSDK_OFFSET(0x1C977310)
#define PDBCIPCDIPC_JFLHKNLGABH_OFFSET UNITYSDK_OFFSET(0x1C9771E0)
#define PDBCIPCDIPC_LIMIDKPKNGI_OFFSET UNITYSDK_OFFSET(0x1C977240)
#define PDBCIPCDIPC_NAFOMFHONAH_OFFSET UNITYSDK_OFFSET(0x1C977130)
#define PDBCIPCDIPC_PIHIMDLJMFD_OFFSET UNITYSDK_OFFSET(0x1C9774E0)

inline static constexpr unsigned int PDBCIPCDIPC_TypeDefinitionIndex = 42638;

	class PDBCIPCDIPC : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBCIPCDIPC_CTOR_OFFSET))(this);
		}

		::IOJNOCLDBAK* NAFOMFHONAH()
		{
			return ((::IOJNOCLDBAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBCIPCDIPC_NAFOMFHONAH_OFFSET))(this);
		}

		::System::Boolean JFLHKNLGABH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBCIPCDIPC_JFLHKNLGABH_OFFSET))(this);
		}

		::System::Void LIMIDKPKNGI(::NKNEGBCMFBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKNEGBCMFBE*))((::PBYTE)hIl2Cpp + PDBCIPCDIPC_LIMIDKPKNGI_OFFSET))(this, a1);
		}

		::System::Void HOJKFGDICHF(::NKNEGBCMFBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKNEGBCMFBE*))((::PBYTE)hIl2Cpp + PDBCIPCDIPC_HOJKFGDICHF_OFFSET))(this, a1);
		}

		::System::Void FGJMGJDDLOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBCIPCDIPC_FGJMGJDDLOK_OFFSET))(this);
		}

		::IOJNOCLDBAK* CAGMLGHDBML()
		{
			return ((::IOJNOCLDBAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBCIPCDIPC_CAGMLGHDBML_OFFSET))(this);
		}

		::System::Boolean PIHIMDLJMFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBCIPCDIPC_PIHIMDLJMFD_OFFSET))(this);
		}

	};
