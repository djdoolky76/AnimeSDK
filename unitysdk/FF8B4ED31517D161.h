#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFC1DD2E8F3C45AF.h"

namespace System { class String; }

#define FF8B4ED31517D161_A379D575D81B1D38_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define FF8B4ED31517D161_B611EC202E21C6D7_OFFSET UNITYSDK_OFFSET(0x26EAEB0)
#define FF8B4ED31517D161_B8F377D886057BE2_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FF8B4ED31517D161_E66EDAFA491DD256_OFFSET UNITYSDK_OFFSET(0x26EAE40)
#define FF8B4ED31517D161__CTOR_OFFSET UNITYSDK_OFFSET(0x26EAF20)

inline static constexpr unsigned int FF8B4ED31517D161_TypeDefinitionIndex = 2656;

class FF8B4ED31517D161 : public ::AFC1DD2E8F3C45AF
{
public:
	::System::String* FAC7AC8DD97853C7; // 0x10
	::System::String* FC04FD3B1E71093F; // 0x18

	::System::Void B611EC202E21C6D7(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FF8B4ED31517D161_B611EC202E21C6D7_OFFSET))(this, EFF983A80A48BB2A);
	}

	::System::Void E66EDAFA491DD256(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FF8B4ED31517D161_E66EDAFA491DD256_OFFSET))(this, EFF983A80A48BB2A);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF8B4ED31517D161__CTOR_OFFSET))(this);
	}

	::System::String* B8F377D886057BE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FF8B4ED31517D161_B8F377D886057BE2_OFFSET))(this);
	}

	::System::String* A379D575D81B1D38()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FF8B4ED31517D161_A379D575D81B1D38_OFFSET))(this);
	}
};
