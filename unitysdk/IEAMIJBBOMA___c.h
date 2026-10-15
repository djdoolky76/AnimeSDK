#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEAMIJBBOMA;
namespace System { class Object; }

#define IEAMIJBBOMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E634A00)
#define IEAMIJBBOMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E634A40)
#define IEAMIJBBOMA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E634A50)

inline static constexpr unsigned int IEAMIJBBOMA___c_TypeDefinitionIndex = 31860;

	class IEAMIJBBOMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x479A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEAMIJBBOMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA___C_CTOR_OFFSET))(this);
		}

		::IEAMIJBBOMA* __cctor_b__28_0()
		{
			return ((::IEAMIJBBOMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIJBBOMA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
