#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJILPJOJOIF;
namespace System { class Object; }

#define CJILPJOJOIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E04E0)
#define CJILPJOJOIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E0510)
#define CJILPJOJOIF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E0E0520)

inline static constexpr unsigned int CJILPJOJOIF___c_TypeDefinitionIndex = 26887;

	class CJILPJOJOIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJILPJOJOIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJILPJOJOIF___C_CTOR_OFFSET))(this);
		}

		::CJILPJOJOIF* __cctor_b__18_0()
		{
			return ((::CJILPJOJOIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJILPJOJOIF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
