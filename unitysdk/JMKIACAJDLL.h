#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
class JMKIACAJDLL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define JMKIACAJDLL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB2637A0)
#define JMKIACAJDLL_CLEAR_OFFSET UNITYSDK_OFFSET(0xB263B10)
#define JMKIACAJDLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB263C50)
#define JMKIACAJDLL_EPLFDKPOIOC_OFFSET UNITYSDK_OFFSET(0xB263BA0)
#define JMKIACAJDLL_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB263820)
#define JMKIACAJDLL_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xB2639C0)

inline static constexpr unsigned int JMKIACAJDLL_TypeDefinitionIndex = 71113;

	class JMKIACAJDLL : public ::System::Object
	{
	public:
		::IFEABBJBIGK* CJNMHGAHGGH; // 0x10
		::System::Action_1<::System::Boolean>* BEKGCBCIODA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIACAJDLL_CTOR_OFFSET))(this);
		}

		static ::JMKIACAJDLL* BPLPBPMEODA(::IFEABBJBIGK* a1)
		{
			return ((::JMKIACAJDLL*(*)(::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + JMKIACAJDLL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HKKFFCBJOKM(::System::Action_2<::IFEABBJBIGK*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::IFEABBJBIGK*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + JMKIACAJDLL_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIACAJDLL_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIACAJDLL_CLEAR_OFFSET))(this);
		}

		::System::Void EPLFDKPOIOC(::IFEABBJBIGK* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*, ::System::Boolean))((::PBYTE)hIl2Cpp + JMKIACAJDLL_EPLFDKPOIOC_OFFSET))(this, a1, a2);
		}

	};
