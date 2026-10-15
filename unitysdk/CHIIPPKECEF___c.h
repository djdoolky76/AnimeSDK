#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHIIPPKECEF;
namespace System { class Object; }

#define CHIIPPKECEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09B9D0)
#define CHIIPPKECEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09BA10)
#define CHIIPPKECEF___C___CCTOR_B__93_0_OFFSET UNITYSDK_OFFSET(0x1E09BA20)

inline static constexpr unsigned int CHIIPPKECEF___c_TypeDefinitionIndex = 26508;

	class CHIIPPKECEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHIIPPKECEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIIPPKECEF___C_CTOR_OFFSET))(this);
		}

		::CHIIPPKECEF* __cctor_b__93_0()
		{
			return ((::CHIIPPKECEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIIPPKECEF___C___CCTOR_B__93_0_OFFSET))(this);
		}

	};
