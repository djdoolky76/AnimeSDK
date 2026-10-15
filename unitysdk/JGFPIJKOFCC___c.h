#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGFPIJKOFCC;
namespace System { class Object; }

#define JGFPIJKOFCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E739300)
#define JGFPIJKOFCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E739340)
#define JGFPIJKOFCC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E739350)

inline static constexpr unsigned int JGFPIJKOFCC___c_TypeDefinitionIndex = 33771;

	class JGFPIJKOFCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGFPIJKOFCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFPIJKOFCC___C_CTOR_OFFSET))(this);
		}

		::JGFPIJKOFCC* __cctor_b__23_0()
		{
			return ((::JGFPIJKOFCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFPIJKOFCC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
