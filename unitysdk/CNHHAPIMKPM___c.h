#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNHHAPIMKPM;
namespace System { class Object; }

#define CNHHAPIMKPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205F1060)
#define CNHHAPIMKPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205F10A0)
#define CNHHAPIMKPM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x205F10B0)

inline static constexpr unsigned int CNHHAPIMKPM___c_TypeDefinitionIndex = 26926;

	class CNHHAPIMKPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNHHAPIMKPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHHAPIMKPM___C_CTOR_OFFSET))(this);
		}

		::CNHHAPIMKPM* __cctor_b__28_0()
		{
			return ((::CNHHAPIMKPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHHAPIMKPM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
