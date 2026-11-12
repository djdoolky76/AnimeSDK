#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOIPOJANKGI;
namespace System { class Object; }

#define DOIPOJANKGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4E0160)
#define DOIPOJANKGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E01A0)
#define DOIPOJANKGI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4E01B0)

inline static constexpr unsigned int DOIPOJANKGI___c_TypeDefinitionIndex = 29282;

	class DOIPOJANKGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOIPOJANKGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPOJANKGI___C_CTOR_OFFSET))(this);
		}

		::DOIPOJANKGI* __cctor_b__23_0()
		{
			return ((::DOIPOJANKGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPOJANKGI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
