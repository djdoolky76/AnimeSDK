#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDDEIPOBBCN;
namespace System { class Object; }

#define CDDEIPOBBCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0544E0)
#define CDDEIPOBBCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E054510)
#define CDDEIPOBBCN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E054520)

inline static constexpr unsigned int CDDEIPOBBCN___c_TypeDefinitionIndex = 33243;

	class CDDEIPOBBCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDEIPOBBCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDEIPOBBCN___C_CTOR_OFFSET))(this);
		}

		::CDDEIPOBBCN* __cctor_b__23_0()
		{
			return ((::CDDEIPOBBCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDEIPOBBCN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
