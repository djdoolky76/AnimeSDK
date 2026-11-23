#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAB4652672A77F39/EA3C7A9332168E6A.h"
#include "unitysdk/FC76D7027D76DB7D/BC3363DC6043F308.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
class F6859AD6A1F65BA6;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_SECURITY_SECURITYEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3BD1030)
#define SYSTEM_SECURITY_SECURITYEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BD10C0)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BD10F0)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3BD10D0)
#define SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD1140)

namespace System::Security
{
	inline static constexpr unsigned int SecurityException_TypeDefinitionIndex = 11224;

	class SecurityException : public ::System::SystemException
	{
	public:
		::System::String* permissionState; // 0x90
		::System::Type* permissionType; // 0x98
		::System::String* _granted; // 0xA0
		::System::String* _refused; // 0xA8
		::System::Object* _demanded; // 0xB0
		::F6859AD6A1F65BA6* _firstperm; // 0xB8
		::System::Reflection::MethodInfo* _method; // 0xC0
		::FC76D7027D76DB7D::BC3363DC6043F308 _action; // 0xC8
		::System::Byte _padding0[0x4];
		::System::Object* _denyset; // 0xD0
		::System::Object* _permitset; // 0xD8
		::System::Reflection::AssemblyName* _assembly; // 0xE0
		::System::String* _url; // 0xE8
		::AAB4652672A77F39::EA3C7A9332168E6A _zone; // 0xF0

		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_TOSTRING_OFFSET))(this);
		}
	};
}
