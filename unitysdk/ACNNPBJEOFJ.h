#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACNNPBJEOFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C581610)

inline static constexpr unsigned int ACNNPBJEOFJ_TypeDefinitionIndex = 37169;

	class ACNNPBJEOFJ : public ::System::Object
	{
	public:
		::System::Int32 ENBBGHEKIEE; // 0x10
		::System::UInt32 GHMHMKINNEJ; // 0x14
		::System::Int32 NCMMPGOLMDK; // 0x18
		::System::Int32 OFKGNDMDFNC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNNPBJEOFJ_CTOR_OFFSET))(this);
		}

	};
