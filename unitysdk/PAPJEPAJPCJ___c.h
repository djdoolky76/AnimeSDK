#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAPJEPAJPCJ;
namespace System { class Object; }

#define PAPJEPAJPCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1BD1F0)
#define PAPJEPAJPCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1BD220)
#define PAPJEPAJPCJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1BD230)

inline static constexpr unsigned int PAPJEPAJPCJ___c_TypeDefinitionIndex = 25919;

	class PAPJEPAJPCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAPJEPAJPCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ___C_CTOR_OFFSET))(this);
		}

		::PAPJEPAJPCJ* __cctor_b__28_0()
		{
			return ((::PAPJEPAJPCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJEPAJPCJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
