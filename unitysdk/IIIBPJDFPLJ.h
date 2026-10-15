#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCEIJBFAOAI;
class IIIBPJDFPLJ;
namespace R3 { class Observable; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define IIIBPJDFPLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1643D4B0)
#define IIIBPJDFPLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1643D560)
#define IIIBPJDFPLJ_DNEBMKJAMCH_OFFSET UNITYSDK_OFFSET(0x1643D240)
#define IIIBPJDFPLJ_GET_NEEDWAITFORCRAFTTARGET_OFFSET UNITYSDK_OFFSET(0x1643D310)
#define IIIBPJDFPLJ_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0x1643D320)
#define IIIBPJDFPLJ_LIHALEDBELL_OFFSET UNITYSDK_OFFSET(0x1643D2D0)

inline static constexpr unsigned int IIIBPJDFPLJ_TypeDefinitionIndex = 79578;

	class IIIBPJDFPLJ : public ::System::Object
	{
	public:
		::R3::ReadOnlyReactiveProperty_1<::System::Int32>* BHANCGNPOAG; // 0x10
		::CCEIJBFAOAI* JOKBAPFCJFM; // 0x18
		::System::Boolean _NeedWaitForCraftTarget_k__BackingField; // 0x20
		::System::Void _ctor(::CCEIJBFAOAI* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCEIJBFAOAI*, ::System::Boolean))((::PBYTE)hIl2Cpp + IIIBPJDFPLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 DNEBMKJAMCH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIBPJDFPLJ_DNEBMKJAMCH_OFFSET))(this);
		}

		::R3::Observable* LIHALEDBELL()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIBPJDFPLJ_LIHALEDBELL_OFFSET))(this);
		}

		::System::Boolean get_NeedWaitForCraftTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIBPJDFPLJ_GET_NEEDWAITFORCRAFTTARGET_OFFSET))(this);
		}

		static ::IIIBPJDFPLJ* LHLALAKKKKJ(::CCEIJBFAOAI* a1, ::System::Boolean a2)
		{
			return ((::IIIBPJDFPLJ*(*)(::CCEIJBFAOAI*, ::System::Boolean))((::PBYTE)hIl2Cpp + IIIBPJDFPLJ_LHLALAKKKKJ_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIBPJDFPLJ_DISPOSE_OFFSET))(this);
		}

	};
