#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGLLCPNEHDO_OPINIIMOEHA;
namespace System { class Object; }

#define PGLLCPNEHDO_OPINIIMOEHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC8F790)
#define PGLLCPNEHDO_OPINIIMOEHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8F780)
#define PGLLCPNEHDO_OPINIIMOEHA_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC8F760)
#define PGLLCPNEHDO_OPINIIMOEHA_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC8F770)

	class PGLLCPNEHDO_OPINIIMOEHA : public ::System::Object
	{
	public:
		static ::PGLLCPNEHDO_OPINIIMOEHA** StaticGet_FMJPMFEDIJL()
		{
			return (::PGLLCPNEHDO_OPINIIMOEHA**)UnitySDK::FromName("", "OPINIIMOEHA")->GetStaticField(0x4E0E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_OPINIIMOEHA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGLLCPNEHDO_OPINIIMOEHA_CCTOR_OFFSET))();
		}

		::System::Boolean System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_OPINIIMOEHA_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_OPINIIMOEHA_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__GETHASHCODE_OFFSET))(this, a1);
		}

	};
