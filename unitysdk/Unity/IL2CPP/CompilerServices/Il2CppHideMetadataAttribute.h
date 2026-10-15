#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/Unity/IL2CPP/CompilerServices/Il2CppHideMetadataTypes.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPHIDEMETADATAATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3CC230)

namespace Unity::IL2CPP::CompilerServices
{
	class Il2CppHideMetadataAttribute : public ::System::Attribute
	{
	public:
		::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes _Types_k__BackingField; // 0x10
		::System::Void _ctor(::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPHIDEMETADATAATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
