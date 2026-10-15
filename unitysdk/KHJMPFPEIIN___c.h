#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHJMPFPEIIN;
namespace System { class Object; }

#define KHJMPFPEIIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E818B00)
#define KHJMPFPEIIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E818B40)
#define KHJMPFPEIIN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E818B50)

inline static constexpr unsigned int KHJMPFPEIIN___c_TypeDefinitionIndex = 26447;

	class KHJMPFPEIIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHJMPFPEIIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMPFPEIIN___C_CTOR_OFFSET))(this);
		}

		::KHJMPFPEIIN* __cctor_b__23_0()
		{
			return ((::KHJMPFPEIIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMPFPEIIN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
