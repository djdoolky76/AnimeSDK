#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGJKAIPLMCA;
namespace System { class Object; }

#define JGJKAIPLMCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73B630)
#define JGJKAIPLMCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73B670)
#define JGJKAIPLMCA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E73B680)

inline static constexpr unsigned int JGJKAIPLMCA___c_TypeDefinitionIndex = 32474;

	class JGJKAIPLMCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGJKAIPLMCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA___C_CTOR_OFFSET))(this);
		}

		::JGJKAIPLMCA* __cctor_b__33_0()
		{
			return ((::JGJKAIPLMCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAIPLMCA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
