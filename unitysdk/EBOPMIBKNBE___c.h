#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBOPMIBKNBE;
namespace System { class Object; }

#define EBOPMIBKNBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2475F0)
#define EBOPMIBKNBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E247630)
#define EBOPMIBKNBE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E247640)

inline static constexpr unsigned int EBOPMIBKNBE___c_TypeDefinitionIndex = 27026;

	class EBOPMIBKNBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CD30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOPMIBKNBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE___C_CTOR_OFFSET))(this);
		}

		::EBOPMIBKNBE* __cctor_b__28_0()
		{
			return ((::EBOPMIBKNBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOPMIBKNBE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
