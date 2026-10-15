#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFGAIOOGPPA;
namespace System { class Object; }

#define DFGAIOOGPPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E175220)
#define DFGAIOOGPPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E175250)
#define DFGAIOOGPPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E175260)

inline static constexpr unsigned int DFGAIOOGPPA___c_TypeDefinitionIndex = 33578;

	class DFGAIOOGPPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFGAIOOGPPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA___C_CTOR_OFFSET))(this);
		}

		::DFGAIOOGPPA* __cctor_b__28_0()
		{
			return ((::DFGAIOOGPPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
