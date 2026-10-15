#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDNMOFGMMNP;
namespace System { class Object; }

#define KDNMOFGMMNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9220)
#define KDNMOFGMMNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9250)
#define KDNMOFGMMNP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7D9260)

inline static constexpr unsigned int KDNMOFGMMNP___c_TypeDefinitionIndex = 33757;

	class KDNMOFGMMNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDNMOFGMMNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP___C_CTOR_OFFSET))(this);
		}

		::KDNMOFGMMNP* __cctor_b__28_0()
		{
			return ((::KDNMOFGMMNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
