#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHNLJJANLPI;
class BALLHPKKDDH;

#define LBNENBNFPAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB60D5D0)
#define LBNENBNFPAD_GET_AVATARROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xB60D5B0)
#define LBNENBNFPAD_GET_PROTOTYPE_OFFSET UNITYSDK_OFFSET(0xB60D590)
#define LBNENBNFPAD_SET_AVATARROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xB60D5C0)
#define LBNENBNFPAD_SET_PROTOTYPE_OFFSET UNITYSDK_OFFSET(0xB60D5A0)

	class LBNENBNFPAD : public ::System::Object
	{
	public:
		::AHNLJJANLPI* _AvatarRowDataProvider_k__BackingField; // 0x10
		::BALLHPKKDDH* _Prototype_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNENBNFPAD_CTOR_OFFSET))(this);
		}

		::BALLHPKKDDH* get_Prototype()
		{
			return ((::BALLHPKKDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNENBNFPAD_GET_PROTOTYPE_OFFSET))(this);
		}

		::System::Void set_Prototype(::BALLHPKKDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BALLHPKKDDH*))((::PBYTE)hIl2Cpp + LBNENBNFPAD_SET_PROTOTYPE_OFFSET))(this, a1);
		}

		::AHNLJJANLPI* get_AvatarRowDataProvider()
		{
			return ((::AHNLJJANLPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNENBNFPAD_GET_AVATARROWDATAPROVIDER_OFFSET))(this);
		}

		::System::Void set_AvatarRowDataProvider(::AHNLJJANLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHNLJJANLPI*))((::PBYTE)hIl2Cpp + LBNENBNFPAD_SET_AVATARROWDATAPROVIDER_OFFSET))(this, a1);
		}

	};
