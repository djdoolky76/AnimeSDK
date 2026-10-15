#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBPHNIBGMPH;
namespace System { class Object; }

#define IBPHNIBGMPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EECB0)
#define IBPHNIBGMPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EECF0)
#define IBPHNIBGMPH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5EED00)

inline static constexpr unsigned int IBPHNIBGMPH___c_TypeDefinitionIndex = 30294;

	class IBPHNIBGMPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x440B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBPHNIBGMPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPHNIBGMPH___C_CTOR_OFFSET))(this);
		}

		::IBPHNIBGMPH* __cctor_b__23_0()
		{
			return ((::IBPHNIBGMPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPHNIBGMPH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
