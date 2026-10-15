#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDFAFAIMJOM;
namespace System { class Object; }

#define JDFAFAIMJOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7094B0)
#define JDFAFAIMJOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7094F0)
#define JDFAFAIMJOM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E709500)

inline static constexpr unsigned int JDFAFAIMJOM___c_TypeDefinitionIndex = 26451;

	class JDFAFAIMJOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDFAFAIMJOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM___C_CTOR_OFFSET))(this);
		}

		::JDFAFAIMJOM* __cctor_b__28_0()
		{
			return ((::JDFAFAIMJOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
