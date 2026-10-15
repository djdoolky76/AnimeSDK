#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDECDFFDAIB;
namespace System { class Object; }

#define EDECDFFDAIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2306F0)
#define EDECDFFDAIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E230730)
#define EDECDFFDAIB___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E230740)

inline static constexpr unsigned int EDECDFFDAIB___c_TypeDefinitionIndex = 28513;

	class EDECDFFDAIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDECDFFDAIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDECDFFDAIB___C_CTOR_OFFSET))(this);
		}

		::EDECDFFDAIB* __cctor_b__53_0()
		{
			return ((::EDECDFFDAIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDECDFFDAIB___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
