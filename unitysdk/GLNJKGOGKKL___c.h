#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLNJKGOGKKL;
namespace System { class Object; }

#define GLNJKGOGKKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C79B0)
#define GLNJKGOGKKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C79F0)
#define GLNJKGOGKKL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4C7A00)

inline static constexpr unsigned int GLNJKGOGKKL___c_TypeDefinitionIndex = 32158;

	class GLNJKGOGKKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLNJKGOGKKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL___C_CTOR_OFFSET))(this);
		}

		::GLNJKGOGKKL* __cctor_b__23_0()
		{
			return ((::GLNJKGOGKKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
