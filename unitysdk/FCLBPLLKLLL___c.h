#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCLBPLLKLLL;
namespace System { class Object; }

#define FCLBPLLKLLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F634DE0)
#define FCLBPLLKLLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F634E20)
#define FCLBPLLKLLL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F634E30)

inline static constexpr unsigned int FCLBPLLKLLL___c_TypeDefinitionIndex = 27618;

	class FCLBPLLKLLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLBPLLKLLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL___C_CTOR_OFFSET))(this);
		}

		::FCLBPLLKLLL* __cctor_b__28_0()
		{
			return ((::FCLBPLLKLLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
