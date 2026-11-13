#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AODEGGFNDJP;
namespace System { class Object; }

#define AODEGGFNDJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201A8A50)
#define AODEGGFNDJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201A8A90)
#define AODEGGFNDJP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201A8AA0)

inline static constexpr unsigned int AODEGGFNDJP___c_TypeDefinitionIndex = 28619;

	class AODEGGFNDJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AODEGGFNDJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODEGGFNDJP___C_CTOR_OFFSET))(this);
		}

		::AODEGGFNDJP* __cctor_b__23_0()
		{
			return ((::AODEGGFNDJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODEGGFNDJP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
