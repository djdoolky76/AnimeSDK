#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKPFPMJBNEP;
namespace System { class Object; }

#define HKPFPMJBNEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8B4C20)
#define HKPFPMJBNEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B4C60)
#define HKPFPMJBNEP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8B4C70)

inline static constexpr unsigned int HKPFPMJBNEP___c_TypeDefinitionIndex = 36060;

	class HKPFPMJBNEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x376F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKPFPMJBNEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPFPMJBNEP___C_CTOR_OFFSET))(this);
		}

		::HKPFPMJBNEP* __cctor_b__23_0()
		{
			return ((::HKPFPMJBNEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPFPMJBNEP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
