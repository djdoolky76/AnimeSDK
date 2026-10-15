#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABBOOKAODO;
namespace System { class Object; }

#define CABBOOKAODO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E053850)
#define CABBOOKAODO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E053890)
#define CABBOOKAODO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0538A0)

inline static constexpr unsigned int CABBOOKAODO___c_TypeDefinitionIndex = 32600;

	class CABBOOKAODO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABBOOKAODO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO___C_CTOR_OFFSET))(this);
		}

		::CABBOOKAODO* __cctor_b__33_0()
		{
			return ((::CABBOOKAODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
