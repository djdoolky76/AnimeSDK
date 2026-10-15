#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define HGAFIPIKPLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8EDA0)
#define HGAFIPIKPLJ_GET_WILLREUSE_OFFSET UNITYSDK_OFFSET(0x15C8ED30)
#define HGAFIPIKPLJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15C8ED50)
#define HGAFIPIKPLJ_SET_WILLREUSE_OFFSET UNITYSDK_OFFSET(0x15C8ED40)

	class HGAFIPIKPLJ : public ::System::Object
	{
	public:
		::System::Object* ACKBJOOHPBF; // 0x10
		::System::Boolean _WillReuse_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAFIPIKPLJ_CTOR_OFFSET))(this);
		}

		::System::Boolean get_WillReuse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAFIPIKPLJ_GET_WILLREUSE_OFFSET))(this);
		}

		::System::Void set_WillReuse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGAFIPIKPLJ_SET_WILLREUSE_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAFIPIKPLJ_HADOHLNHHGB_OFFSET))(this);
		}

	};
