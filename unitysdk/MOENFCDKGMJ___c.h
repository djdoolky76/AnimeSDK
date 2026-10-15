#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOENFCDKGMJ;
namespace System { class Object; }

#define MOENFCDKGMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA7490)
#define MOENFCDKGMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA74D0)
#define MOENFCDKGMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAA74E0)

inline static constexpr unsigned int MOENFCDKGMJ___c_TypeDefinitionIndex = 29371;

	class MOENFCDKGMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOENFCDKGMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ___C_CTOR_OFFSET))(this);
		}

		::MOENFCDKGMJ* __cctor_b__23_0()
		{
			return ((::MOENFCDKGMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOENFCDKGMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
