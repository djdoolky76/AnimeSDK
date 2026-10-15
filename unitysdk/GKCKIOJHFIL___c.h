#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKCKIOJHFIL;
namespace System { class Object; }

#define GKCKIOJHFIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E482650)
#define GKCKIOJHFIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E482690)
#define GKCKIOJHFIL___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1E4826A0)

inline static constexpr unsigned int GKCKIOJHFIL___c_TypeDefinitionIndex = 25129;

	class GKCKIOJHFIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ADB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKCKIOJHFIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCKIOJHFIL___C_CTOR_OFFSET))(this);
		}

		::GKCKIOJHFIL* __cctor_b__108_0()
		{
			return ((::GKCKIOJHFIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCKIOJHFIL___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};
