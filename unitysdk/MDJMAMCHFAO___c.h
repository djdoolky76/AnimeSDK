#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJMAMCHFAO;
namespace System { class Object; }

#define MDJMAMCHFAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7C80)
#define MDJMAMCHFAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7CC0)
#define MDJMAMCHFAO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9D7CD0)

inline static constexpr unsigned int MDJMAMCHFAO___c_TypeDefinitionIndex = 27956;

	class MDJMAMCHFAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJMAMCHFAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMAMCHFAO___C_CTOR_OFFSET))(this);
		}

		::MDJMAMCHFAO* __cctor_b__23_0()
		{
			return ((::MDJMAMCHFAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMAMCHFAO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
