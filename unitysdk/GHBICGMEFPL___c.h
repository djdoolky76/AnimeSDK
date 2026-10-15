#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHBICGMEFPL;
namespace System { class Object; }

#define GHBICGMEFPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E455D10)
#define GHBICGMEFPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E455D40)
#define GHBICGMEFPL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E455D50)

inline static constexpr unsigned int GHBICGMEFPL___c_TypeDefinitionIndex = 26094;

	class GHBICGMEFPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHBICGMEFPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBICGMEFPL___C_CTOR_OFFSET))(this);
		}

		::GHBICGMEFPL* __cctor_b__48_0()
		{
			return ((::GHBICGMEFPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBICGMEFPL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
