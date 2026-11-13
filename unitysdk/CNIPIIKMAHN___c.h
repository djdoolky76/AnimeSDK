#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNIPIIKMAHN;
namespace System { class Object; }

#define CNIPIIKMAHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205F19A0)
#define CNIPIIKMAHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205F19D0)
#define CNIPIIKMAHN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205F19E0)

inline static constexpr unsigned int CNIPIIKMAHN___c_TypeDefinitionIndex = 35116;

	class CNIPIIKMAHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x168A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNIPIIKMAHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIPIIKMAHN___C_CTOR_OFFSET))(this);
		}

		::CNIPIIKMAHN* __cctor_b__23_0()
		{
			return ((::CNIPIIKMAHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIPIIKMAHN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
