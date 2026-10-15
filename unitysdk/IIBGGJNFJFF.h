#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJCPGIHOMCN;
class MEDFLBNBFGD;
class OBJANKHLNGO;

#define IIBGGJNFJFF_CTOR_OFFSET UNITYSDK_OFFSET(0x16435F50)
#define IIBGGJNFJFF_PIOBKHJFFFK_OFFSET UNITYSDK_OFFSET(0x164360C0)
#define IIBGGJNFJFF_START_OFFSET UNITYSDK_OFFSET(0x16435FD0)
#define IIBGGJNFJFF_STOP_OFFSET UNITYSDK_OFFSET(0x16436060)

inline static constexpr unsigned int IIBGGJNFJFF_TypeDefinitionIndex = 80764;

	class IIBGGJNFJFF : public ::System::Object
	{
	public:
		::FJCPGIHOMCN* LBNAGLIGKIO; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
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
