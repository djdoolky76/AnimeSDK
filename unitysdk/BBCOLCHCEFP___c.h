#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBCOLCHCEFP;
namespace System { class Object; }

#define BBCOLCHCEFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BFEC0)
#define BBCOLCHCEFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BFF00)
#define BBCOLCHCEFP___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E7BFF10)

inline static constexpr unsigned int BBCOLCHCEFP___c_TypeDefinitionIndex = 33449;

	class BBCOLCHCEFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x470E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBCOLCHCEFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCOLCHCEFP___C_CTOR_OFFSET))(this);
		}

		::BBCOLCHCEFP* __cctor_b__58_0()
		{
			return ((::BBCOLCHCEFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCOLCHCEFP___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
