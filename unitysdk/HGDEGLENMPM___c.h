#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGDEGLENMPM;
namespace System { class Object; }

#define HGDEGLENMPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5487C0)
#define HGDEGLENMPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E548800)
#define HGDEGLENMPM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E548810)

inline static constexpr unsigned int HGDEGLENMPM___c_TypeDefinitionIndex = 30052;

	class HGDEGLENMPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGDEGLENMPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDEGLENMPM___C_CTOR_OFFSET))(this);
		}

		::HGDEGLENMPM* __cctor_b__18_0()
		{
			return ((::HGDEGLENMPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDEGLENMPM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
