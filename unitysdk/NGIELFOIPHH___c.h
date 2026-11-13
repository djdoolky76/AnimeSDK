#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGIELFOIPHH;
namespace System { class Object; }

#define NGIELFOIPHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204024F0)
#define NGIELFOIPHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20402530)
#define NGIELFOIPHH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20402540)

inline static constexpr unsigned int NGIELFOIPHH___c_TypeDefinitionIndex = 27973;

	class NGIELFOIPHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGIELFOIPHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIELFOIPHH___C_CTOR_OFFSET))(this);
		}

		::NGIELFOIPHH* __cctor_b__18_0()
		{
			return ((::NGIELFOIPHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIELFOIPHH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
