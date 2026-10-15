#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDIGIKOLDEM;
namespace System { class Object; }

#define IDIGIKOLDEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FF370)
#define IDIGIKOLDEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FF3B0)
#define IDIGIKOLDEM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5FF3C0)

inline static constexpr unsigned int IDIGIKOLDEM___c_TypeDefinitionIndex = 29751;

	class IDIGIKOLDEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x468E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDIGIKOLDEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM___C_CTOR_OFFSET))(this);
		}

		::IDIGIKOLDEM* __cctor_b__28_0()
		{
			return ((::IDIGIKOLDEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIGIKOLDEM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
