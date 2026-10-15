#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBDMAALKMGN;
class FCOEMCEDLNL;

#define EBDMAALKMGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5F2C0)
#define EBDMAALKMGN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD5F1A0)

inline static constexpr unsigned int EBDMAALKMGN_TypeDefinitionIndex = 12263;

	class EBDMAALKMGN : public ::System::Object
	{
	public:
		::System::UInt32 OPJDGJNAKFF; // 0x10
		::System::UInt32 ACCJKGEKHKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDMAALKMGN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EBDMAALKMGN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EBDMAALKMGN*))((::PBYTE)hIl2Cpp + EBDMAALKMGN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
