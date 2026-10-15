#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECHHEONGDJB;
class FCOEMCEDLNL;

#define ECHHEONGDJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3C920)
#define ECHHEONGDJB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD3C7E0)

inline static constexpr unsigned int ECHHEONGDJB_TypeDefinitionIndex = 14517;

	class ECHHEONGDJB : public ::System::Object
	{
	public:
		::System::UInt32 DKAKLLHMALL; // 0x10
		::System::UInt32 OCILDGBLFPK; // 0x14
		::System::UInt32 CMJDKIJKFJP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHHEONGDJB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ECHHEONGDJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECHHEONGDJB*))((::PBYTE)hIl2Cpp + ECHHEONGDJB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
