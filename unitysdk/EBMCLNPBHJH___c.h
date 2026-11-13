#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMCLNPBHJH;
namespace System { class Object; }

#define EBMCLNPBHJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F369DC0)
#define EBMCLNPBHJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F369E00)
#define EBMCLNPBHJH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F369E10)

inline static constexpr unsigned int EBMCLNPBHJH___c_TypeDefinitionIndex = 29276;

	class EBMCLNPBHJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMCLNPBHJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH___C_CTOR_OFFSET))(this);
		}

		::EBMCLNPBHJH* __cctor_b__28_0()
		{
			return ((::EBMCLNPBHJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
