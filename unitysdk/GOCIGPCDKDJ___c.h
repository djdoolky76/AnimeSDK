#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOCIGPCDKDJ;
namespace System { class Object; }

#define GOCIGPCDKDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4EB970)
#define GOCIGPCDKDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EB9B0)
#define GOCIGPCDKDJ___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E4EB9C0)

inline static constexpr unsigned int GOCIGPCDKDJ___c_TypeDefinitionIndex = 29628;

	class GOCIGPCDKDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCIGPCDKDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCIGPCDKDJ___C_CTOR_OFFSET))(this);
		}

		::GOCIGPCDKDJ* __cctor_b__58_0()
		{
			return ((::GOCIGPCDKDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCIGPCDKDJ___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
