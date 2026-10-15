#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDNNILEFPHG.h"
class NDNNILEFPHG;

#define DGKPMGKKCJM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9FA7A0)
#define DGKPMGKKCJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FA920)
#define DGKPMGKKCJM_KJAKNLOMIOJ_OFFSET UNITYSDK_OFFSET(0x1C9FA8D0)
#define DGKPMGKKCJM_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1C9FA810)

inline static constexpr unsigned int DGKPMGKKCJM_TypeDefinitionIndex = 43316;

	class DGKPMGKKCJM : public ::NDNNILEFPHG
	{
	public:
		::System::Single AINDPONHEEC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKPMGKKCJM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKPMGKKCJM_CLEAR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::NDNNILEFPHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + DGKPMGKKCJM_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::NDNNILEFPHG* KJAKNLOMIOJ()
		{
			return ((::NDNNILEFPHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKPMGKKCJM_KJAKNLOMIOJ_OFFSET))(this);
		}

	};
