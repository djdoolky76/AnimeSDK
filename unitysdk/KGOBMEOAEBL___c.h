#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGOBMEOAEBL;
namespace System { class Object; }

#define KGOBMEOAEBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB55A40)
#define KGOBMEOAEBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB55A80)
#define KGOBMEOAEBL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB55A90)

inline static constexpr unsigned int KGOBMEOAEBL___c_TypeDefinitionIndex = 28908;

	class KGOBMEOAEBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGOBMEOAEBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOBMEOAEBL___C_CTOR_OFFSET))(this);
		}

		::KGOBMEOAEBL* __cctor_b__23_0()
		{
			return ((::KGOBMEOAEBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOBMEOAEBL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
