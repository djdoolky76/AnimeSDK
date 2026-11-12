#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALLFGCIALIJ;
namespace System { class Object; }

#define ALLFGCIALIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7CC770)
#define ALLFGCIALIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CC7B0)
#define ALLFGCIALIJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7CC7C0)

inline static constexpr unsigned int ALLFGCIALIJ___c_TypeDefinitionIndex = 32612;

	class ALLFGCIALIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALLFGCIALIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ___C_CTOR_OFFSET))(this);
		}

		::ALLFGCIALIJ* __cctor_b__28_0()
		{
			return ((::ALLFGCIALIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLFGCIALIJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
