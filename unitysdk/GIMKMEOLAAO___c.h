#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIMKMEOLAAO;
namespace System { class Object; }

#define GIMKMEOLAAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBD5EE0)
#define GIMKMEOLAAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD5F20)
#define GIMKMEOLAAO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBD5F30)

inline static constexpr unsigned int GIMKMEOLAAO___c_TypeDefinitionIndex = 29694;

	class GIMKMEOLAAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMKMEOLAAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO___C_CTOR_OFFSET))(this);
		}

		::GIMKMEOLAAO* __cctor_b__33_0()
		{
			return ((::GIMKMEOLAAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMKMEOLAAO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
