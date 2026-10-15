#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOHBPAKJGCK;

#define BOHBPAKJGCK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC18FD80)
#define BOHBPAKJGCK_CTOR_OFFSET UNITYSDK_OFFSET(0xC18FE30)

inline static constexpr unsigned int BOHBPAKJGCK_TypeDefinitionIndex = 79401;

	class BOHBPAKJGCK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* JJJNPLOLJGE; // 0x10
		::System::Int32 NJGKCPOOHDM; // 0x18
		::System::Boolean DHHGLHOOCMA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHBPAKJGCK_CTOR_OFFSET))(this);
		}

		static ::BOHBPAKJGCK* BPLPBPMEODA(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::BOHBPAKJGCK*(*)(::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BOHBPAKJGCK_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

	};
