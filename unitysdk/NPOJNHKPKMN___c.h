#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPOJNHKPKMN;
namespace System { class Object; }

#define NPOJNHKPKMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB74170)
#define NPOJNHKPKMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB741A0)
#define NPOJNHKPKMN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB741B0)

inline static constexpr unsigned int NPOJNHKPKMN___c_TypeDefinitionIndex = 33863;

	class NPOJNHKPKMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPOJNHKPKMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOJNHKPKMN___C_CTOR_OFFSET))(this);
		}

		::NPOJNHKPKMN* __cctor_b__18_0()
		{
			return ((::NPOJNHKPKMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOJNHKPKMN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
