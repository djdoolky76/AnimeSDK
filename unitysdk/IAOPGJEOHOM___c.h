#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAOPGJEOHOM;
namespace System { class Object; }

#define IAOPGJEOHOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60E460)
#define IAOPGJEOHOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60E4A0)
#define IAOPGJEOHOM___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E60E4B0)

inline static constexpr unsigned int IAOPGJEOHOM___c_TypeDefinitionIndex = 29094;

	class IAOPGJEOHOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x406E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAOPGJEOHOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGJEOHOM___C_CTOR_OFFSET))(this);
		}

		::IAOPGJEOHOM* __cctor_b__63_0()
		{
			return ((::IAOPGJEOHOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOPGJEOHOM___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
