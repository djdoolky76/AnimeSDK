#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/IPEndPoint.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class SocketAddress; }

#define AGNHKELDDAH_CREATE_OFFSET UNITYSDK_OFFSET(0x1DD9A390)
#define AGNHKELDDAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD9A270)
#define AGNHKELDDAH_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DD9A2C0)
#define AGNHKELDDAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9A220)
#define AGNHKELDDAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD9A480)
#define AGNHKELDDAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD9A570)
#define AGNHKELDDAH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DD9A380)
#define AGNHKELDDAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD9A590)

	class AGNHKELDDAH : public ::System::Net::IPEndPoint
	{
	public:
		::System::Net::SocketAddress* OFKKGGLELKE; // 0x20
		::System::Void _ctor(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + AGNHKELDDAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Net::IPAddress* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + AGNHKELDDAH_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Net::IPEndPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + AGNHKELDDAH_CTOR_2_OFFSET))(this, a1);
		}

		::System::Net::SocketAddress* Serialize()
		{
			return ((::System::Net::SocketAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHKELDDAH_SERIALIZE_OFFSET))(this);
		}

		::System::Net::EndPoint* Create(::System::Net::SocketAddress* a1)
		{
			return ((::System::Net::EndPoint*(*)(::PVOID, ::System::Net::SocketAddress*))((::PBYTE)hIl2Cpp + AGNHKELDDAH_CREATE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGNHKELDDAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHKELDDAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHKELDDAH_TOSTRING_OFFSET))(this);
		}

	};
