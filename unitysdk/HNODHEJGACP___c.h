#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNODHEJGACP;
namespace System { class Object; }

#define HNODHEJGACP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E2360)
#define HNODHEJGACP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E23A0)
#define HNODHEJGACP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5E23B0)

inline static constexpr unsigned int HNODHEJGACP___c_TypeDefinitionIndex = 29796;

	class HNODHEJGACP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNODHEJGACP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNODHEJGACP___C_CTOR_OFFSET))(this);
		}

		::HNODHEJGACP* __cctor_b__23_0()
		{
			return ((::HNODHEJGACP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNODHEJGACP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
