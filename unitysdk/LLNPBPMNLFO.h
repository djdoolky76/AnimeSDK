#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
class EDNECKFHLEM;
class OEIKFPLBOMH;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class TabView; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define LLNPBPMNLFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB76E040)
#define LLNPBPMNLFO_DISPOSECORE_OFFSET UNITYSDK_OFFSET(0xB76E7B0)
#define LLNPBPMNLFO_KAKAALFLCPB_OFFSET UNITYSDK_OFFSET(0xB76E0D0)
#define LLNPBPMNLFO_LFABLLBFOCH_OFFSET UNITYSDK_OFFSET(0xB76E600)
#define LLNPBPMNLFO_ONCOMPLETEDCORE_OFFSET UNITYSDK_OFFSET(0xB76E5B0)
#define LLNPBPMNLFO_ONERRORRESUMECORE_OFFSET UNITYSDK_OFFSET(0xB76E3E0)
#define LLNPBPMNLFO_ONNEXTCORE_OFFSET UNITYSDK_OFFSET(0xB76E1A0)

inline static constexpr unsigned int LLNPBPMNLFO_TypeDefinitionIndex = 49815;

	class LLNPBPMNLFO
	{
	public:
		::R3::ReactiveProperty_1<::System::Int32>* AGFAPPGGKMA; // 0x20
		::RPG::Client::TabView* PEOHNLJEFLJ; // 0x28
		::System::Action_2<::EDNECKFHLEM*, ::EDNECKFHLEM*>* CDLBHDFLHJA; // 0x30
		::OEIKFPLBOMH* JKCNFDEAMDJ; // 0x38
		::System::Boolean JGBDJCKDILB; // 0x40
		::System::Boolean NIPEOCFHONM; // 0x41
		::System::Void _ctor(::RPG::Client::TabView* a1, ::R3::ReactiveProperty_1<::System::Int32>* a2, ::OEIKFPLBOMH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*, ::R3::ReactiveProperty_1<::System::Int32>*, ::OEIKFPLBOMH*))((::PBYTE)hIl2Cpp + LLNPBPMNLFO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KAKAALFLCPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNPBPMNLFO_KAKAALFLCPB_OFFSET))(this);
		}

		::System::Void OnNextCore(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLNPBPMNLFO_ONNEXTCORE_OFFSET))(this, a1);
		}

		::System::Void OnErrorResumeCore(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + LLNPBPMNLFO_ONERRORRESUMECORE_OFFSET))(this, a1);
		}

		::System::Void OnCompletedCore(::R3::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::Result))((::PBYTE)hIl2Cpp + LLNPBPMNLFO_ONCOMPLETEDCORE_OFFSET))(this, a1);
		}

		::System::Void LFABLLBFOCH(::EDNECKFHLEM* a1, ::EDNECKFHLEM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + LLNPBPMNLFO_LFABLLBFOCH_OFFSET))(this, a1, a2);
		}

		::System::Void DisposeCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNPBPMNLFO_DISPOSECORE_OFFSET))(this);
		}

	};
