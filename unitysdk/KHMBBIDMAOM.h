#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FHKDJADCDBL;
class KHMBBIDMAOM;

#define KHMBBIDMAOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D094F70)
#define KHMBBIDMAOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D094E50)

	class KHMBBIDMAOM : public ::System::Object
	{
	public:
		::Il2CppArray<::FHKDJADCDBL*>* MGNHKOHFLPO; // 0x10
		::System::UInt32 OEJJLDOAICN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMBBIDMAOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KHMBBIDMAOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHMBBIDMAOM*))((::PBYTE)hIl2Cpp + KHMBBIDMAOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
