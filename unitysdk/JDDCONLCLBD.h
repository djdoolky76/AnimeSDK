#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDDCONLCLBD;
namespace System { class String; }

#define JDDCONLCLBD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x165BF7A0)
#define JDDCONLCLBD_CTOR_OFFSET UNITYSDK_OFFSET(0x165BF820)
#define JDDCONLCLBD_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x165BF780)
#define JDDCONLCLBD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x165BF760)
#define JDDCONLCLBD_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x165BF790)
#define JDDCONLCLBD_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x165BF770)

	class JDDCONLCLBD : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _Count_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + JDDCONLCLBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDCONLCLBD_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JDDCONLCLBD_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDCONLCLBD_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDDCONLCLBD_SET_COUNT_OFFSET))(this, a1);
		}

		static ::JDDCONLCLBD* BPLPBPMEODA(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::JDDCONLCLBD*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + JDDCONLCLBD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
