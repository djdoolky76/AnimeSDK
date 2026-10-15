#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;

#define NFDKIOPCJMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB75460)
#define NFDKIOPCJMO_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBB75470)

inline static constexpr unsigned int NFDKIOPCJMO_TypeDefinitionIndex = 75807;

	class NFDKIOPCJMO : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + NFDKIOPCJMO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDKIOPCJMO_EXECUTE_OFFSET))(this);
		}

	};
