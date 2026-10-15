#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLBKNIJDALM;
namespace System { class Object; }

#define LLBKNIJDALM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9693B0)
#define LLBKNIJDALM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9693F0)
#define LLBKNIJDALM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E969400)

inline static constexpr unsigned int LLBKNIJDALM___c_TypeDefinitionIndex = 33361;

	class LLBKNIJDALM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLBKNIJDALM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKNIJDALM___C_CTOR_OFFSET))(this);
		}

		::LLBKNIJDALM* __cctor_b__23_0()
		{
			return ((::LLBKNIJDALM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKNIJDALM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
