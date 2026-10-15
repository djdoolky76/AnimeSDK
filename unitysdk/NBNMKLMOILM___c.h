#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBNMKLMOILM;
namespace System { class Object; }

#define NBNMKLMOILM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA81E0)
#define NBNMKLMOILM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA8220)
#define NBNMKLMOILM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAA8230)

inline static constexpr unsigned int NBNMKLMOILM___c_TypeDefinitionIndex = 27708;

	class NBNMKLMOILM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNMKLMOILM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM___C_CTOR_OFFSET))(this);
		}

		::NBNMKLMOILM* __cctor_b__28_0()
		{
			return ((::NBNMKLMOILM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNMKLMOILM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
