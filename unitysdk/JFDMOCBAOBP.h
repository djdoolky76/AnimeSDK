#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define JFDMOCBAOBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB990430)
#define JFDMOCBAOBP_EAAECDLGOPH_OFFSET UNITYSDK_OFFSET(0xB990C80)
#define JFDMOCBAOBP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB990A50)
#define JFDMOCBAOBP_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xB990610)
#define JFDMOCBAOBP_PGEGBHDKPCJ_OFFSET UNITYSDK_OFFSET(0xB990660)
#define JFDMOCBAOBP_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB9908F0)

inline static constexpr unsigned int JFDMOCBAOBP_TypeDefinitionIndex = 79494;

	class JFDMOCBAOBP : public ::System::Object
	{
	public:
		::EFODGECFLLC* EEFMDEHLLFI; // 0x10
		::Entitas::ICollector_1<::HIOEAKHGILF*>* MFFBACCILJA; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::Entitas::IGroup_1<::HIOEAKHGILF*>* MCIKCILKNON; // 0x28
		::Entitas::IGroup_1<::HIOEAKHGILF*>* LKCDPPOENAH; // 0x30
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
