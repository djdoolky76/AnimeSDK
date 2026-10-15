#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIMLCCAKGDG;
namespace System { class Object; }

#define GIMLCCAKGDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A22E0)
#define GIMLCCAKGDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A2320)
#define GIMLCCAKGDG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4A2330)

inline static constexpr unsigned int GIMLCCAKGDG___c_TypeDefinitionIndex = 28958;

	class GIMLCCAKGDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMLCCAKGDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG___C_CTOR_OFFSET))(this);
		}

		::GIMLCCAKGDG* __cctor_b__28_0()
		{
			return ((::GIMLCCAKGDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMLCCAKGDG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
