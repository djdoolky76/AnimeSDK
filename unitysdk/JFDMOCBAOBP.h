#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IGroup; }

#define JFDMOCBAOBP_CTOR_OFFSET UNITYSDK_OFFSET(0x16646EA0)
#define JFDMOCBAOBP_EAAECDLGOPH_OFFSET UNITYSDK_OFFSET(0x166476F0)
#define JFDMOCBAOBP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166474C0)
#define JFDMOCBAOBP_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x16647080)
#define JFDMOCBAOBP_PGEGBHDKPCJ_OFFSET UNITYSDK_OFFSET(0x166470D0)
#define JFDMOCBAOBP_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16647360)

inline static constexpr unsigned int JFDMOCBAOBP_TypeDefinitionIndex = 77160;

	class JFDMOCBAOBP : public ::System::Object
	{
	public:
		::Entitas::IGroup* MCIKCILKNON; // 0x10
		::Entitas::IGroup* LKCDPPOENAH; // 0x18
		::EFODGECFLLC* EEFMDEHLLFI; // 0x20
		::Entitas::ICollector* MFFBACCILJA; // 0x28
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + JFDMOCBAOBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDMOCBAOBP_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDMOCBAOBP_TEARDOWN_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDMOCBAOBP_INITIALIZE_OFFSET))(this);
		}

		::System::Void PGEGBHDKPCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDMOCBAOBP_PGEGBHDKPCJ_OFFSET))(this);
		}

		::System::Void EAAECDLGOPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDMOCBAOBP_EAAECDLGOPH_OFFSET))(this);
		}

	};
