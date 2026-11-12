#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMFKPHCLAJE;
namespace System { class Object; }

#define GMFKPHCLAJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E28F0)
#define GMFKPHCLAJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E2930)
#define GMFKPHCLAJE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F7E2940)

inline static constexpr unsigned int GMFKPHCLAJE___c_TypeDefinitionIndex = 31399;

	class GMFKPHCLAJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMFKPHCLAJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE___C_CTOR_OFFSET))(this);
		}

		::GMFKPHCLAJE* __cctor_b__23_0()
		{
			return ((::GMFKPHCLAJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
