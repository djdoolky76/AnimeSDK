#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEGMFOHNNFL;
namespace System { class Object; }

#define PEGMFOHNNFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1E6DA0)
#define PEGMFOHNNFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E6DE0)
#define PEGMFOHNNFL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1E6DF0)

inline static constexpr unsigned int PEGMFOHNNFL___c_TypeDefinitionIndex = 29970;

	class PEGMFOHNNFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEGMFOHNNFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL___C_CTOR_OFFSET))(this);
		}

		::PEGMFOHNNFL* __cctor_b__28_0()
		{
			return ((::PEGMFOHNNFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
