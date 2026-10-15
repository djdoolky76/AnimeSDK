#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKCDLPGBLEE;
namespace System { class Object; }

#define FKCDLPGBLEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3ABC60)
#define FKCDLPGBLEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ABCA0)
#define FKCDLPGBLEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3ABCB0)

inline static constexpr unsigned int FKCDLPGBLEE___c_TypeDefinitionIndex = 26157;

	class FKCDLPGBLEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x610A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCDLPGBLEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCDLPGBLEE___C_CTOR_OFFSET))(this);
		}

		::FKCDLPGBLEE* __cctor_b__23_0()
		{
			return ((::FKCDLPGBLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCDLPGBLEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
