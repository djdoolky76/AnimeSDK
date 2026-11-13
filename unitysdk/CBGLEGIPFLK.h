#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CBGLEGIPFLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD9140)
#define CBGLEGIPFLK_ODBILIAKBFD_OFFSET UNITYSDK_OFFSET(0x1CAD8F20)

inline static constexpr unsigned int CBGLEGIPFLK_TypeDefinitionIndex = 36100;

	class CBGLEGIPFLK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGLEGIPFLK_CTOR_OFFSET))(this);
		}

		static ::System::Int32 ODBILIAKBFD(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CBGLEGIPFLK_ODBILIAKBFD_OFFSET))(a1, a2);
		}

	};
