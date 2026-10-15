#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKPAKFGGGG;
namespace System { class Object; }

#define AHKPAKFGGGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E246C90)
#define AHKPAKFGGGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E246CD0)
#define AHKPAKFGGGG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E246CE0)

inline static constexpr unsigned int AHKPAKFGGGG___c_TypeDefinitionIndex = 34782;

	class AHKPAKFGGGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHKPAKFGGGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPAKFGGGG___C_CTOR_OFFSET))(this);
		}

		::AHKPAKFGGGG* __cctor_b__23_0()
		{
			return ((::AHKPAKFGGGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPAKFGGGG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
