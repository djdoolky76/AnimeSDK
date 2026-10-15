#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJKGDHKKDFF;
namespace System { class Object; }

#define FJKGDHKKDFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3790C0)
#define FJKGDHKKDFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3790F0)
#define FJKGDHKKDFF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E379100)

inline static constexpr unsigned int FJKGDHKKDFF___c_TypeDefinitionIndex = 27308;

	class FJKGDHKKDFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJKGDHKKDFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKGDHKKDFF___C_CTOR_OFFSET))(this);
		}

		::FJKGDHKKDFF* __cctor_b__23_0()
		{
			return ((::FJKGDHKKDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKGDHKKDFF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
