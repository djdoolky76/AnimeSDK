#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DLKMIHDPILO_DNGLJNNLHEN_CTOR_OFFSET UNITYSDK_OFFSET(0x18671F70)

inline static constexpr unsigned int DLKMIHDPILO_DNGLJNNLHEN_TypeDefinitionIndex = 79140;

	class DLKMIHDPILO_DNGLJNNLHEN : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NCLKEBCHNOG; // 0x10
		::System::Single NCNAFNBIDDN; // 0x1C
		::System::Single MBNFGCOOHFL; // 0x20
		::UnityEngine::Vector3 PECGKNAAKOO; // 0x24
		::System::Single EIBGEGPABFK; // 0x30
		::System::Boolean OEKKHDBJHCO; // 0x34
		::System::Boolean PBNDGOMHJNF; // 0x35
		::System::Boolean ANKPBOODLJH; // 0x36
		::System::Byte _padding0[0x1];
		::System::Single KEDGMGECAFD; // 0x38
		::System::Int32 EJDIFBNIDHO; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKMIHDPILO_DNGLJNNLHEN_CTOR_OFFSET))(this);
		}

	};
