#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOEELFBJNBG;
class FCOEMCEDLNL;
class MPPNKLGIOMG;

#define MPPNKLGIOMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E5020)
#define MPPNKLGIOMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E4E90)

inline static constexpr unsigned int MPPNKLGIOMG_TypeDefinitionIndex = 13505;

	class MPPNKLGIOMG : public ::System::Object
	{
	public:
		::Il2CppArray<::EOEELFBJNBG*>* MGNHKOHFLPO; // 0x10
		::System::UInt32 PNPJBPCMINL; // 0x18
		::System::UInt32 PIKLFGGHKGD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPNKLGIOMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MPPNKLGIOMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPPNKLGIOMG*))((::PBYTE)hIl2Cpp + MPPNKLGIOMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
