#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLPMBEPBPGN;
namespace System { class Object; }

#define FLPMBEPBPGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DE110)
#define FLPMBEPBPGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DE150)
#define FLPMBEPBPGN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3DE160)

inline static constexpr unsigned int FLPMBEPBPGN___c_TypeDefinitionIndex = 34769;

	class FLPMBEPBPGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLPMBEPBPGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMBEPBPGN___C_CTOR_OFFSET))(this);
		}

		::FLPMBEPBPGN* __cctor_b__23_0()
		{
			return ((::FLPMBEPBPGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPMBEPBPGN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
