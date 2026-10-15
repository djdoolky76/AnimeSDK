#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJHDHGGMILA;
namespace System { class Object; }

#define EJHDHGGMILA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28A020)
#define EJHDHGGMILA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28A050)
#define EJHDHGGMILA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E28A060)

inline static constexpr unsigned int EJHDHGGMILA___c_TypeDefinitionIndex = 27300;

	class EJHDHGGMILA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJHDHGGMILA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA___C_CTOR_OFFSET))(this);
		}

		::EJHDHGGMILA* __cctor_b__28_0()
		{
			return ((::EJHDHGGMILA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDHGGMILA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
