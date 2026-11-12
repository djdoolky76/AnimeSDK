#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLLJIHLMKDI;
namespace System { class Object; }

#define FLLJIHLMKDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6C5230)
#define FLLJIHLMKDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C5260)
#define FLLJIHLMKDI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6C5270)

inline static constexpr unsigned int FLLJIHLMKDI___c_TypeDefinitionIndex = 27221;

	class FLLJIHLMKDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLLJIHLMKDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI___C_CTOR_OFFSET))(this);
		}

		::FLLJIHLMKDI* __cctor_b__28_0()
		{
			return ((::FLLJIHLMKDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
