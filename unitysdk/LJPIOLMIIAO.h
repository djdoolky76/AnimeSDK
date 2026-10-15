#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LJPIOLMIIAO;

#define LJPIOLMIIAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D107710)
#define LJPIOLMIIAO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1075D0)

	class LJPIOLMIIAO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BMODPDGHLFP; // 0x10
		::System::UInt32 FPNIMOHANFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPIOLMIIAO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LJPIOLMIIAO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LJPIOLMIIAO*))((::PBYTE)hIl2Cpp + LJPIOLMIIAO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
