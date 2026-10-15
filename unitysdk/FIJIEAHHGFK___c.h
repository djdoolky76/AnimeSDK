#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIJIEAHHGFK;
namespace System { class Object; }

#define FIJIEAHHGFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E399240)
#define FIJIEAHHGFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E399270)
#define FIJIEAHHGFK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E399280)

inline static constexpr unsigned int FIJIEAHHGFK___c_TypeDefinitionIndex = 32179;

	class FIJIEAHHGFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIJIEAHHGFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK___C_CTOR_OFFSET))(this);
		}

		::FIJIEAHHGFK* __cctor_b__28_0()
		{
			return ((::FIJIEAHHGFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJIEAHHGFK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
