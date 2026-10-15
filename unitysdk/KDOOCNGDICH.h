#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDOOCNGDICH_CTOR_OFFSET UNITYSDK_OFFSET(0xB3656F0)
#define KDOOCNGDICH_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0xB365700)
#define KDOOCNGDICH_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB365710)
#define KDOOCNGDICH_INJKJEMKIOJ_OFFSET UNITYSDK_OFFSET(0xB365730)
#define KDOOCNGDICH_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB365720)

inline static constexpr unsigned int KDOOCNGDICH_TypeDefinitionIndex = 80716;

	class KDOOCNGDICH : public ::System::Object
	{
	public:
		::System::Boolean _IsSelected_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 _CardIndex_k__BackingField; // 0x14
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDOOCNGDICH_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOOCNGDICH_GET_CARDINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOOCNGDICH_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDOOCNGDICH_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::Void INJKJEMKIOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOOCNGDICH_INJKJEMKIOJ_OFFSET))(this);
		}

	};
