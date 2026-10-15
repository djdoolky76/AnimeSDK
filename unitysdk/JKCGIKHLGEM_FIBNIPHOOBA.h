#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JKCGIKHLGEM_FIBNIPHOOBA_CTOR_OFFSET UNITYSDK_OFFSET(0xB20E930)
#define JKCGIKHLGEM_FIBNIPHOOBA_GETARRAY_OFFSET UNITYSDK_OFFSET(0xB20E940)
#define JKCGIKHLGEM_FIBNIPHOOBA_RETURNARRAY_OFFSET UNITYSDK_OFFSET(0xB20EA40)

inline static constexpr unsigned int JKCGIKHLGEM_FIBNIPHOOBA_TypeDefinitionIndex = 69398;

	class JKCGIKHLGEM_FIBNIPHOOBA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKCGIKHLGEM_FIBNIPHOOBA_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetArray(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKCGIKHLGEM_FIBNIPHOOBA_GETARRAY_OFFSET))(this, a1);
		}

		::System::Void ReturnArray(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JKCGIKHLGEM_FIBNIPHOOBA_RETURNARRAY_OFFSET))(this, a1);
		}

	};
