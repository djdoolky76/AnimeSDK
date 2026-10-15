#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LPOIOOPEGHD;

#define LPOIOOPEGHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D12CBB0)
#define LPOIOOPEGHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D12CA70)

	class LPOIOOPEGHD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HECJCAMDGNO; // 0x10
		::System::UInt32 GMLOGNJAIGI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOIOOPEGHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LPOIOOPEGHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LPOIOOPEGHD*))((::PBYTE)hIl2Cpp + LPOIOOPEGHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
