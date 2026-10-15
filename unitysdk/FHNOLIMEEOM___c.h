#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNOLIMEEOM;
namespace System { class Object; }

#define FHNOLIMEEOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E366190)
#define FHNOLIMEEOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3661D0)
#define FHNOLIMEEOM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3661E0)

inline static constexpr unsigned int FHNOLIMEEOM___c_TypeDefinitionIndex = 26724;

	class FHNOLIMEEOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNOLIMEEOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM___C_CTOR_OFFSET))(this);
		}

		::FHNOLIMEEOM* __cctor_b__38_0()
		{
			return ((::FHNOLIMEEOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNOLIMEEOM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
