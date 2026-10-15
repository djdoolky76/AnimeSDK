#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAMIHIIOBNM;
namespace System { class Object; }

#define BAMIHIIOBNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BC3B0)
#define BAMIHIIOBNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BC3F0)
#define BAMIHIIOBNM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7BC400)

inline static constexpr unsigned int BAMIHIIOBNM___c_TypeDefinitionIndex = 34878;

	class BAMIHIIOBNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAMIHIIOBNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIHIIOBNM___C_CTOR_OFFSET))(this);
		}

		::BAMIHIIOBNM* __cctor_b__23_0()
		{
			return ((::BAMIHIIOBNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIHIIOBNM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
