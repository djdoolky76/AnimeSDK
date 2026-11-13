#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEGNNCDOEPL;
namespace System { class Object; }

#define CEGNNCDOEPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204CA060)
#define CEGNNCDOEPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204CA0A0)
#define CEGNNCDOEPL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x204CA0B0)

inline static constexpr unsigned int CEGNNCDOEPL___c_TypeDefinitionIndex = 30587;

	class CEGNNCDOEPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEGNNCDOEPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGNNCDOEPL___C_CTOR_OFFSET))(this);
		}

		::CEGNNCDOEPL* __cctor_b__23_0()
		{
			return ((::CEGNNCDOEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGNNCDOEPL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
