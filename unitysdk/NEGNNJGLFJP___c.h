#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEGNNJGLFJP;
namespace System { class Object; }

#define NEGNNJGLFJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC7B90)
#define NEGNNJGLFJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC7BD0)
#define NEGNNJGLFJP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAC7BE0)

inline static constexpr unsigned int NEGNNJGLFJP___c_TypeDefinitionIndex = 27320;

	class NEGNNJGLFJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEGNNJGLFJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP___C_CTOR_OFFSET))(this);
		}

		::NEGNNJGLFJP* __cctor_b__23_0()
		{
			return ((::NEGNNJGLFJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
