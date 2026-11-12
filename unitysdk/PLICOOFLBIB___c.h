#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLICOOFLBIB;
namespace System { class Object; }

#define PLICOOFLBIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F253900)
#define PLICOOFLBIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F253940)
#define PLICOOFLBIB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F253950)

inline static constexpr unsigned int PLICOOFLBIB___c_TypeDefinitionIndex = 32194;

	class PLICOOFLBIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLICOOFLBIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLICOOFLBIB___C_CTOR_OFFSET))(this);
		}

		::PLICOOFLBIB* __cctor_b__23_0()
		{
			return ((::PLICOOFLBIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLICOOFLBIB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
