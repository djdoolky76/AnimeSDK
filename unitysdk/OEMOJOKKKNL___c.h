#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEMOJOKKKNL;
namespace System { class Object; }

#define OEMOJOKKKNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0D4A50)
#define OEMOJOKKKNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D4A90)
#define OEMOJOKKKNL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F0D4AA0)

inline static constexpr unsigned int OEMOJOKKKNL___c_TypeDefinitionIndex = 28979;

	class OEMOJOKKKNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x104C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEMOJOKKKNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOJOKKKNL___C_CTOR_OFFSET))(this);
		}

		::OEMOJOKKKNL* __cctor_b__23_0()
		{
			return ((::OEMOJOKKKNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMOJOKKKNL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
