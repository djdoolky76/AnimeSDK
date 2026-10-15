#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPIJFDIPNDE;
namespace System { class Object; }

#define IPIJFDIPNDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B7CB0)
#define IPIJFDIPNDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B7CF0)
#define IPIJFDIPNDE___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E6B7D00)

inline static constexpr unsigned int IPIJFDIPNDE___c_TypeDefinitionIndex = 25757;

	class IPIJFDIPNDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIJFDIPNDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIJFDIPNDE___C_CTOR_OFFSET))(this);
		}

		::IPIJFDIPNDE* __cctor_b__53_0()
		{
			return ((::IPIJFDIPNDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIJFDIPNDE___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
