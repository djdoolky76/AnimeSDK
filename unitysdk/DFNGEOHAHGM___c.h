#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFNGEOHAHGM;
namespace System { class Object; }

#define DFNGEOHAHGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17AEA0)
#define DFNGEOHAHGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17AED0)
#define DFNGEOHAHGM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E17AEE0)

inline static constexpr unsigned int DFNGEOHAHGM___c_TypeDefinitionIndex = 33673;

	class DFNGEOHAHGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFNGEOHAHGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM___C_CTOR_OFFSET))(this);
		}

		::DFNGEOHAHGM* __cctor_b__38_0()
		{
			return ((::DFNGEOHAHGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNGEOHAHGM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
