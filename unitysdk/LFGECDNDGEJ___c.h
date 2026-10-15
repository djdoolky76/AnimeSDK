#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFGECDNDGEJ;
namespace System { class Object; }

#define LFGECDNDGEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93C760)
#define LFGECDNDGEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93C790)
#define LFGECDNDGEJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E93C7A0)

inline static constexpr unsigned int LFGECDNDGEJ___c_TypeDefinitionIndex = 26909;

	class LFGECDNDGEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFGECDNDGEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGECDNDGEJ___C_CTOR_OFFSET))(this);
		}

		::LFGECDNDGEJ* __cctor_b__18_0()
		{
			return ((::LFGECDNDGEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGECDNDGEJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
