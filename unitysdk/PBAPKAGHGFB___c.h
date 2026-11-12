#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBAPKAGHGFB;
namespace System { class Object; }

#define PBAPKAGHGFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1BDC40)
#define PBAPKAGHGFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1BDC80)
#define PBAPKAGHGFB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1BDC90)

inline static constexpr unsigned int PBAPKAGHGFB___c_TypeDefinitionIndex = 32835;

	class PBAPKAGHGFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBAPKAGHGFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAPKAGHGFB___C_CTOR_OFFSET))(this);
		}

		::PBAPKAGHGFB* __cctor_b__23_0()
		{
			return ((::PBAPKAGHGFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAPKAGHGFB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
