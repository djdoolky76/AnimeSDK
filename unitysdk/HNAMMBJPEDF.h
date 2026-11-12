#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HNAMMBJPEDF;

#define HNAMMBJPEDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AB320)
#define HNAMMBJPEDF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E0AB200)

inline static constexpr unsigned int HNAMMBJPEDF_TypeDefinitionIndex = 11870;

	class HNAMMBJPEDF : public ::System::Object
	{
	public:
		::System::Single KCDMPPMHGHD; // 0x10
		::System::UInt32 BOJGKMOFMCJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAMMBJPEDF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HNAMMBJPEDF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNAMMBJPEDF*))((::PBYTE)hIl2Cpp + HNAMMBJPEDF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
