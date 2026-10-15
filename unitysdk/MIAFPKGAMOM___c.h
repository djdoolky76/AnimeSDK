#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIAFPKGAMOM;
namespace System { class Object; }

#define MIAFPKGAMOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0C810)
#define MIAFPKGAMOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0C850)
#define MIAFPKGAMOM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA0C860)

inline static constexpr unsigned int MIAFPKGAMOM___c_TypeDefinitionIndex = 27452;

	class MIAFPKGAMOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIAFPKGAMOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFPKGAMOM___C_CTOR_OFFSET))(this);
		}

		::MIAFPKGAMOM* __cctor_b__23_0()
		{
			return ((::MIAFPKGAMOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIAFPKGAMOM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
