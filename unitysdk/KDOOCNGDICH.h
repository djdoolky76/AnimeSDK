#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDOOCNGDICH_CTOR_OFFSET UNITYSDK_OFFSET(0xB36C410)
#define KDOOCNGDICH_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0xB36C420)
#define KDOOCNGDICH_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB36C430)
#define KDOOCNGDICH_INJKJEMKIOJ_OFFSET UNITYSDK_OFFSET(0xB36C450)
#define KDOOCNGDICH_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB36C440)

inline static constexpr unsigned int KDOOCNGDICH_TypeDefinitionIndex = 80717;

	class KDOOCNGDICH : public ::System::Object
	{
	public:
		::System::Int32 _CardIndex_k__BackingField; // 0x10
		::System::Boolean _IsSelected_k__BackingField; // 0x14
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
