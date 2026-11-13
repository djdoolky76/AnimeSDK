#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHDEDBMNMCP;
namespace System { class Object; }

#define AHDEDBMNMCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204FAA40)
#define AHDEDBMNMCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204FAA70)
#define AHDEDBMNMCP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x204FAA80)

inline static constexpr unsigned int AHDEDBMNMCP___c_TypeDefinitionIndex = 31767;

	class AHDEDBMNMCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHDEDBMNMCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP___C_CTOR_OFFSET))(this);
		}

		::AHDEDBMNMCP* __cctor_b__28_0()
		{
			return ((::AHDEDBMNMCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
