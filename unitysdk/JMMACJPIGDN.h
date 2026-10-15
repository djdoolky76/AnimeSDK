#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JMMACJPIGDN;

#define JMMACJPIGDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D04B5E0)
#define JMMACJPIGDN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D04B4F0)

	class JMMACJPIGDN : public ::System::Object
	{
	public:
		::System::UInt32 GACEMBBAGMP; // 0x10
		::System::UInt32 LLDCHLHNADA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMACJPIGDN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JMMACJPIGDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JMMACJPIGDN*))((::PBYTE)hIl2Cpp + JMMACJPIGDN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
