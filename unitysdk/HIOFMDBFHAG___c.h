#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOFMDBFHAG;
namespace System { class Object; }

#define HIOFMDBFHAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59F9D0)
#define HIOFMDBFHAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59FA10)
#define HIOFMDBFHAG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E59FA20)

inline static constexpr unsigned int HIOFMDBFHAG___c_TypeDefinitionIndex = 34474;

	class HIOFMDBFHAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ED30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIOFMDBFHAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFMDBFHAG___C_CTOR_OFFSET))(this);
		}

		::HIOFMDBFHAG* __cctor_b__23_0()
		{
			return ((::HIOFMDBFHAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFMDBFHAG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
