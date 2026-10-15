#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Transform; }

#define AOCHEBFKDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x158A67A0)
#define AOCHEBFKDIE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x158A6720)
#define AOCHEBFKDIE_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x158A6740)
#define AOCHEBFKDIE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x158A6730)

inline static constexpr unsigned int AOCHEBFKDIE_TypeDefinitionIndex = 72379;

	class AOCHEBFKDIE : public ::FMPCODLIOLG
	{
	public:
		::System::Int32 _Index_k__BackingField; // 0x60
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCHEBFKDIE_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCHEBFKDIE_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOCHEBFKDIE_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCHEBFKDIE_GET_TRANS_OFFSET))(this);
		}

	};
