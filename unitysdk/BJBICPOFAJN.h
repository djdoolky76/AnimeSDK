#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class EADLNAAMFFE;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }

#define BJBICPOFAJN_BONCACIMGAP_OFFSET UNITYSDK_OFFSET(0x115082D0)
#define BJBICPOFAJN_CLHLBOPBDBJ_OFFSET UNITYSDK_OFFSET(0x115083A0)
#define BJBICPOFAJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11507E00)
#define BJBICPOFAJN_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x115083E0)
#define BJBICPOFAJN_FMNNNCNNPJH_OFFSET UNITYSDK_OFFSET(0x11507FF0)
#define BJBICPOFAJN_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x11508090)
#define BJBICPOFAJN_ODGECHBNLDB_OFFSET UNITYSDK_OFFSET(0x11508230)
#define BJBICPOFAJN_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x11507E60)
#define BJBICPOFAJN__CTOR_OFFSET UNITYSDK_OFFSET(0x11507D80)

inline static constexpr unsigned int BJBICPOFAJN_TypeDefinitionIndex = 68922;

class BJBICPOFAJN : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* PBHENCFCBPD; // 0x10
	::System::Action* KAHEKAGHBMO; // 0x18
	::System::Action_1<::System::Exception*>* HKPIJHPONCG; // 0x20
	::System::Boolean MCEEIIJADNI; // 0x28

	::System::Void _ctor(::System::Action* BNGMEPEJJHE, ::System::Action_1<::System::Exception*>* OLBAKFLBNIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + BJBICPOFAJN__CTOR_OFFSET))(this, BNGMEPEJJHE, OLBAKFLBNIG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBICPOFAJN_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid FMNNNCNNPJH(::EADLNAAMFFE* BDAJIGIOAMM, ::System::Threading::CancellationTokenSource* MJKDCNCONFK, ::System::Threading::CancellationToken CBJFKEAGLGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::EADLNAAMFFE*, ::System::Threading::CancellationTokenSource*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BJBICPOFAJN_FMNNNCNNPJH_OFFSET))(this, BDAJIGIOAMM, MJKDCNCONFK, CBJFKEAGLGD);
	}

	::System::Void LCJEELHBNHG(::EADLNAAMFFE* BDAJIGIOAMM)
	{
		return ((::System::Void(*)(::PVOID, ::EADLNAAMFFE*))((::PBYTE)hIl2Cpp + BJBICPOFAJN_LCJEELHBNHG_OFFSET))(this, BDAJIGIOAMM);
	}

	::System::Void ODGECHBNLDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBICPOFAJN_ODGECHBNLDB_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBICPOFAJN_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void BONCACIMGAP(::System::Exception* BENPBLMOAKD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + BJBICPOFAJN_BONCACIMGAP_OFFSET))(this, BENPBLMOAKD);
	}

	static ::System::Void CLHLBOPBDBJ(::System::Exception* BENPBLMOAKD)
	{
		return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + BJBICPOFAJN_CLHLBOPBDBJ_OFFSET))(BENPBLMOAKD);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBICPOFAJN_DOCGMAIMGNJ_OFFSET))(this);
	}
};
