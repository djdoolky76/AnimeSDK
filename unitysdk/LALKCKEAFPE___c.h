#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LALKCKEAFPE;
namespace System { class Object; }

#define LALKCKEAFPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2038CC90)
#define LALKCKEAFPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2038CCD0)
#define LALKCKEAFPE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2038CCE0)

inline static constexpr unsigned int LALKCKEAFPE___c_TypeDefinitionIndex = 26796;

	class LALKCKEAFPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LALKCKEAFPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKCKEAFPE___C_CTOR_OFFSET))(this);
		}

		::LALKCKEAFPE* __cctor_b__23_0()
		{
			return ((::LALKCKEAFPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKCKEAFPE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
