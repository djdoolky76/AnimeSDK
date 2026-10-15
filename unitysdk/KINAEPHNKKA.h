#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class PEMFMPIPNJN;

#define KINAEPHNKKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C901230)
#define KINAEPHNKKA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C901240)

inline static constexpr unsigned int KINAEPHNKKA_TypeDefinitionIndex = 42485;

	class KINAEPHNKKA : public ::System::Object
	{
	public:
		::PEMFMPIPNJN* PDENFEFCAGN; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::PEMFMPIPNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::PEMFMPIPNJN*))((::PBYTE)hIl2Cpp + KINAEPHNKKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINAEPHNKKA_EXECUTE_OFFSET))(this);
		}

	};
