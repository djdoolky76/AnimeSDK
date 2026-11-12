#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHEEDBPGHHO;
namespace System { class Object; }

#define IHEEDBPGHHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F97C8C0)
#define IHEEDBPGHHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F97C8F0)
#define IHEEDBPGHHO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F97C900)

inline static constexpr unsigned int IHEEDBPGHHO___c_TypeDefinitionIndex = 31668;

	class IHEEDBPGHHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C0E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHEEDBPGHHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO___C_CTOR_OFFSET))(this);
		}

		::IHEEDBPGHHO* __cctor_b__28_0()
		{
			return ((::IHEEDBPGHHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEEDBPGHHO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
