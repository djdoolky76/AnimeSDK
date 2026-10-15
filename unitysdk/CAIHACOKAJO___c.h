#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAIHACOKAJO;
namespace System { class Object; }

#define CAIHACOKAJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02E510)
#define CAIHACOKAJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02E550)
#define CAIHACOKAJO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E02E560)

inline static constexpr unsigned int CAIHACOKAJO___c_TypeDefinitionIndex = 34815;

	class CAIHACOKAJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAIHACOKAJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO___C_CTOR_OFFSET))(this);
		}

		::CAIHACOKAJO* __cctor_b__33_0()
		{
			return ((::CAIHACOKAJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIHACOKAJO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
