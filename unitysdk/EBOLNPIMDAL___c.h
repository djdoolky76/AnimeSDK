#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBOLNPIMDAL;
namespace System { class Object; }

#define EBOLNPIMDAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F36CDA0)
#define EBOLNPIMDAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F36CDE0)
#define EBOLNPIMDAL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F36CDF0)

inline static constexpr unsigned int EBOLNPIMDAL___c_TypeDefinitionIndex = 34033;

	class EBOLNPIMDAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x444E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOLNPIMDAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL___C_CTOR_OFFSET))(this);
		}

		::EBOLNPIMDAL* __cctor_b__33_0()
		{
			return ((::EBOLNPIMDAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOLNPIMDAL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
