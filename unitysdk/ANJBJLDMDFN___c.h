#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANJBJLDMDFN;
namespace System { class Object; }

#define ANJBJLDMDFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E634940)
#define ANJBJLDMDFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E634980)
#define ANJBJLDMDFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E634990)

inline static constexpr unsigned int ANJBJLDMDFN___c_TypeDefinitionIndex = 28352;

	class ANJBJLDMDFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x479A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANJBJLDMDFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBJLDMDFN___C_CTOR_OFFSET))(this);
		}

		::ANJBJLDMDFN* __cctor_b__23_0()
		{
			return ((::ANJBJLDMDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBJLDMDFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
