#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class NGOFNNDDEBO;
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class WeakReference_1; }

#define GLCCLFPBBML_ACADPFOLLIC_FEFCLBKLKMF_OFFSET UNITYSDK_OFFSET(0x10FE80D0)
#define GLCCLFPBBML_ACADPFOLLIC_GIAIPJHNKBM_OFFSET UNITYSDK_OFFSET(0x10FE8380)
#define GLCCLFPBBML_ACADPFOLLIC_MAFOBHHHKHK_OFFSET UNITYSDK_OFFSET(0x10FE8230)
#define GLCCLFPBBML_ACADPFOLLIC_MMAFLMFINOB_OFFSET UNITYSDK_OFFSET(0x10FE7FD0)
#define GLCCLFPBBML_ACADPFOLLIC__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE7FC0)

inline static constexpr unsigned int GLCCLFPBBML_ACADPFOLLIC_TypeDefinitionIndex = 72300;

class GLCCLFPBBML_ACADPFOLLIC : public ::System::Object
{
public:
	::System::WeakReference_1<::NGOFNNDDEBO*>* AGPOMOLFJDA; // 0x10
	::System::Func_1<::System::Boolean>* KAKAEMACNPB; // 0x18
	::NGOFNNDDEBO* NIIGBNGCOII; // 0x20
	::System::Func_1<::System::Boolean>* KANJODNFFOI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_ACADPFOLLIC__CTOR_OFFSET))(this);
	}

	::System::Boolean MMAFLMFINOB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_ACADPFOLLIC_MMAFLMFINOB_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask FEFCLBKLKMF(::System::Threading::CancellationToken PIIPCLCCOIG)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + GLCCLFPBBML_ACADPFOLLIC_FEFCLBKLKMF_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void MAFOBHHHKHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_ACADPFOLLIC_MAFOBHHHKHK_OFFSET))(this);
	}

	::System::Boolean GIAIPJHNKBM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_ACADPFOLLIC_GIAIPJHNKBM_OFFSET))(this);
	}
};
