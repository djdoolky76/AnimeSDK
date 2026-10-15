#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACAKOLCGDLL;
namespace System { class Object; }

#define ACAKOLCGDLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD7A10)
#define ACAKOLCGDLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD7A50)
#define ACAKOLCGDLL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DDD7A60)

inline static constexpr unsigned int ACAKOLCGDLL___c_TypeDefinitionIndex = 27990;

	class ACAKOLCGDLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACAKOLCGDLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL___C_CTOR_OFFSET))(this);
		}

		::ACAKOLCGDLL* __cctor_b__43_0()
		{
			return ((::ACAKOLCGDLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
