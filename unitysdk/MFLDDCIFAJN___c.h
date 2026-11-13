#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFLDDCIFAJN;
namespace System { class Object; }

#define MFLDDCIFAJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB18DE0)
#define MFLDDCIFAJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB18E20)
#define MFLDDCIFAJN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB18E30)

inline static constexpr unsigned int MFLDDCIFAJN___c_TypeDefinitionIndex = 30130;

	class MFLDDCIFAJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFLDDCIFAJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLDDCIFAJN___C_CTOR_OFFSET))(this);
		}

		::MFLDDCIFAJN* __cctor_b__23_0()
		{
			return ((::MFLDDCIFAJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLDDCIFAJN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
