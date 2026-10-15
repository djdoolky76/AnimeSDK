#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHONFFLAMHB;
namespace System { class Object; }

#define GHONFFLAMHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E490FA0)
#define GHONFFLAMHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E490FE0)
#define GHONFFLAMHB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E490FF0)

inline static constexpr unsigned int GHONFFLAMHB___c_TypeDefinitionIndex = 31953;

	class GHONFFLAMHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x186B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHONFFLAMHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONFFLAMHB___C_CTOR_OFFSET))(this);
		}

		::GHONFFLAMHB* __cctor_b__23_0()
		{
			return ((::GHONFFLAMHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONFFLAMHB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
