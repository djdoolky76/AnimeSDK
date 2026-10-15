#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJDNPDECDDA;
namespace System { class Object; }

#define JJDNPDECDDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72B890)
#define JJDNPDECDDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72B8D0)
#define JJDNPDECDDA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E72B8E0)

inline static constexpr unsigned int JJDNPDECDDA___c_TypeDefinitionIndex = 30207;

	class JJDNPDECDDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJDNPDECDDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA___C_CTOR_OFFSET))(this);
		}

		::JJDNPDECDDA* __cctor_b__28_0()
		{
			return ((::JJDNPDECDDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDNPDECDDA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
