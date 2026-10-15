#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGOOFKIKDEB;
namespace System { class Object; }

#define OGOOFKIKDEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE2CBA0)
#define OGOOFKIKDEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2CBE0)
#define OGOOFKIKDEB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE2CBF0)

inline static constexpr unsigned int OGOOFKIKDEB___c_TypeDefinitionIndex = 25997;

	class OGOOFKIKDEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGOOFKIKDEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOFKIKDEB___C_CTOR_OFFSET))(this);
		}

		::OGOOFKIKDEB* __cctor_b__23_0()
		{
			return ((::OGOOFKIKDEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOFKIKDEB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
