#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Transform; }

#define AOCHEBFKDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1589AFB0)
#define AOCHEBFKDIE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1589AF30)
#define AOCHEBFKDIE_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1589AF50)
#define AOCHEBFKDIE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1589AF40)

inline static constexpr unsigned int AOCHEBFKDIE_TypeDefinitionIndex = 72378;

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
