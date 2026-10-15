#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEJFIEPMMGG;
namespace System { class Object; }

#define LEJFIEPMMGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E906C10)
#define LEJFIEPMMGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E906C40)
#define LEJFIEPMMGG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E906C50)

inline static constexpr unsigned int LEJFIEPMMGG___c_TypeDefinitionIndex = 33013;

	class LEJFIEPMMGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEJFIEPMMGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG___C_CTOR_OFFSET))(this);
		}

		::LEJFIEPMMGG* __cctor_b__33_0()
		{
			return ((::LEJFIEPMMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
