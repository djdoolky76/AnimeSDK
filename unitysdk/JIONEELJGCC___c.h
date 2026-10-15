#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIONEELJGCC;
namespace System { class Object; }

#define JIONEELJGCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E729830)
#define JIONEELJGCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E729870)
#define JIONEELJGCC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E729880)

inline static constexpr unsigned int JIONEELJGCC___c_TypeDefinitionIndex = 25601;

	class JIONEELJGCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x605A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIONEELJGCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONEELJGCC___C_CTOR_OFFSET))(this);
		}

		::JIONEELJGCC* __cctor_b__23_0()
		{
			return ((::JIONEELJGCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONEELJGCC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
