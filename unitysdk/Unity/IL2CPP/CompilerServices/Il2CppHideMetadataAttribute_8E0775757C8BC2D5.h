#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/Unity/IL2CPP/CompilerServices/Il2CppHideMetadataTypes_27FD924FB9315EB5.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPHIDEMETADATAATTRIBUTE_8E0775757C8BC2D5_GET_TYPES_OFFSET UNITYSDK_OFFSET(0x20068380)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPHIDEMETADATAATTRIBUTE_8E0775757C8BC2D5__CTOR_OFFSET UNITYSDK_OFFSET(0x20068390)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppHideMetadataAttribute_8E0775757C8BC2D5_TypeDefinitionIndex = 6976;

	class Il2CppHideMetadataAttribute_8E0775757C8BC2D5 : public ::System::Attribute
	{
	public:
		::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes_27FD924FB9315EB5 _Types_k__BackingField; // 0x10

		::System::Void _ctor(::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes_27FD924FB9315EB5 types)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes_27FD924FB9315EB5))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPHIDEMETADATAATTRIBUTE_8E0775757C8BC2D5__CTOR_OFFSET))(this, types);
		}

		::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes_27FD924FB9315EB5 get_Types()
		{
			return ((::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes_27FD924FB9315EB5(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPHIDEMETADATAATTRIBUTE_8E0775757C8BC2D5_GET_TYPES_OFFSET))(this);
		}
	};
}
