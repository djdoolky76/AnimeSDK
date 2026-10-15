#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKPFPMJBNEP;
namespace System { class Object; }

#define HKPFPMJBNEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B95B0)
#define HKPFPMJBNEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B95F0)
#define HKPFPMJBNEP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5B9600)

inline static constexpr unsigned int HKPFPMJBNEP___c_TypeDefinitionIndex = 35132;

	class HKPFPMJBNEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46C10);
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
