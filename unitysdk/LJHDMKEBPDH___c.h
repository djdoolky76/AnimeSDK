#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJHDMKEBPDH;
namespace System { class Object; }

#define LJHDMKEBPDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E954A20)
#define LJHDMKEBPDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E954A60)
#define LJHDMKEBPDH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E954A70)

inline static constexpr unsigned int LJHDMKEBPDH___c_TypeDefinitionIndex = 25406;

	class LJHDMKEBPDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJHDMKEBPDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHDMKEBPDH___C_CTOR_OFFSET))(this);
		}

		::LJHDMKEBPDH* __cctor_b__28_0()
		{
			return ((::LJHDMKEBPDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHDMKEBPDH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
