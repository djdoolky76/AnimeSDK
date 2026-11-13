#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMPNJFLNBJG;
namespace System { class Object; }

#define KMPNJFLNBJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDCCE90)
#define KMPNJFLNBJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDCCED0)
#define KMPNJFLNBJG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDCCEE0)

inline static constexpr unsigned int KMPNJFLNBJG___c_TypeDefinitionIndex = 30371;

	class KMPNJFLNBJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMPNJFLNBJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPNJFLNBJG___C_CTOR_OFFSET))(this);
		}

		::KMPNJFLNBJG* __cctor_b__23_0()
		{
			return ((::KMPNJFLNBJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPNJFLNBJG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
