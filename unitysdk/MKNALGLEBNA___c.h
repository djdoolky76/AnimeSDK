#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKNALGLEBNA;
namespace System { class Object; }

#define MKNALGLEBNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5BFA0)
#define MKNALGLEBNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5BFE0)
#define MKNALGLEBNA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA5BFF0)

inline static constexpr unsigned int MKNALGLEBNA___c_TypeDefinitionIndex = 33019;

	class MKNALGLEBNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKNALGLEBNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNALGLEBNA___C_CTOR_OFFSET))(this);
		}

		::MKNALGLEBNA* __cctor_b__23_0()
		{
			return ((::MKNALGLEBNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNALGLEBNA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
