#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEAJOABAAGF;
namespace System { class Object; }

#define HEAJOABAAGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F880330)
#define HEAJOABAAGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F880370)
#define HEAJOABAAGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F880380)

inline static constexpr unsigned int HEAJOABAAGF___c_TypeDefinitionIndex = 28463;

	class HEAJOABAAGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEAJOABAAGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAJOABAAGF___C_CTOR_OFFSET))(this);
		}

		::HEAJOABAAGF* __cctor_b__33_0()
		{
			return ((::HEAJOABAAGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAJOABAAGF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
