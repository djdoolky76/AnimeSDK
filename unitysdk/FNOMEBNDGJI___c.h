#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNOMEBNDGJI;
namespace System { class Object; }

#define FNOMEBNDGJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C8760)
#define FNOMEBNDGJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C87A0)
#define FNOMEBNDGJI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3C87B0)

inline static constexpr unsigned int FNOMEBNDGJI___c_TypeDefinitionIndex = 26758;

	class FNOMEBNDGJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNOMEBNDGJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOMEBNDGJI___C_CTOR_OFFSET))(this);
		}

		::FNOMEBNDGJI* __cctor_b__18_0()
		{
			return ((::FNOMEBNDGJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOMEBNDGJI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
