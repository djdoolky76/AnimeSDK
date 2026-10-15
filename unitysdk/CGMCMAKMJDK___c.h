#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGMCMAKMJDK;
namespace System { class Object; }

#define CGMCMAKMJDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B4B40)
#define CGMCMAKMJDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B4B70)
#define CGMCMAKMJDK___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1E0B4B80)

inline static constexpr unsigned int CGMCMAKMJDK___c_TypeDefinitionIndex = 27294;

	class CGMCMAKMJDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGMCMAKMJDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMCMAKMJDK___C_CTOR_OFFSET))(this);
		}

		::CGMCMAKMJDK* __cctor_b__73_0()
		{
			return ((::CGMCMAKMJDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMCMAKMJDK___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
