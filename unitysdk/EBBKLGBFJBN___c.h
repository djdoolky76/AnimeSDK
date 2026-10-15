#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBKLGBFJBN;
namespace System { class Object; }

#define EBBKLGBFJBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2048F0)
#define EBBKLGBFJBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E204920)
#define EBBKLGBFJBN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E204930)

inline static constexpr unsigned int EBBKLGBFJBN___c_TypeDefinitionIndex = 30758;

	class EBBKLGBFJBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBKLGBFJBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN___C_CTOR_OFFSET))(this);
		}

		::EBBKLGBFJBN* __cctor_b__28_0()
		{
			return ((::EBBKLGBFJBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKLGBFJBN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
