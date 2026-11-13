#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGPKFBLGDIH;
namespace System { class Object; }

#define AGPKFBLGDIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204F7EA0)
#define AGPKFBLGDIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204F7EE0)
#define AGPKFBLGDIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x204F7EF0)

inline static constexpr unsigned int AGPKFBLGDIH___c_TypeDefinitionIndex = 28868;

	class AGPKFBLGDIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGPKFBLGDIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH___C_CTOR_OFFSET))(this);
		}

		::AGPKFBLGDIH* __cctor_b__28_0()
		{
			return ((::AGPKFBLGDIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
