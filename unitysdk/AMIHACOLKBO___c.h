#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMIHACOLKBO;
namespace System { class Object; }

#define AMIHACOLKBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F6100)
#define AMIHACOLKBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F6140)
#define AMIHACOLKBO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4F6150)

inline static constexpr unsigned int AMIHACOLKBO___c_TypeDefinitionIndex = 29100;

	class AMIHACOLKBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x456F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIHACOLKBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO___C_CTOR_OFFSET))(this);
		}

		::AMIHACOLKBO* __cctor_b__28_0()
		{
			return ((::AMIHACOLKBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIHACOLKBO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
