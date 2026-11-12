#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCNCJLPFPBE;

#define CCNCJLPFPBE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA5E130)
#define CCNCJLPFPBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5E180)
#define CCNCJLPFPBE_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1DA5E0C0)

inline static constexpr unsigned int CCNCJLPFPBE_TypeDefinitionIndex = 43005;

	class CCNCJLPFPBE : public ::System::Object
	{
	public:
		::System::Boolean JECALMAPHOI; // 0x10
		::System::Boolean KKKIONIDKFA; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 LCHMGOKEHBA; // 0x14
		::System::Int32 IIACAMLDMFF; // 0x18
		::System::Single ECNOGDLLGGL; // 0x1C
		::System::Single GAFLJIDILOD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNCJLPFPBE_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::CCNCJLPFPBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCNCJLPFPBE*))((::PBYTE)hIl2Cpp + CCNCJLPFPBE_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNCJLPFPBE_CLEAR_OFFSET))(this);
		}

	};
