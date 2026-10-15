#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOMMAFEOBOA;
namespace System { class Object; }

#define AOMMAFEOBOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66FD40)
#define AOMMAFEOBOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66FD70)
#define AOMMAFEOBOA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E66FD80)

inline static constexpr unsigned int AOMMAFEOBOA___c_TypeDefinitionIndex = 34549;

	class AOMMAFEOBOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x412E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOMMAFEOBOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA___C_CTOR_OFFSET))(this);
		}

		::AOMMAFEOBOA* __cctor_b__28_0()
		{
			return ((::AOMMAFEOBOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
