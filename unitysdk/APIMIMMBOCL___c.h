#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APIMIMMBOCL;
namespace System { class Object; }

#define APIMIMMBOCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64A5D0)
#define APIMIMMBOCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64A610)
#define APIMIMMBOCL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E64A620)

inline static constexpr unsigned int APIMIMMBOCL___c_TypeDefinitionIndex = 34042;

	class APIMIMMBOCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APIMIMMBOCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL___C_CTOR_OFFSET))(this);
		}

		::APIMIMMBOCL* __cctor_b__28_0()
		{
			return ((::APIMIMMBOCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
