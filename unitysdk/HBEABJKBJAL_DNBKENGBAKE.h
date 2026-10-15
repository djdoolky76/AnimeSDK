#pragma once
#include "unitysdk/unitysdk.h"
class HBEABJKBJAL;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HBEABJKBJAL_DNBKENGBAKE_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE07A0)
#define HBEABJKBJAL_DNBKENGBAKE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15BE0940)
#define HBEABJKBJAL_DNBKENGBAKE_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x15BE08E0)

inline static constexpr unsigned int HBEABJKBJAL_DNBKENGBAKE_TypeDefinitionIndex = 49488;

	class HBEABJKBJAL_DNBKENGBAKE
	{
	public:
		::System::Void _ctor(::System::Single a1, ::System::String* a2, ::HBEABJKBJAL* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::HBEABJKBJAL*, ::System::Int32))((::PBYTE)hIl2Cpp + HBEABJKBJAL_DNBKENGBAKE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* MNGGAOFNGIP()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEABJKBJAL_DNBKENGBAKE_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEABJKBJAL_DNBKENGBAKE_KHGIKBFDLFB_OFFSET))(this);
		}

	};
