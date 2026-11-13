#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LABMDIJAHMG;

#define LABMDIJAHMG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B274D50)
#define LABMDIJAHMG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B274DC0)
#define LABMDIJAHMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B274EA0)
#define LABMDIJAHMG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B274E20)

inline static constexpr unsigned int LABMDIJAHMG_TypeDefinitionIndex = 67814;

	class LABMDIJAHMG : public ::MLKDDLHNNHH
	{
	public:
		::System::Int32 LPEHHMHPCMG; // 0x20
		::System::Int32 LJBOIIKBIDO; // 0x24
		::System::Int32 ONOPKOLOABG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABMDIJAHMG_CTOR_OFFSET))(this);
		}

		static ::LABMDIJAHMG* BPLPBPMEODA()
		{
			return ((::LABMDIJAHMG*(*)())((::PBYTE)hIl2Cpp + LABMDIJAHMG_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABMDIJAHMG_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABMDIJAHMG_ONEXECUTE_OFFSET))(this);
		}

	};
