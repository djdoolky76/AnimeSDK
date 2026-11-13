#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLFPLAAAFHI;
namespace System { class Object; }

#define OLFPLAAAFHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD66170)
#define OLFPLAAAFHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD661B0)
#define OLFPLAAAFHI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD661C0)

inline static constexpr unsigned int OLFPLAAAFHI___c_TypeDefinitionIndex = 30889;

	class OLFPLAAAFHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLFPLAAAFHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI___C_CTOR_OFFSET))(this);
		}

		::OLFPLAAAFHI* __cctor_b__28_0()
		{
			return ((::OLFPLAAAFHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
