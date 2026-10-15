#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBIPCFPDEJN;
namespace System { class Object; }

#define BBIPCFPDEJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C76A0)
#define BBIPCFPDEJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C76E0)
#define BBIPCFPDEJN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7C76F0)

inline static constexpr unsigned int BBIPCFPDEJN___c_TypeDefinitionIndex = 30030;

	class BBIPCFPDEJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBIPCFPDEJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN___C_CTOR_OFFSET))(this);
		}

		::BBIPCFPDEJN* __cctor_b__28_0()
		{
			return ((::BBIPCFPDEJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIPCFPDEJN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
