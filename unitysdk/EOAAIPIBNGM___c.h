#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOAAIPIBNGM;
namespace System { class Object; }

#define EOAAIPIBNGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C7ED0)
#define EOAAIPIBNGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C7F10)
#define EOAAIPIBNGM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2C7F20)

inline static constexpr unsigned int EOAAIPIBNGM___c_TypeDefinitionIndex = 26712;

	class EOAAIPIBNGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOAAIPIBNGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM___C_CTOR_OFFSET))(this);
		}

		::EOAAIPIBNGM* __cctor_b__28_0()
		{
			return ((::EOAAIPIBNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAAIPIBNGM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
