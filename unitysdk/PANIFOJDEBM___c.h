#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PANIFOJDEBM;
namespace System { class Object; }

#define PANIFOJDEBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC4980)
#define PANIFOJDEBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC49B0)
#define PANIFOJDEBM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DEC49C0)

inline static constexpr unsigned int PANIFOJDEBM___c_TypeDefinitionIndex = 32626;

	class PANIFOJDEBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PANIFOJDEBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANIFOJDEBM___C_CTOR_OFFSET))(this);
		}

		::PANIFOJDEBM* __cctor_b__18_0()
		{
			return ((::PANIFOJDEBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANIFOJDEBM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
