#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHLMPOHKPKG;
namespace System { class Object; }

#define LHLMPOHKPKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9671F0)
#define LHLMPOHKPKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E967230)
#define LHLMPOHKPKG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E967240)

inline static constexpr unsigned int LHLMPOHKPKG___c_TypeDefinitionIndex = 29226;

	class LHLMPOHKPKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHLMPOHKPKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLMPOHKPKG___C_CTOR_OFFSET))(this);
		}

		::LHLMPOHKPKG* __cctor_b__43_0()
		{
			return ((::LHLMPOHKPKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLMPOHKPKG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
