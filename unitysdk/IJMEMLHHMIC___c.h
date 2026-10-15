#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJMEMLHHMIC;
namespace System { class Object; }

#define IJMEMLHHMIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66B090)
#define IJMEMLHHMIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66B0D0)
#define IJMEMLHHMIC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E66B0E0)

inline static constexpr unsigned int IJMEMLHHMIC___c_TypeDefinitionIndex = 32610;

	class IJMEMLHHMIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJMEMLHHMIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC___C_CTOR_OFFSET))(this);
		}

		::IJMEMLHHMIC* __cctor_b__28_0()
		{
			return ((::IJMEMLHHMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEMLHHMIC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
