#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEGPIEIPNEL;
class FCOEMCEDLNL;
class LBGEDAJEBCC;

#define LBGEDAJEBCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D6180)
#define LBGEDAJEBCC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0D6030)

inline static constexpr unsigned int LBGEDAJEBCC_TypeDefinitionIndex = 13668;

	class LBGEDAJEBCC : public ::System::Object
	{
	public:
		::Il2CppArray<::AEGPIEIPNEL*>* MGNHKOHFLPO; // 0x10
		::System::UInt32 PNPJBPCMINL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGEDAJEBCC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LBGEDAJEBCC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LBGEDAJEBCC*))((::PBYTE)hIl2Cpp + LBGEDAJEBCC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
