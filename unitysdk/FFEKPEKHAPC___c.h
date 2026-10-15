#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFEKPEKHAPC;
namespace System { class Object; }

#define FFEKPEKHAPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E36D940)
#define FFEKPEKHAPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E36D980)
#define FFEKPEKHAPC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E36D990)

inline static constexpr unsigned int FFEKPEKHAPC___c_TypeDefinitionIndex = 32242;

	class FFEKPEKHAPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFEKPEKHAPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC___C_CTOR_OFFSET))(this);
		}

		::FFEKPEKHAPC* __cctor_b__33_0()
		{
			return ((::FFEKPEKHAPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
