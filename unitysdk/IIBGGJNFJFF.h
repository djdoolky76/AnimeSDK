#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJCPGIHOMCN;
class MEDFLBNBFGD;
class OBJANKHLNGO;

#define IIBGGJNFJFF_CTOR_OFFSET UNITYSDK_OFFSET(0x193C87B0)
#define IIBGGJNFJFF_PIOBKHJFFFK_OFFSET UNITYSDK_OFFSET(0x193C8920)
#define IIBGGJNFJFF_START_OFFSET UNITYSDK_OFFSET(0x193C8830)
#define IIBGGJNFJFF_STOP_OFFSET UNITYSDK_OFFSET(0x193C88C0)

inline static constexpr unsigned int IIBGGJNFJFF_TypeDefinitionIndex = 83543;

	class IIBGGJNFJFF : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::FJCPGIHOMCN* LBNAGLIGKIO; // 0x18
		::System::Void _ctor(::FJCPGIHOMCN* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FJCPGIHOMCN*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + IIBGGJNFJFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBGGJNFJFF_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBGGJNFJFF_STOP_OFFSET))(this);
		}

		::System::Void PIOBKHJFFFK(::MEDFLBNBFGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEDFLBNBFGD*))((::PBYTE)hIl2Cpp + IIBGGJNFJFF_PIOBKHJFFFK_OFFSET))(this, a1);
		}

	};
