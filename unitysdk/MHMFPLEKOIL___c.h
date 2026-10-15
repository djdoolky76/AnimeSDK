#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHMFPLEKOIL;
namespace System { class Object; }

#define MHMFPLEKOIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA36AB0)
#define MHMFPLEKOIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA36AF0)
#define MHMFPLEKOIL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA36B00)

inline static constexpr unsigned int MHMFPLEKOIL___c_TypeDefinitionIndex = 32107;

	class MHMFPLEKOIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHMFPLEKOIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMFPLEKOIL___C_CTOR_OFFSET))(this);
		}

		::MHMFPLEKOIL* __cctor_b__23_0()
		{
			return ((::MHMFPLEKOIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMFPLEKOIL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
