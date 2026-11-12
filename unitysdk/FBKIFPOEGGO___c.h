#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBKIFPOEGGO;
namespace System { class Object; }

#define FBKIFPOEGGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F61DBD0)
#define FBKIFPOEGGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F61DC10)
#define FBKIFPOEGGO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F61DC20)

inline static constexpr unsigned int FBKIFPOEGGO___c_TypeDefinitionIndex = 30555;

	class FBKIFPOEGGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBKIFPOEGGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIFPOEGGO___C_CTOR_OFFSET))(this);
		}

		::FBKIFPOEGGO* __cctor_b__23_0()
		{
			return ((::FBKIFPOEGGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIFPOEGGO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
