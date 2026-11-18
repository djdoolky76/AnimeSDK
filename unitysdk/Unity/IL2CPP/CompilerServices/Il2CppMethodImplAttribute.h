#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/Unity/IL2CPP/CompilerServices/Il2CppMethodImplOptions_F38A411D18C57832.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPMETHODIMPLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x20068500)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppMethodImplAttribute_TypeDefinitionIndex = 6964;

	class Il2CppMethodImplAttribute : public ::System::Attribute
	{
	public:
		::Unity::IL2CPP::CompilerServices::Il2CppMethodImplOptions_F38A411D18C57832 Options; // 0x10

		::System::Void _ctor(::Unity::IL2CPP::CompilerServices::Il2CppMethodImplOptions_F38A411D18C57832 options)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Il2CppMethodImplOptions_F38A411D18C57832))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPMETHODIMPLATTRIBUTE__CTOR_OFFSET))(this, options);
		}
	};
}
