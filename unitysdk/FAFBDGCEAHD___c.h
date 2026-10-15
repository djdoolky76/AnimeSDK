#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAFBDGCEAHD;
namespace System { class Object; }

#define FAFBDGCEAHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F1280)
#define FAFBDGCEAHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F12C0)
#define FAFBDGCEAHD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2F12D0)

inline static constexpr unsigned int FAFBDGCEAHD___c_TypeDefinitionIndex = 29287;

	class FAFBDGCEAHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAFBDGCEAHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD___C_CTOR_OFFSET))(this);
		}

		::FAFBDGCEAHD* __cctor_b__28_0()
		{
			return ((::FAFBDGCEAHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFBDGCEAHD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
