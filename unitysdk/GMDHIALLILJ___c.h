#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMDHIALLILJ;
namespace System { class Object; }

#define GMDHIALLILJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E19B0)
#define GMDHIALLILJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E19F0)
#define GMDHIALLILJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F7E1A00)

inline static constexpr unsigned int GMDHIALLILJ___c_TypeDefinitionIndex = 25812;

	class GMDHIALLILJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMDHIALLILJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDHIALLILJ___C_CTOR_OFFSET))(this);
		}

		::GMDHIALLILJ* __cctor_b__23_0()
		{
			return ((::GMDHIALLILJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDHIALLILJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
