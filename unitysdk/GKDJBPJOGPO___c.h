#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKDJBPJOGPO;
namespace System { class Object; }

#define GKDJBPJOGPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA2DE70)
#define GKDJBPJOGPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2DEA0)
#define GKDJBPJOGPO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA2DEB0)

inline static constexpr unsigned int GKDJBPJOGPO___c_TypeDefinitionIndex = 27829;

	class GKDJBPJOGPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKDJBPJOGPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDJBPJOGPO___C_CTOR_OFFSET))(this);
		}

		::GKDJBPJOGPO* __cctor_b__23_0()
		{
			return ((::GKDJBPJOGPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDJBPJOGPO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
