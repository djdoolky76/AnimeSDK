#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDKGIMLKJHA;
namespace System { class Object; }

#define NDKGIMLKJHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABB950)
#define NDKGIMLKJHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABB980)
#define NDKGIMLKJHA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EABB990)

inline static constexpr unsigned int NDKGIMLKJHA___c_TypeDefinitionIndex = 26035;

	class NDKGIMLKJHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDKGIMLKJHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA___C_CTOR_OFFSET))(this);
		}

		::NDKGIMLKJHA* __cctor_b__28_0()
		{
			return ((::NDKGIMLKJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
