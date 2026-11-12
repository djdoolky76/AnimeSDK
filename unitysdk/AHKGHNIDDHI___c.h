#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKGHNIDDHI;
namespace System { class Object; }

#define AHKGHNIDDHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F527A20)
#define AHKGHNIDDHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F527A60)
#define AHKGHNIDDHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F527A70)

inline static constexpr unsigned int AHKGHNIDDHI___c_TypeDefinitionIndex = 33505;

	class AHKGHNIDDHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHKGHNIDDHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGHNIDDHI___C_CTOR_OFFSET))(this);
		}

		::AHKGHNIDDHI* __cctor_b__23_0()
		{
			return ((::AHKGHNIDDHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGHNIDDHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
