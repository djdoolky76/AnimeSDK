#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCCPHILOCC;
namespace System { class Object; }

#define CDCCPHILOCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0531D0)
#define CDCCPHILOCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E053200)
#define CDCCPHILOCC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E053210)

inline static constexpr unsigned int CDCCPHILOCC___c_TypeDefinitionIndex = 25336;

	class CDCCPHILOCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDCCPHILOCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC___C_CTOR_OFFSET))(this);
		}

		::CDCCPHILOCC* __cctor_b__28_0()
		{
			return ((::CDCCPHILOCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCPHILOCC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
