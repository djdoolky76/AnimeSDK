#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
class JMKIACAJDLL;
namespace System { class Action; }

#define JMKIACAJDLL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB269BB0)
#define JMKIACAJDLL_CLEAR_OFFSET UNITYSDK_OFFSET(0xB269F20)
#define JMKIACAJDLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB26A060)
#define JMKIACAJDLL_EPLFDKPOIOC_OFFSET UNITYSDK_OFFSET(0xB269FB0)
#define JMKIACAJDLL_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB269C30)
#define JMKIACAJDLL_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xB269DD0)

inline static constexpr unsigned int JMKIACAJDLL_TypeDefinitionIndex = 71113;

	class JMKIACAJDLL : public ::System::Object
	{
	public:
		::System::Action* BEKGCBCIODA; // 0x10
		::IFEABBJBIGK* CJNMHGAHGGH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIACAJDLL_CTOR_OFFSET))(this);
		}

		static ::JMKIACAJDLL* BPLPBPMEODA(::IFEABBJBIGK* a1)
		{
			return ((::JMKIACAJDLL*(*)(::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + JMKIACAJDLL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HKKFFCBJOKM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JMKIACAJDLL_HKKFFCBJOKM_OFFSET))(this, a1);
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
