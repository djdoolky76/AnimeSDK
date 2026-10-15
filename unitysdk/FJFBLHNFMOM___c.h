#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJFBLHNFMOM;
namespace System { class Object; }

#define FJFBLHNFMOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E374A10)
#define FJFBLHNFMOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E374A50)
#define FJFBLHNFMOM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E374A60)

inline static constexpr unsigned int FJFBLHNFMOM___c_TypeDefinitionIndex = 33717;

	class FJFBLHNFMOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJFBLHNFMOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM___C_CTOR_OFFSET))(this);
		}

		::FJFBLHNFMOM* __cctor_b__28_0()
		{
			return ((::FJFBLHNFMOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFBLHNFMOM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
