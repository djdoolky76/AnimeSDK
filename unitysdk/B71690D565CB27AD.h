#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define B71690D565CB27AD__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B71690D565CB27AD_TypeDefinitionIndex = 358;

class B71690D565CB27AD : public ::E379DE61A548837D
{
public:
	::System::Boolean EA6D4AB38EDF5E67; // 0x38
	::System::Boolean F917531DD63B03B9; // 0x39
	::System::Boolean A020A8DE2F96CAEA; // 0x3A
	::System::Boolean F039946CA6CDB9E9; // 0x3B
	::System::Boolean EC192DA7612B316D; // 0x3C
	::System::Boolean FE526C63A25C9782; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B71690D565CB27AD__CTOR_OFFSET))(this);
	}
};
