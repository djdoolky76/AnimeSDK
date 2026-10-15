#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKPDKBNFDGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9D180)

inline static constexpr unsigned int GKPDKBNFDGM_TypeDefinitionIndex = 61932;

	class GKPDKBNFDGM : public ::System::Object
	{
	public:
		::System::Double DFKFJKOGBFD; // 0x10
		::System::UInt32 PMFHMFACOFI; // 0x18
		::System::UInt32 ELLIHHPDHOK; // 0x1C
		::System::Double BPPPFEAMOCB; // 0x20
		::System::UInt32 FGINNIKBCIA; // 0x28
		::System::UInt32 BGMAEJOFOMF; // 0x2C
		::System::Double EFCGLEICPFO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPDKBNFDGM_CTOR_OFFSET))(this);
		}

	};
