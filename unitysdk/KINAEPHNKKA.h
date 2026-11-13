#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class PEMFMPIPNJN;

#define KINAEPHNKKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A30C300)
#define KINAEPHNKKA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A30C310)

inline static constexpr unsigned int KINAEPHNKKA_TypeDefinitionIndex = 43460;

	class KINAEPHNKKA : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::PEMFMPIPNJN* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::PEMFMPIPNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::PEMFMPIPNJN*))((::PBYTE)hIl2Cpp + KINAEPHNKKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINAEPHNKKA_EXECUTE_OFFSET))(this);
		}

	};
