#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIFNAMDEPIL;
namespace System { class Object; }

#define NIFNAMDEPIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC3C90)
#define NIFNAMDEPIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC3CD0)
#define NIFNAMDEPIL___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1EAC3CE0)

inline static constexpr unsigned int NIFNAMDEPIL___c_TypeDefinitionIndex = 29511;

	class NIFNAMDEPIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x628D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFNAMDEPIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFNAMDEPIL___C_CTOR_OFFSET))(this);
		}

		::NIFNAMDEPIL* __cctor_b__58_0()
		{
			return ((::NIFNAMDEPIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFNAMDEPIL___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
