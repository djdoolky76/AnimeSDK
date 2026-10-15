#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNDMLICBKEF;
namespace System { class Object; }

#define DNDMLICBKEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4E60)
#define DNDMLICBKEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4EA0)
#define DNDMLICBKEF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E1F4EB0)

inline static constexpr unsigned int DNDMLICBKEF___c_TypeDefinitionIndex = 32641;

	class DNDMLICBKEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNDMLICBKEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF___C_CTOR_OFFSET))(this);
		}

		::DNDMLICBKEF* __cctor_b__43_0()
		{
			return ((::DNDMLICBKEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNDMLICBKEF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
