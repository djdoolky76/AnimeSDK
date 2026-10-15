#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIOHLMBJJDB;
namespace System { class Object; }

#define FIOHLMBJJDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3708E0)
#define FIOHLMBJJDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E370920)
#define FIOHLMBJJDB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E370930)

inline static constexpr unsigned int FIOHLMBJJDB___c_TypeDefinitionIndex = 28055;

	class FIOHLMBJJDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x595C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIOHLMBJJDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOHLMBJJDB___C_CTOR_OFFSET))(this);
		}

		::FIOHLMBJJDB* __cctor_b__18_0()
		{
			return ((::FIOHLMBJJDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOHLMBJJDB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
