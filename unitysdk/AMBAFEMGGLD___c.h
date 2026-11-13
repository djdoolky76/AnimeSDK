#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMBAFEMGGLD;
namespace System { class Object; }

#define AMBAFEMGGLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20025590)
#define AMBAFEMGGLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200255D0)
#define AMBAFEMGGLD___C___CCTOR_B__128_0_OFFSET UNITYSDK_OFFSET(0x200255E0)

inline static constexpr unsigned int AMBAFEMGGLD___c_TypeDefinitionIndex = 29301;

	class AMBAFEMGGLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMBAFEMGGLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBAFEMGGLD___C_CTOR_OFFSET))(this);
		}

		::AMBAFEMGGLD* __cctor_b__128_0()
		{
			return ((::AMBAFEMGGLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBAFEMGGLD___C___CCTOR_B__128_0_OFFSET))(this);
		}

	};
