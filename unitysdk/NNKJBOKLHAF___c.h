#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNKJBOKLHAF;
namespace System { class Object; }

#define NNKJBOKLHAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB564D0)
#define NNKJBOKLHAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB56500)
#define NNKJBOKLHAF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB56510)

inline static constexpr unsigned int NNKJBOKLHAF___c_TypeDefinitionIndex = 31347;

	class NNKJBOKLHAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKJBOKLHAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF___C_CTOR_OFFSET))(this);
		}

		::NNKJBOKLHAF* __cctor_b__18_0()
		{
			return ((::NNKJBOKLHAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
