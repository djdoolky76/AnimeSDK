#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFGGPGHOANG;
namespace System { class Object; }

#define JFGGPGHOANG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72BC60)
#define JFGGPGHOANG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72BCA0)
#define JFGGPGHOANG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E72BCB0)

inline static constexpr unsigned int JFGGPGHOANG___c_TypeDefinitionIndex = 27895;

	class JFGGPGHOANG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGGPGHOANG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGPGHOANG___C_CTOR_OFFSET))(this);
		}

		::JFGGPGHOANG* __cctor_b__18_0()
		{
			return ((::JFGGPGHOANG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGGPGHOANG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
