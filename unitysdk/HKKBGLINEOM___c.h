#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKKBGLINEOM;
namespace System { class Object; }

#define HKKBGLINEOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4170)
#define HKKBGLINEOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B41B0)
#define HKKBGLINEOM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5B41C0)

inline static constexpr unsigned int HKKBGLINEOM___c_TypeDefinitionIndex = 27103;

	class HKKBGLINEOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x459E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKKBGLINEOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM___C_CTOR_OFFSET))(this);
		}

		::HKKBGLINEOM* __cctor_b__28_0()
		{
			return ((::HKKBGLINEOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKBGLINEOM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
