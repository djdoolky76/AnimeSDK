#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPFJLNKPEPK;
namespace System { class Object; }

#define EPFJLNKPEPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD91ED0)
#define EPFJLNKPEPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD91F00)
#define EPFJLNKPEPK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD91F10)

inline static constexpr unsigned int EPFJLNKPEPK___c_TypeDefinitionIndex = 32421;

	class EPFJLNKPEPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPFJLNKPEPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK___C_CTOR_OFFSET))(this);
		}

		::EPFJLNKPEPK* __cctor_b__28_0()
		{
			return ((::EPFJLNKPEPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
