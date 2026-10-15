#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define JFDMOCBAOBP_CTOR_OFFSET UNITYSDK_OFFSET(0x16633120)
#define JFDMOCBAOBP_EAAECDLGOPH_OFFSET UNITYSDK_OFFSET(0x16633970)
#define JFDMOCBAOBP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16633740)
#define JFDMOCBAOBP_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x16633300)
#define JFDMOCBAOBP_PGEGBHDKPCJ_OFFSET UNITYSDK_OFFSET(0x16633350)
#define JFDMOCBAOBP_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x166335E0)

inline static constexpr unsigned int JFDMOCBAOBP_TypeDefinitionIndex = 77159;

	class JFDMOCBAOBP : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* LKCDPPOENAH; // 0x18
		::EFODGECFLLC* EEFMDEHLLFI; // 0x20
		::Entitas::ICollector_1<::HIOEAKHGILF*>* MFFBACCILJA; // 0x28
		::Entitas::IGroup_1<::HIOEAKHGILF*>* MCIKCILKNON; // 0x30
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
