#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKGODFLGEAM;
namespace System { class Object; }

#define MKGODFLGEAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C8E0)
#define MKGODFLGEAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C920)
#define MKGODFLGEAM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EA2C930)

inline static constexpr unsigned int MKGODFLGEAM___c_TypeDefinitionIndex = 26634;

	class MKGODFLGEAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKGODFLGEAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM___C_CTOR_OFFSET))(this);
		}

		::MKGODFLGEAM* __cctor_b__43_0()
		{
			return ((::MKGODFLGEAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGODFLGEAM___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
