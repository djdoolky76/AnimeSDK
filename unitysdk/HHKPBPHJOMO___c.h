#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHKPBPHJOMO;
namespace System { class Object; }

#define HHKPBPHJOMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F884B40)
#define HHKPBPHJOMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F884B70)
#define HHKPBPHJOMO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F884B80)

inline static constexpr unsigned int HHKPBPHJOMO___c_TypeDefinitionIndex = 28468;

	class HHKPBPHJOMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHKPBPHJOMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO___C_CTOR_OFFSET))(this);
		}

		::HHKPBPHJOMO* __cctor_b__18_0()
		{
			return ((::HHKPBPHJOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
