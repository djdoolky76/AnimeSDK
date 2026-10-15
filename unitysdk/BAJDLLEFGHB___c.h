#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAJDLLEFGHB;
namespace System { class Object; }

#define BAJDLLEFGHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78C610)
#define BAJDLLEFGHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78C650)
#define BAJDLLEFGHB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E78C660)

inline static constexpr unsigned int BAJDLLEFGHB___c_TypeDefinitionIndex = 33306;

	class BAJDLLEFGHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CA60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAJDLLEFGHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB___C_CTOR_OFFSET))(this);
		}

		::BAJDLLEFGHB* __cctor_b__33_0()
		{
			return ((::BAJDLLEFGHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
