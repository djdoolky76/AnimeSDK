#pragma once
#include "unitysdk/unitysdk.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPEKFFBJIMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16B353D0)
#define EPEKFFBJIMJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16B35620)
#define EPEKFFBJIMJ_FILTER_OFFSET UNITYSDK_OFFSET(0x16B35570)
#define EPEKFFBJIMJ_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x16B35450)

inline static constexpr unsigned int EPEKFFBJIMJ_TypeDefinitionIndex = 79984;

	class EPEKFFBJIMJ
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HGCNLFIMDKL; // 0x28
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x30
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + EPEKFFBJIMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + EPEKFFBJIMJ_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + EPEKFFBJIMJ_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + EPEKFFBJIMJ_EXECUTE_OFFSET))(this, a1);
		}

	};
